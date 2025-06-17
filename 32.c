Написать программу, осуществляющую вывод на стандартный поток stdout наибольшей цифры целого числа, которое задается на стандартном потоке ввода stdin. В конце ответа не должно быть переноса на новую строку. Проверить на валидность введенные данные. В случае любой ошибки выводить "n/a".

Примеры
Входные данные	Результат работы
123	3
18	8
111111	1
0	0


#include <stdio.h>
#include <stdlib.h>

/**
 * Находит наибольшую цифру в целочисленном вводе.
 * Если ввод некорректный — выводит "n/a".
 */
int main(void) {
    int number;

    if (scanf("%d", &number) != 1) {
        printf("n/a");
        return 0;
    }

    if (number == 0) {
        printf("0");
        return 0;
    }

    int max_digit = 0;
    int n = abs(number);

    while (n > 0) {
        int digit = n % 10;
        if (digit > max_digit) {
            max_digit = digit;
        }
        n /= 10;
    }

    printf("%d", max_digit);
    return 0;
}
