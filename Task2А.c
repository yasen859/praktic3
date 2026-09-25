#include <stdio.h>
#include <locale.h>
#define D 1,852 // морская 1,852 м
#define H 1,609 // сухопутная 1,609 км
#define L 1475 // римская 1475 м
int main() {
    setlocale(LC_CTYPE, "RUS");
    int mil;
    float result;
    float result2;
    float result3;
    puts("Введите количество дюймов:");
    scanf_s("%d", &mil);
    result = D * mil;
    result2 = H * mil;
    result3 = L * mil;
    printf("%d морская миля - это %.3f км\n", mil, result / 1000);
    printf("%d сухопутная миля - это %.2f км\n", mil, result2);
    printf("%d риская миля - это %.2f км\n", mil, result3 / 1000);
    }

