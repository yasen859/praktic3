#include <stdio.h>
#include <locale.h>
#define D 2.54
#define H 2.32166 // испанский
#define L 2.7076 // старолитовский
int main() {
    setlocale(LC_CTYPE, "RUS");
    int dym;
    float result;
    float result2;
    float result3;
    puts("Введите количество дюймов:");
    scanf_s("%d", &dym);
    result = D * dym;
    result2 = H * dym;
    result3 = L * dym;
    printf("%d дюймов - это %.2f см\n", dym, result);
    printf("%d испанских дюймов - это %.2f см\n", dym, result2);
    printf("%d старолитовских дюймов - это %.2f см\n", dym, result3);
    }

