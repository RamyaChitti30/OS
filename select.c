#include<stdio.h>
int main(){
	int n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int a[n],i,j,temp;
	printf("Enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("The sorted list is:");
	int pos,swap;
	for(i=0;i<n-1;i++){
		pos=i;
		for(j=i+1;j<n;j++){
			if(a[pos]>a[j]){
				pos=j;
			}
		}
		if(pos!=i){
			swap=a[i];
			a[i]=a[pos];
			a[pos]=swap;
		}
	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}
