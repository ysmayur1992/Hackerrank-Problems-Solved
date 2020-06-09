vector<int> extraLongFactorials(int n) {
    int k=0,carry;
    vector<int> v(500),res;
    v[0] = 1;

    for(;n>=2;n--){
       carry = 0;
       for(int j=0;j<=k;j++){
           carry = (v[j]*n)+carry;
           v[j] = carry%10;
           carry /= 10;
       }
       while(carry>0){
            v[++k] = carry%10;
            carry /= 10;
       }
    }
    for(int i=0;i<=k;i++)res.push_back(v[i]);

    return res;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<int> res(500);
    res = extraLongFactorials(n);
    for(int i=res.size()-1;i>=0;i--)cout<<res[i];
    return 0;
}
