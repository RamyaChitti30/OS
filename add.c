#include<stdio.h>
int add(int a,int b){
	return a+b;
}
int main(){
	int x,y;
	printf("enter two numbers: ");
	scanf("%d %d",&x,&y);
	printf("Sum=%d",add(x,y));
	return 0;
}
