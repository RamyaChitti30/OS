#include<stdio.h>
void swapReference(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int x,y;
	printf("enter the numbers: ");
	scanf("%d %d",&x,&y);
	swapReference(&x,&y);
	printf("after swap :x=%d y=%d",x,y);
	return 0;
}
