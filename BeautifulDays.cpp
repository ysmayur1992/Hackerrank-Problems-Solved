int revnum(int n){
    int rem = 0, rev=0;
    while(n!=0){
        rev = n%10;
        rem = rem*10+rev;
        n /= 10;
    }
    return rem;
}
int beautifulDays(int n, int m, int k) {
    int d = abs(n-m);
    vector<int> v;
    int a,r,tmp;
    float ans;
    for(int i=0;i<=d;i++){
        a = n+i;
        r = revnum(n+i);
        ans = abs(a-r);
        ans = ans/k;
        tmp = ans;
        if(ans == tmp){
            v.push_back(ans);
        }
    }
    return v.size();
}
