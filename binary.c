#include<stdio.h>
int main(){
	int n;
	printf("Enter number of elements in array:");
	scanf("%d",&n);
	int a[n],key,i,j,temp;
	printf("enter the elements in the array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Sorted list:");
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	printf("enter the key to search:");
	scanf("%d",&key);
	int low=0,high=n-1,mid,found=0;
	while(low<=high){
		mid=(low+high)/2;
		if(key==a[mid]){
			printf("key found at index:%d",mid);
			found=1;
			break;
		}
		else if(key<a[mid]){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	if(found==0){
		printf("key not found!");
	}
}
