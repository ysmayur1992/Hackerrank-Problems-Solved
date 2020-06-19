int Jump(vector<int> c) {
    int jump=0;
    for(int i=0;i<c.size()-1;i=i){
        if(c[i+1]==0 && c[i+2] == 0 && c[i]==0){
            jump += 1;
            i += 2;
        } else if(c[i+1] != 0 && c[i+2] == 0 && c[i]==0){
            jump += 1;
            i+=2;
        } else if(c[i+1] == 0 && c[i+2] != 0 && c[i]==0){
            jump += 1;
            i+=1;
        } else if(c[i+1]==0 && c[i+2]==0 && c[i] != 0){
            jump += 1;
            i+=2;
        } else jump = 0;
    }
    return jump;
}
