
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_CTYPE, "RUS");
    //Шаг 1: задать переменные
    int a; //ширина
    int b; //длина
    //Шаг 2: ввести переменные
    printf("введите ширину\n");
    scanf_s("%d", &a);
    printf("введите длину\n");
    scanf_s("%d", &b);
    //Шаг 3: Посчитать площадь и периметр, вывести их результаты 
    int S = a * b;
    int P = (a + b) * 2;
    printf("Площадь прямоугольника = %d * %d = %d\n", a, b, S);
    printf("Периметр прямоугольника = (%d + %d) * 2 = %d\n", a, b, P);
}