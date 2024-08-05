#include<stdio.h>

void main(){
 	
     int n,i,r,fact=1,fact_nr=1;
	printf("Enter n & r (positive integers) respectively to calculate nPr : ");
	scanf("%d%d",&n,&r);

	if(n>=r){
	
  			 if(n>=0 && r>=0){
	                                     for(i=1;i<=n;i++)
                                                       fact=fact*i;
 
	                                    for(i=1;i<=(n-r);i++)
                                                       fact_nr=fact_nr*i;                 

	           int npr=fact/fact_nr;
	           printf("The value of nPr is : %d :)\n",npr);

	  		 }else printf("Please enter two positive integers :(");

	}else printf("Sorry!Your 'n' is less than 'r' :(");

}
