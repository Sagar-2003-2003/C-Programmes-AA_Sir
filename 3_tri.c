#include<stdio.h>

void main(){

     int a,b,c;
            printf("Please Enter lengths of 3 st. lines respectively : ");
            scanf("%d%d%d",&a,&b,&c);
     if((b+c)>a && (a+c)>b && (a+b)>c){
        printf("Trinagle is formed :)\n");
              
	if(a==b && b==c && c==a)
	    printf("and it is Equilateral\n");
	else if(a==b || b==c || c==a)
	    printf("and it is Isosceles\n");
  	
     }else{
        printf("No Triangle is Formed :(\n");  
	  }
}
