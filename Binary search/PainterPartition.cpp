#include<iostream>
#include<climits>
using namespace std;

int givethepainter(int size[], int n, int m) {
    int numpainter = 1;
    int time = 0;

    for (int i = 0; i < n; i++) {
        if (size[i] > m) {
            return INT_MAX; // single board too large, impossible
        }

        if (time + size[i] <= m) {
            time += size[i];
        } else {
            numpainter++;
            time = size[i]; // assign current board to new painter
        }
    }
    return numpainter;
}

int mintime(int size[], int k, int n) {
    int s = INT_MIN;
    int e = 0;
    for (int i = 0; i < n; i++) {
        s = max(s, size[i]);
        e += size[i];
    }

    int ans = e;
    while (s <= e) {
        int m = s + (e - s) / 2;

        int requiredPainters = givethepainter(size, n, m);

        if (requiredPainters <= k) {
            ans = m;
            e = m - 1; // try smaller maximum time
        } else {
            s = m + 1; // need more time
        }
    }
    return ans;
}

int main() {
    int k, n;
    cin >> k >> n;

    int *size = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> size[i];
    }

    cout << mintime(size, k, n);
    delete[] size;
}
