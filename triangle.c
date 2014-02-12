#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int a[2],b[2],c[2],i,j,m1,m2;
  float d[3];
  clrscr();
    for(j=0;j<2;j++)
      scanf("%d",&a[j]);

   for(j=0;j<2;j++)
      scanf("%d",&b[j]);

    for(j=0;j<2;j++)
      scanf("%d",&c[j]);

  d[0]=sqrt((a[0]-b[0])*(a[0]-b[0]) + (a[1]-b[1])*(a[1]-b[1]));

d[1]= sqrt((c[0]-b[0])*(c[0]-b[0]) + (c[1]-b[1])*(c[1]-b[1]));
d[2]= sqrt((a[0]-c[0])*(a[0]-c[0]) + (a[1]-c[1])*(a[1]-c[1]));

   m1=(b[1]-a[1])/(b[0]-a[0]);
   m2=(b[1]-c[1])/(b[0]-c[0]);
   printf("%d%d%d",d[0],d[1],d[2]);
   if((m1!=m2)//&&(d[0]+d[1]>d[2])&&(d[1]+d[2]>d[0])&&(d[0]+d[2]>d[1])
   )
   {
   printf("they form a triangle");
     if(d[0]==d[1]&&d[1]==d[2]&&d[2]==d[0])
     printf("equi");
     else if(d[0]!=d[1]&&d[1]!=d[2]&&d[2]!=d[0])
     printf("scalene");
   
     else
     printf("iso");
   }
   else
   printf("not formed");
  getch();
}
