#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Cubes of first 10 natural numbers in reverse order are\n");
    int i=1;
    while(i<=10)
    {
        printf("%d\n",(11-i)*(11-i)*(11-i));
        i++;
    }
    getch();
}
