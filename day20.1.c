#include<stdio.h>

int main (){
	
	int i , n ;
	
	printf("Enter Size : ");
	scanf("%d",&n);
	
	int arr[n] ;
	
	for(i=0 ; i<n ; i++){
			printf("Enter Elements [%d] : ",i);
			scanf("%d",&arr[i]);
	}
	
	for(i=0 ; i<n ; i++){
			printf("%d",arr[i]);
	}
	
	for(i=0 ; i<n ; i++){
			if(arr[i]<0){
				printf("Negative elements in an Array are :");
				printf(" %d\t",arr[i]);
				printf("\n");
			}
	}
	
	
	return 0 ;
}
