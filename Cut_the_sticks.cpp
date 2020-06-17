vector<int> cutTheSticks(vector<int> stick) {
    vector<int> res;
    int small = stick[0];
    for(int i=0;i<stick.size();i++){
        res.push_back(stick[i]-small);
    }
    res.erase(remove(res.begin(),res.end(),0),res.end());    
    return res;
}

int main()
{
    int n,small;
    cin>>n;
    vector <int> v(n),res,tmp;
    for(auto& x:v) cin>>x;

    sort(v.begin(),v.end());
    small = v[0];
    tmp = v;
    res.push_back(tmp.size());
   while(1){
       tmp = cutTheSticks(tmp);
       sort(tmp.begin(),tmp.end());
       res.push_back(tmp.size());
       small = tmp[0];     
       if(tmp[0]==0) break;  
   }  
    res.erase(remove(res.begin(),res.end(),0),res.end());
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<"\n";
    }
    return 0;
}
