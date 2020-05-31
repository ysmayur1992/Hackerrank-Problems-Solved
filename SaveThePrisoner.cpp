int saveThePrisoner(int n, int m, int s) {
    int num = m+s-1;
    if(num>n){
        if(num%n==0){
            return n;
        } else return num%n;
    }
    return num;
}
