#include<stdio.h>
int main(){
	int a;
	int rem;
	int ans=0;
	printf("enter a number");
	scanf("%d",&a);
	while(a!=0){
     rem=a%10;
	ans=ans+rem;
	a=a/10;	
	}	
	printf("ans is %d",ans);
	return 0;
}