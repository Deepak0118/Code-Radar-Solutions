int findKthMissing(int arr[], int n, int k) {
    int count = 0;
    int i = 1, j = 0;
    
    while (count < k) {
        if (j < n && arr[j] == i) {
            j++; // Element present hai toh skip karo
        } else {
            count++; // Missing element mila
            if (count == k) {
                return i; // Kth missing element return karo
            }
        }
        i++;
    }
    
    return -1; // Agar missing element na mile toh -1 return karo
}