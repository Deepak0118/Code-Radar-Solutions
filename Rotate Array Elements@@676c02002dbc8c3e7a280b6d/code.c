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
        ne[j+pos]==a[j];
    }
    for(int o = 0;o<n;o++){
        printf("%d\n",ne[o]);
    }
}
