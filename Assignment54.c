#include<stdio.h>
#include<string.h>

int main(){
    char a[]="MADAM";
    int i, j=strlen(a);
    for(i=0;i<j;i++,j--){
        if(a[i]==a[j]) continue;
        
    }
    if(i>j) printf("Palindrome");
    else printf("Not Palindrome");
}