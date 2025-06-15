/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=0,n;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(n%2==0){
            printf("%d is EVEN\n",i);
        }
        else{
            printf("%d is ODD\n",i);
        }
    
    }
    

    return 0;
}
