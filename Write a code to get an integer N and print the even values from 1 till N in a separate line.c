#include<stdio.h>
int main()
{
    int N,i;
    
    scanf("%d",&N);
    
    for(i=1;i<=N;i++)
    {
      if(i%2==0)
      {
          printf("\n%d",i);
      }
    }
    return 0;
}
