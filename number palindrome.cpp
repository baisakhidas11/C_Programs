#include<stdio.h>
#include<conio.h>
main()
{
	int n,r=0,a; 
  	 printf("Enter a number : ");
  	 scanf("%d", &n); 
  	 a=n; 
  	 while(a!=0)
   {
      r=r*10;
      r=r+a%10;
      a=a/10;
   } 
   		if(n==r)
    	  printf("%d is a palindrome number", n);
   		else
    	  printf("%d is not a palindrome number", n);
	getch();
}
