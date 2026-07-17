class Solution {
public:
vector<bool> col;
int f(vector<vector<int>>& matrix, int select, int j,int check, int m,int n){
    //Base Case
    if(check==select){
        int ans=0;
        for(int l=0;l<m;l++){
            bool cov=true;
            for(int k=0;k<n;k++){
                if(matrix[l][k]==1 and !col[k]){
                    cov=false;
                    break;
                }
            }
           if(cov) ans++;
        }
        return ans;
    }
    if(j==n) return 0;
    //Recursive Case
    int take=0;
    int skip=0;
    col[j]=true;
    take=f(matrix,select,j+1,check+1,m,n);
    col[j]=false;
    skip=f(matrix,select,j+1,check,m,n);
    return max(take,skip);
}
    int maximumRows(vector<vector<int>>& matrix, int numSelect) {
        int m=matrix.size();
        int n=matrix[0].size();
        col.assign(n,false);
       return  f(matrix,numSelect,0,0,m,n);
    }
};