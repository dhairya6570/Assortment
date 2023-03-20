#include<stdio.h>

int main (){
	
	int i , j , n , m ;
	
	printf("Enter size of first matrix : ");
	scanf("%d",&n);
	
	int arr[n][n] ;
	
	for(i=0 ; i<n ; i++){
		
		for(j=0 ; j<n ; j++){
			printf("Enter Element of first matrix [%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0 ; i<n ; i++){
		
		for(j=0 ; j<n ; j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter size of second matrix : ");
	scanf("%d",&m);
	
	int mat[m][m] ;
	
	for(i=0 ; i<m ; i++){
		
		for(j=0 ; j<m ; j++){
			printf("Enter Element of second matrix [%d][%d] : ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	
	for(i=0 ; i<m ; i++){
		
		for(j=0 ; j<m ; j++){
			printf("%d",mat[i][j]);
		}
		printf("\n");
	}
	
	int sum[n][m] ;
	
	for(i=0 ; i<n ; i++){
		
		for(j=0 ; j<m ; j++){
			
			sum[i][j] = arr[i][j] + mat[i][j] ;
		
		}
		
	}
	
	printf("Addition of two matrix are : \n");
	
	for(i=0 ; i<n ; i++){
		
		for(j=0 ; j<m ; j++){
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	
	return 0 ;
}
