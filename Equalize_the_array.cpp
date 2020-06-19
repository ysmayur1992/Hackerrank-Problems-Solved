int repeatedelement(vector<int> v){
    int count=0,element,highest;
    for(auto i:v){
        element = i;
        int tmp=0;
        for(auto j:v){
            if(j==element){
                tmp++;
                if(tmp>=count){
                    count=tmp;
                    highest=element;
                }
            }
        }
    }
    return highest;
}
int equalizeArray(vector<int> arr) {
    vector<int> res;
    sort(arr.begin(),arr.end());
    int rep = repeatedelement(arr);
    for(auto i:arr){
        if(i==rep) res.push_back(i);
    }
    return arr.size()-res.size();
}
