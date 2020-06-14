string appendAndDelete(string s, string t, int k) {
    int slen,tlen,count=0,changes;
    string res;
    slen=s.size();
    tlen=t.size();
    for(int i=0;i<min(slen,tlen);i++){
        if(s[i] != t[i]){
            break;
        }
        count++;
    }
    changes = (tlen - count)+(slen - count);
    if(k>=changes){
        if(k>=(tlen+slen)){
            res = "Yes";
        } else if((k-changes)%2 == 0){res="Yes";}
        else res = "No";
        } else res = "No";
    return res;
}
