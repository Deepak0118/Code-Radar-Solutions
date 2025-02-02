#include <stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if(c>='0' && c<='9'){
        printf("Digit");
    }
    else if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
        printf("Vowel");
    }
    else if((c>='A' && c<='Z') || (c>='a' && c<='z')){
        printf("Consonant");
    }
    else{
        printf("Special Character");
    }
}