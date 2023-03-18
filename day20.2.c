#include<stdio.h>

int main (){
	
	int i , j , n , sum=0 ;
	
	printf("Enter size of an Array : ");
	scanf("%d",&n);
	
	int arr[n][n];
	
	for(i=0 ; i<n ; i++){
		
		for(j=0 ; j<n ; j++){
			printf("Enter Element of Array [%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0 ; i<n ; i++){
		
		for(j=0 ; j<n ; j++){
			
			printf("%d",arr[i][j]);
						
		}
		printf("\n");
	}
	
	for(i=0 ; i<n ; i++){
		
		sum += arr[i][n-i-1];
		printf("\n");
		
	}
	
	printf("Sum of Anti-Diagonal : %d",sum);
	
	return 0 ; 
}
