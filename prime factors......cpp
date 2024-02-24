#include <stdio.h>
int main(){  
  int a,i,n;
  printf("\nenter the no");
  scanf("%d",&n);
  for(i=2;i<=n;i++)
  {
      while(n%i==0)
      {
          printf("%d,",i);
          n=n/i;
      }
  }
  return 0;
}