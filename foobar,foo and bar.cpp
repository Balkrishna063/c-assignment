#include<stdio.h>
int main(){
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if(a%15==0)
	printf("foobar");
	if(a%3==0)
	printf("foo");
	if(a%5==0)
	printf("bar");
	return 0;
}