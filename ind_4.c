#include<stdio.h>
#include<string.h>
int main(){
	
	char m[]= "qwertyuiopasdfghjklzxcvbnm";
	
	int *n;
	
	n=&m;
	
	printf("length: %d",strlen(n));
	
	return 0;
}
