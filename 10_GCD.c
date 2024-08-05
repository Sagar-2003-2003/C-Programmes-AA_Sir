#include<stdio.h>

int main(){
		int m,n,i,gcd;
		printf("Please enter 2 integers to calculate GCD : ");
		scanf("%d%d",&m,&n);
 
	if(m>=0 && n>=0){
 			
				for(i=1;i<=m && i<=n;i++){
						if(m%i==0 && n%i==0) 
                                           gcd=i;
				}
		printf("The GCD of %d and %d is %d",m,n,gcd);

	}else printf("Failed to calculate! Please enter two positive integers :(");
      return 0;
}
