#include<stdio.h>
#include<math.h>

// 2 methods of factorial calculation is given. 
//Recursion and Loop

//At first, we define a recursive function "fact"

int fact(int x){
	
	if(x==1 || x==0){
		return 1;
	}else{
		return x*fact(x-1);
	}
	
}

//Recursive function ends here. We can call it anytime.

int main()
{
	
	int n,i;
	unsigned int y;
	
	printf("Enter a positive number to get its factorial : ");
	scanf("%d",&n);
	
//Calling Recursive function "fact"
//	y=fact(n);

// Using Loop to Calculate factorial ↓
    
    y=1;
    
    for(i=1;i<=n;i++){
    	
    	y=y*i;
    }
    
 // Printing Result ↓
 
	printf("The factorial of %d is %d",n,y);
	
	return 0;
	
	//Programmed by Sagar :)
}