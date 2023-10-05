bool findPair(int arr[], int size, int n)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < size; i++) {
        mpp[arr[i]]++;
 

        if (n == 0 && mpp[arr[i]] > 1)
            return true;
    }
 
    if (n == 0)
        return false;
 
    for (int i = 0; i < size; i++) {
        if (mpp.find(n + arr[i]) != mpp.end()) {
            cout << "Pair Found: (" << arr[i] << ", "
                 << n + arr[i] << ")";
            return true;
        }
    }
 
    cout << "No Pair found";
    return false;
}