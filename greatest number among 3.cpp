#include<stdio.h>
int main(){
	int a;
	int b;
	int c;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
	if (a>c){
	printf("a is greatest");
}else{
	printf("c is greatest");
}
}
	if(b>a){
	if(b>c){
	printf("b is greatest");
}else{
	printf("c is greatest");
}
}
	return 0;
}