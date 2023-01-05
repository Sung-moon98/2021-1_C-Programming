#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int myabs(double a)
{
    return abs(a);

    
}

int main(int argc, char *argv[])
{
    double a;
    printf("실수 입력: ");
    scanf("%lf", &a);
    printf("%d", myabs(a));

}