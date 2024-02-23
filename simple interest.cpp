#include<stdio.h>
int main(){
	int p;
	int t;
	int r;
	int si;
	printf("enter three values");
	scanf("%d%d%d",&p,&t,&r);
	si=(p*t*r)/100;
	printf("simple interest is %d",si);
	return 0;
}