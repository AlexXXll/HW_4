#include <stdio.h>
int main()
{
for (char c = 'a'; c <= 'e'; ++c) // внешний цикл по буквам
{
printf("%c",c); // сначала выводим букву
for (int i = 0; i < 3; ++i) // внутренний цикл по числам
printf("%d", i);
printf("\n");
}
return 0;
}