#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "RUS");
	int num, num2;
	puts("введите число");
	scanf_s("%d", &num);
	printf("Введено число %d\n", num);
	puts("введите второе число");
	scanf_s("%d", &num2);
	printf("Введено число %d\n", num2);
	printf("Сумма: %d\n", num2 + num);
	printf("Разность: %d\n", num2 - num);
	printf("Произведение: %d\n", num2 * num);
	printf("Частное: %d\n", num2 / num);
	printf("Остаток: %d\n", num2 % num);






}
