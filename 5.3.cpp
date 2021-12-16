#include <stdio.h>
#include <math.h>
 
int main()
{
    int A, B, C; // Задаём точки
    printf("Input A, B and C (through a space): ");
    scanf("%i %i %i", &A, &B, &C);
    int AC = abs(C - A); // Вычисляем длину отрезков
    int BC = abs(B - C);
    printf("AC = %i; BC = %i\n", AC, BC);
 	printf("AC * BC = %i\n", AC * BC); // Умножаем длины отрезков и выводим полученный результат
    return 0;
}
