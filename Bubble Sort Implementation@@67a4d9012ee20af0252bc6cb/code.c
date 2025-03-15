int bubbleSort(int ar[], int a){
    int min;
    ar[0] = min;
    for(int i=1;i<a;i++){
        if(min>ar[i]){
            min = ar[i];
        }
    }
    printf("%d",min);
}