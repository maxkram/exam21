Написать программу, осуществляющую перестановку крайних цифр в целом трехзначном числе. Целое трехзначное число задается на стандартном потоке ввода stdin, результат перестановки выводится в виде трехзначного числа с учетом ведущих нулей на стандартный поток вывода stdout. В конце ответа не должно быть переноса на новую строку.

Примечание: Гарантируется, что на вход программе всегда подается целое трехзначное число.


#include <stdio.h>

/**
 * Программа меняет местами первую и последнюю цифры трехзначного числа.
 * Учитывает знак и выводит результат с ведущими нулями, без переноса строки.
 */
int main() {
    int num;
    scanf("%d", &num);

    int sign = 1;
    if (num < 0) {
        sign = -1;
        num = -num;
    }

    int hundreds = num / 100;        // первая цифра
    int tens = (num / 10) % 10;      // средняя цифра
    int units = num % 10;            // последняя цифра

    int swapped = units * 100 + tens * 10 + hundreds;

    if (sign < 0)
        printf("-%03d", swapped);
    else
        printf("%03d", swapped);

    return 0;
}
