/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c,d;
  printf("enter value of a,b,c,d");
  scanf("%d %d %d %d",&a,&b,&c,&d);
  if(a>b && a>c && a>d)
  {
      printf("value of a");
  }
  else if(b>a && b>c && b>d)
{
    printf("value of b");
}
else if(c>a && c>b && c>d)
{
    printf("c is greater");
}
else
{
    printf("d is greater")
}
    return 0;
}
