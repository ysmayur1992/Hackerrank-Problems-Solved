vector<int> permutationEquation(vector<int> p) {
    int n=p.size(),a,b,c,k;
    vector<int> v;
    for(int i=0;i<n;i++){
        a=i+1;
        for(int j=0;j<n;j++){
            if(p[j]==a){
                b=j+1;
                for(int k=0;k<n;k++){
                    if(p[k]==b){
                        v.push_back(k+1);
                    }
                }
            }
        }
        }
    return v;
}
