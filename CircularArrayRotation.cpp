vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    int n=a.size(),m;
    k=k%n;
    vector<int> res(queries.size());
    for(int i=0;i<queries.size();i++){ 
        m = n-k+queries[i];
        if(m<n){
            res[i] = a[m];
        } else if(m>=n){
            m = m-n;
            res[i] = a[m];
        }
    }
    return res;
}
