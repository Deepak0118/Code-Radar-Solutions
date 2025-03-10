#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int pos;
    int ne[100]={0};
    scanf("%d",&pos);
    for(int j =0;j<n;j++){
        if(j+pos < n)
        ne[j+pos]=a[j];
        else{
            int a = n -j-1;
            // int m[] = 
        }
    }
    for(int o = 0;o<n;o++){
        printf("%d\n",ne[o]);
    }
}
