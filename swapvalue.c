#include<stdio.h>
int swapValue(int a,int b){
	int temp=a;
	a=b;
	b=temp;
	printf("After Swap:a=%d b=%d\n",a,b);
}
int main(){
	int x,y;
	printf("Enter the numbers: ");
	scanf("%d %d",&x,&y);
	swapValue(x,y);
	printf("In main:x=%d y=%d",x,y);
	return 0;
}
