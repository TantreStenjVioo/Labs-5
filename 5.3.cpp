#include <stdio.h>
#include <math.h>
 
int main()
{
    int A, B, C;
    printf("Input A, B and C (through a space): ");
    scanf("%i %i %i", &A, &B, &C);
    int AC = abs(C - A);
    int BC = abs(C - B);
    printf("AC = %i; BC = %i\n", AC, BC);
 	printf("AC + BC = %i\n", AC * BC);
    return 0;
}