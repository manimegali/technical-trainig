/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("enter value of n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        if(i%3==0 && i%5==0){
            printf("fizz buzz\n");
        }
        else if(i%3==0)
            {
            printf("fizz\n");
        }
        else if(i%5==0)
        {
            printf("buzz\n");
        }
        else
        {
            printf("%d\n",i);
        }
    
    }
        return 0;
}

