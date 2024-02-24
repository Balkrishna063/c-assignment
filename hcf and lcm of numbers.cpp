#include <stdio.h>

int main(){
  int a,b,c,d;
  printf("\n the value of a and b");
  scanf("%d%d",&a,&b);
  d=a;
  c=b;
  while(a!=b)
  {
      if(a>b)
      {
          a=a-b;
      }
      else
      b=b-a;
  }
  printf("\nthe hcf is %d",b);
  printf("\nthe lcm is %d",(d*c)/b);
  return 0;
}