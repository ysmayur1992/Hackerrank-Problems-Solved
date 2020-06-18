int nonDivisibleSubset(int k, vector<int> s) {
    int count=0;
    vector<int> rem(k);
    for(int i=0;i<s.size();i++){
        rem[s[i]%k]++;
    }
    for(int i=1;i<=(k/2);i++){
        if(i==k-i){
            count++;
            break;
        }
        count += max(rem[i],rem[k-i]);
    }
    if(rem[0]>0) count++;
    return count;
}
