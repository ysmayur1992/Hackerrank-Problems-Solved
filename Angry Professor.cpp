tring angryProfessor(int k, vector<int> a) {
    string s;
    vector<int> v,t;
    for(int i=0;i<a.size();i++){
        if(a[i]<=0){v.push_back(a[i]);}
    }
    if(v.size()>=k){s = "NO";} 
    if(v.size()<k)
    {s =  "YES";}
    return s;
}
