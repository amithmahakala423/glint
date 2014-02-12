 #include<stdio.h>
 #include<conio.h>
 void main()
 {
   int *p,i,j,k,n,countm=0,countl=0;
   clrscr();
   printf("enter the size of the array");
   scanf("%d",&n);
   p=(int*) malloc(n*2);
   printf("enter %d values into array in between 0 and 99" ,n);
   for(i=0;i<n;i++)
   scanf("%d",(p+i));
   for(i=0;i<n;i++)
   {   countl=0;
     for(j=0;j<n;j++)
     {
       if(*(p+i)== *(p+j))
       {
	 ++countl;
       }
       if(countm<countl)
       {
	 countm=countl;
	 k=i;
       }
     }
   }
   if(countm==1)
   printf("all are same");
   else{
   printf("the one repeating most is %d",*(p+k));
   printf("\n\nno of times repeated is %d",countm);
   }

 getch();
 }
