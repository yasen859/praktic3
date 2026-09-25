#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_CTYPE, "RUS");
    int a;
    int b;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    printf(" ________________________\n");
    printf("| a * b | a+b   | a-b  |\n");
    printf("| %d * %d | %d+%d   | %d-%d  |\n", a, b, a, b, a, b);
    printf("|   %d  |  %d   | %d   |\n", a * b, a + b, a - b);





}