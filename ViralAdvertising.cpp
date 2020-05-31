int viralAdvertising(int n) {
    int share = 5,like,res=0;
    for(int i=1;i<=n;i++){
        like = share/2;
        res = like+res;
        share = like*3;
    }
    return res;
}
