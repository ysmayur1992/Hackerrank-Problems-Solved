int squares(int a, int b) {
    int count = floor(sqrt(b)-ceil(sqrt(a))+1);
    return count;
}
