#include<stdio.h>

void main()
{
	
	int n;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	printf("The required arrangement is :\n");
	
	for(int i = 1 ; i<=n ; i++){
		   
        for(int j =1 ; j<=i; j++)
		  	printf("%d",j);
		  
		  printf("\n");
	};
	
}