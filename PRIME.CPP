#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,count=0,n=0;
printf("first 50 prime numbers:\n");
   for(a=2;a<=500;a++)
   {   for(b=2;b<=a;b++)
	{ if(a%b==0)
	  count++;
	}
	 if(count==1)
	 {
	 n++;
	 printf("%d\t",a);
	 if(n==50)
	 break;
	 }
	count=0;
   }
getche();
}