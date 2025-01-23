#include <stdio.h>

int main(){
    char a[50],b[50];
    int age;

    scanf("%s %d %s",&a,&age,&b);
    printf("Name: %s\n",a);
    printf("Age: %d\n",age);
    printf("Hobby: %s",b);
}