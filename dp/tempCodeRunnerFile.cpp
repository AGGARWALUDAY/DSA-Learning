for(int j=1;j<=n;j++){
        maxsofar=max(maxsofar,p[j-1]+topdown(n-j, p, dp));
    }