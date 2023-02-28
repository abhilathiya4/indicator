#include<stdio.h>

	void swap(int *a, int *b){
	
	int c;
	
	c=*a;
	*a=*b;
	*b=c;
	   printf("after swaping\n");                                                                                   
	printf("a : %d\n",*a);
	printf("b : %d\n",*b);
}

	int main(){
	
	int a,b;
	
		printf("enter value of a :");
		scanf("%d",&a);
		
		printf("enter value of b : ");
		scanf("%d",&b);
	
	
	swap(&a,&b);
	
	return 0;

	
}
