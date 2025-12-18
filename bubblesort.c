#include<stdio.h>
int main(){
	int n;
	printf("enter number of elements:");
	scanf("%d",&n);
	int a[n],i,j,temp;
	printf("enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("The sorted list:");
	for(i=0;i<n;i++){
		printf("%3d",a[i]);
	}
}
