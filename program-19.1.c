#include<stdio.h>


void array(){
	
	int a,i,sum=0;

	printf("Enter the number :- ");
	scanf("%d",&a);

	int arr[i];

	for(i=0;i<a;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}

	for(i=0; i<a;i++){
		sum =sum+arr[i];
	}
	printf("sum of all Array: %d\n", sum);
	
	
	
}


void main(){

	array();

}
