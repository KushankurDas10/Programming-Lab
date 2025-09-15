#include<stdio.h>
int main(){
	int n,sum=0;
	printf("Enter number: ");
	scanf("%d",&n);
	for(int i=0; i<=n;i++){
		sum += i;
	}
	printf("The sum is %d",sum);
}