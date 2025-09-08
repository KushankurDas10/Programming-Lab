#include<stdio.h>

int main(){
	int sal,hra,ta,da;
	printf("Enter salary: ");
	scanf("%d", &sal);
	
	if(sal<=15000&&sal>=0){
		ta = 0.1*sal;
		da = 0.05*sal;
		printf("Gross salary: %d", sal+ta+da);
	}else if(sal>15000){
		hra = 0.2*sal;
		ta = 0.1*sal;
		da = 0.05*sal;
		printf("Gross salary: %d", sal+ta+da+hra);
	}else{
		printf("Invalid Salary");
	}
}