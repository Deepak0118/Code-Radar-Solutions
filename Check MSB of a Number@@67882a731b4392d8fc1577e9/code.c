#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int check_bit_size = sizeof(i) * 8;
    int dup = 1 << (check_bit_size - 1);
    if(i & dup){
        printf("Set");
    }
    else{
        printf("Not Set");
    }

}