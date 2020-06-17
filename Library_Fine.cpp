int dayfine(int d1, int d2){
    if(d2>d1)return 0; 
    else return 15*abs(d1-d2);
}
int monthfine(int m1,int m2){
    if(m2>m1)return 0;
    else return 500*abs(m1-m2);
}
int yearfine(int y1,int y2){
    if(y2>y1)return 0;
    else return 10000*abs(y1-y2);
}
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    int res;
    
    if(d1 != d2 && m1 == m2 && y1 == y2) res = dayfine(d1,d2);    
    else if(m1 != m2 && y1 == y2) res = monthfine(m1,m2);    
    else if(y1 != y2) res = yearfine(y1,y2);
    else res = 0;
    return res;
}
