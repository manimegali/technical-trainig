/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=0,n,m=0;
    printf("enter the value for n");
    scanf("%d",&n);
    printf("FOR LOOP");
    for(int i=1;i<=n;i++)
    {
        printf("%d",i);
    }
    printf("WHILE LOOP");
    while(i<=n)
    {
        
         printf("%d",i);
         i++;
    }
    printf("DO WHILE");
    do
    {
  
    printf("%d",m);
    m++;
    }
    
    while(m<=n);
    return 0;
}