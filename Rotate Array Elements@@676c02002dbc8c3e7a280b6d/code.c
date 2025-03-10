#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int pos;
    int ne[n];
    scanf("%d",&pos);
    for(int j =0;j<n;j++){
        ne[j+pos]==a[j];
    }
    for(int o = 0;o<n;o++){
        printf("%d\n",ne[o]);
    }
}
