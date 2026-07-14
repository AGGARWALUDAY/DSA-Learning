int heapsize=n;
    while(heapsize>1){
        swap(v[0],v[heapsize-1]);
        heapsize--;
        heapify(v,1,heapsize);
    }