#include<stdio.h>

void main(){
 	
     int n,i,r,fact=1,fact_nr=1,fact_r=1;
	printf("Enter n & r (positive integers) respectively to calculate nCr : ");
	scanf("%d%d",&n,&r);

	if(n>=r){
	
  			 if(n>=0 && r>=0){
	                                     for(i=1;i<=n;i++)
                                                       fact=fact*i;
 
	                                    for(i=1;i<=(n-r);i++)
                                                       fact_nr=fact_nr*i;                 
	
	                                     for(i=1;i<=r;i++)
                                                       fact_r=fact_r*i;
     	                                     
	           int ncr=fact/(fact_r*fact_nr);
	           printf("The value of nCr is : %d :)\n",ncr);

	  		 }else printf("Please enter two positive integers :(");

	}else printf("Sorry!Your 'n' is less than 'r' :(");

}
