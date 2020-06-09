int findDigits(int n) {
    int tmp=n,count = 0;
    while(n != 0){
        if(n%10 != 0 && tmp%(n%10)==0) count++;
        n /= 10;
    }
    return count;
}
