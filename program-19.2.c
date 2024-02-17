#include<stdio.h>

void lenth(){
	int i,len=0,a=0;
	char choice[100];
	
	printf("Enter any string : ");
	gets(choice);
	
	len = strlen(choice);
	
	printf("lenth is : %d\n",len);
} 


void main(){
	
	lenth();
	
}
