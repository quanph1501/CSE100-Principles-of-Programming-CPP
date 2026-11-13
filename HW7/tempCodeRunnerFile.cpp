string printArray(int a[], int n){
    string out;
    for (int i = 0; i < n; i++){
        out += to_string(a[i]) + "\n";
    }
    return out;
}