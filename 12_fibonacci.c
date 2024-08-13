#include<stdio.h>

int main(){
	int firstTerm,secondTerm,nextTerm,n;
		firstTerm=0,secondTerm=1;
			printf("Enter the value of n : ");
				scanf("%d",&n);
			printf("The fibonacci series of %d terms is : %d ",n,secondTerm);
				for(int i=1;i<=n-1;i++){
				  nextTerm=firstTerm+secondTerm;
					firstTerm=secondTerm;
						secondTerm=nextTerm;
							printf("%d ",nextTerm);
			}			
		return 0;
}
