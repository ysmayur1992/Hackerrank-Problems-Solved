int jumpingOnClouds(vector<int> c, int k) {
    int m,e=100,n=c.size();
    m=k%n;
    e -= c[m]*2+1;
    while (m != 0){
        m = (m+k)%n;
        e -= c[m]*2+1;
    }
    return e;
}
