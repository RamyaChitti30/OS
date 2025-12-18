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
	for(i=1;i<n;i++){
		temp=a[i];
		j=i-1;
		while((temp<a[j])&&(j>=0)){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("The sorted list is:");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
