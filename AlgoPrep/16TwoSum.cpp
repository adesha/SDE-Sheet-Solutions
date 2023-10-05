bool hasArrayTwoCandidates(int A[], int arr_size, int sum)
{
    int l, r;

    sort(A, A + arr_size);
 
    l = 0;
    r = arr_size - 1;
    while (l < r) {
        if (A[l] + A[r] == sum)
            return 1;
        else if (A[l] + A[r] < sum)
            l++;
        else 
            r--;
    }
    return 0;
}