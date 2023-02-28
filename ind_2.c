#include<stdio.h>

int main(){
	
	int a[5],j;
	
	for(j=0;j<=4;j++){
		
		printf("enter your values[%d] : ",j+1);
		scanf("%d",&a[j]);
		
	}
	
	
	int *b[5],i;
	
	for(i=0; i<=4; i++){
		
		
		b[i]=&a[i];
		
		printf("%d\n",*b[i]);	
	}	
	return 0;

}
