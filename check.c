#include<stdio.h>
void check(int n){
	if(n%2==0)
		printf("Even number");
	else
		printf("Odd number");
}
int main(){
	int x;
	printf("Enter the number: ");
	scanf("%d",&x);
	check(x);
	return 0;
}
