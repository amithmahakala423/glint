#include<stdio.h>
#include<conio.h>
void main()
{
  int m,n,*a,*b,i,k;
  clrscr();

  printf("enter the size of first and second array");
  scanf("%d%d",&m,&n);
  a=(int*) malloc(m*2);
  b=(int*) malloc(n*2) ;
  printf("enter %d valuesinto array",m);
  for(i=0;i<m;i++)
    scanf("%d",(a+i));
   printf("enter %d valuesinto array",n);
  for(i=0;i<n;i++)
    scanf("%d",(b+i));
  if(m==n)
  {
    k=(*(a+(m-1))+ *(b+0)) /2;
    printf("median is %d",k);
  }
  else if(m<n)
  {
    k=(m+n)/2;
    k=n-k-1;
    printf("median is %d",*(b+k));
  }
  else
  {
    k=(m+n)/2;
    printf("median is %d",*(a+k));
  }
  getch();
 }
