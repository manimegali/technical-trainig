/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char a;
    printf("enter a value of a");
    scanf("%c",&a);
    if(a>='a' && a<='z' || a>='A' && a<='Z')
    {
        printf("a is alphabet");
    }
    else if(a>='0' && a<='9')
    {
        printf("a is number");
    }
    else
    {
        printf("a is special character");
    }

    return 0;
}
