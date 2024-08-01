#include<stdio.h>
#include<math.h>

int main()
{
	 
	 printf("Please give the n : ");
	 int n;
	scanf("%d",&n);
	int a[n],i,sum=0;
	
	for(i=0;i<n;i++){
	      printf("Please enter %dth number  : ",i+1);
	      scanf("%d",&a[i]);
	      sum=sum+a[i];
	}
	
	float avg=sum/(float)n;
	
	printf("\nThe exact avg. of given %d numbers is : %f\n",n,avg);
	
	printf("The int. avg. of given %d numbers is : %.0f",n,floor(avg));
	
	return 0;
}