int utopianTree(int n) {
    int num=1,res;
    vector<int> v;
    for(int i=0;i<100;i++){
        if(i%2==0 && i==0){num=1;
        v.push_back(num);}
        if(i%2==0)
            {num=num+num;
            v.push_back(num);}
        if(i%2 != 0) {num = num+1;
        v.push_back(num);}
    }
    for(int i=0;i<v.size();i++){
        if(i==n) res=v[i];
    }
    return res;
}
