#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <stdbool.h>

#define SHORT_WAIT 1
#define LONG_WAIT 2

#include "../includes/math_func.h"
#include "../includes/input_utils.h"

void fold(void)
{
    while(true)
    {
        system("clear");

        printf("Вы выбрали сложение. Через запятую введите два слагаемых.\n\033[1m\033[32mВаш ответ\033[0m: ");

        float summand_1, summand_2;

        while(true)
        {   
            if(scanf("%f%*[, ]%f", &summand_1, &summand_2) != 2)
            {
                system("clear");
                printf("[ERROR] Пожалуйста, введите через запятую два слагаемых (например: 2.25, 2).\n\033[1m\033[32mВаш ответ\033[0m: ");
                clear_buffer_input();
            }
            else
            {
                clear_buffer_input();
                break;
            }
        }

        printf("\nВы желаете сложить %.2f + %.2f, верно? (y/n).\n\033[1m\033[32mВаш ответ\033[0m: ", summand_1, summand_2);

        while(true)
        {
            char answer_1 = tolower(getchar());
            clear_buffer_input();

            if(answer_1 == 'y')
            {
                printf("\nПроисходит процесс сложения, подождите, пожалуйста...\n\n");
                sleep(SHORT_WAIT);

                float sum = summand_1 + summand_2;

                printf("\033[1m[ANSWER] %.2f + %.2f = %.2f.\033[0m\n\n", summand_1, summand_2, sum);
                sleep(SHORT_WAIT);
                
                printf("Введите букву 'q' для выхода в главное меню...\n\033[1m\033[32mВаш ответ\033[0m: ");

                while(true)
                {
                    char answer_2 = tolower(getchar());
                    clear_buffer_input();
                    
                    if(answer_2 == 'q')
                    {
                        return;
                    }
                    else
                    {
                        printf("\nЕсли хотите выйти, то введите букву 'q' для выхода в главное меню...\n\033[1m\033[32mВаш ответ\033[0m: ");
                    }
                }
            }
            else if(answer_1 == 'n')
            {
                printf("\nЖелаете заново сложить числа? (y/n)\n\033[1m\033[32mВаш ответ\033[0m: ");

                while(true)
                {
                    char answer_3 = tolower(getchar());
                    clear_buffer_input();

                    if(answer_3 == 'y')
                    {
                        break;
                    }
                    else
                    {
                        printf("\nВы отменили решение. Через 2 секунды вы вернетесь в главное меню...\n");
                        sleep(LONG_WAIT);

                        return;
                    }
                }
                break;
            }
            else
            {
                printf("\nВы желаете сложить %.2f + %.2f, верно? (y/n).\n\033[1m\033[32mВаш ответ\033[0m: ", summand_1, summand_2);
                continue;
            }
        }
    }
}

void subtract(void)
{
    while(true)
    {
        system("clear");

        printf("Вы выбрали вычитание. Через запятую введите уменьшаемое и вычитаемое.\n\033[1m\033[32mВаш ответ\033[0m: ");

        float muniend, subtrahend;

        while(true)
        {   
            if(scanf("%f%*[, ]%f", &muniend, &subtrahend) != 2)
            {
                system("clear");
                printf("[ERROR] Пожалуйста, введите через запятую уменьшаемое и вычитаемое (например: 2.25, 2).\n\033[1m\033[32mВаш ответ\033[0m: ");
                clear_buffer_input();
            }
            else
            {
                clear_buffer_input();
                break;
            }
        }

        printf("\nВы желаете вычесть %.2f - %.2f, верно? (y/n).\n\033[1m\033[32mВаш ответ\033[0m: ", muniend, subtrahend);

        while(true)
        {
            char answer_4 = tolower(getchar());
            clear_buffer_input();

            if(answer_4 == 'y')
            {
                printf("\nПроисходит процесс вычитания, подождите, пожалуйста...\n\n");
                sleep(SHORT_WAIT);

                float difference = muniend - subtrahend;

                printf("\033[1m[ANSWER] %.2f - %.2f = %.2f.\033[0m\n\n", muniend, subtrahend, difference);
                sleep(SHORT_WAIT);
                
                printf("Введите букву 'q' для выхода в главное меню...\n\033[1m\033[32mВаш ответ\033[0m: ");

                while(true)
                {
                    char answer_5 = tolower(getchar());
                    clear_buffer_input();
                    
                    if(answer_5 == 'q')
                    {
                        return;
                    }
                    else
                    {
                        printf("\nЕсли хотите выйти, то введите букву 'q' для выхода в главное меню...\n\033[1m\033[32mВаш ответ\033[0m: ");
                    }
                }
            }
            else if(answer_4 == 'n')
            {
                printf("\nЖелаете заново вычесть числа? (y/n)\n\033[1m\033[32mВаш ответ\033[0m: ");

                while(true)
                {
                    char answer_6 = tolower(getchar());
                    clear_buffer_input();

                    if(answer_6 == 'y')
                    {
                        break;
                    }
                    else
                    {
                        printf("\nВы отменили решение. Через 2 секунды вы вернетесь в главное меню...\n");
                        sleep(LONG_WAIT);

                        return;
                    }
                }
                break;
            }
            else
            {
                printf("\nВы желаете вычесть %.2f - %.2f, верно? (y/n).\n\033[1m\033[32mВаш ответ\033[0m: ", muniend, subtrahend);
                continue;
            }
        }
    }
}

void multiply(void)
{
    while(true)
    {
        system("clear");

        printf("Вы выбрали умножение. Через запятую введите два множителя.\n\033[1m\033[32mВаш ответ\033[0m: ");

        float factor_1, factor_2;

        while(true)
        {   
            if(scanf("%f%*[, ]%f", &factor_1, &factor_2) != 2)
            {
                system("clear");
                printf("[ERROR] Пожалуйста, введите через запятую два множителя (например: 2.25, 2).\n\033[1m\033[32mВаш ответ\033[0m: ");
                clear_buffer_input();
            }
            else
            {
                clear_buffer_input();
                break;
            }
        }

        printf("\nВы желаете умножить %.2f * %.2f, верно? (y/n).\n\033[1m\033[32mВаш ответ\033[0m: ", factor_1, factor_2);

        while(true)
        {
            char answer_7 = tolower(getchar());
            clear_buffer_input();

            if(answer_7 == 'y')
            {
                printf("\nПроисходит процесс умножения, подождите, пожалуйста...\n\n");
                sleep(SHORT_WAIT);

                float product = factor_1 * factor_2;

                printf("\033[1m[ANSWER] %.2f * %.2f = %.2f.\033[0m\n\n", factor_1, factor_2, product);
                sleep(SHORT_WAIT);
                
                printf("Введите букву 'q' для выхода в главное меню...\n\033[1m\033[32mВаш ответ\033[0m: ");

                while(true)
                {
                    char answer_8 = tolower(getchar());
                    clear_buffer_input();
                    
                    if(answer_8 == 'q')
                    {
                        return;
                    }
                    else
                    {
                        printf("\nЕсли хотите выйти, то введите букву 'q' для выхода в главное меню...\n\033[1m\033[32mВаш ответ\033[0m: ");
                    }
                }
            }
            else if(answer_7 == 'n')
            {
                printf("\nЖелаете заново перемножить числа? (y/n)\n\033[1m\033[32mВаш ответ\033[0m: ");

                while(true)
                {
                    char answer_9 = tolower(getchar());
                    clear_buffer_input();

                    if(answer_9 == 'y')
                    {
                        break;
                    }
                    else
                    {
                        printf("\nВы отменили решение. Через 2 секунды вы вернетесь в главное меню...\n");
                        sleep(LONG_WAIT);

                        return;
                    }
                }
                break;
            }
            else
            {
                printf("\nВы желаете умножить %.2f * %.2f, верно? (y/n).\n\033[1m\033[32mВаш ответ\033[0m: ", factor_1, factor_2);
                continue;
            }
        }
    }
}

void divide(void)
{
    while(true)
    {
        system("clear");

        printf("Вы выбрали деление. Через запятую введите делимое и делитель.\n\033[1m\033[32mВаш ответ\033[0m: ");

        float dividend, divider;

        while(true)
        {   
            if(scanf("%f%*[, ]%f", &dividend, &divider) != 2)
            {
                system("clear");
                printf("[ERROR] Пожалуйста, введите через запятую делимое и делитель (например: 2.25, 2).\n\033[1m\033[32mВаш ответ\033[0m: ");
                clear_buffer_input();
            }
            else if(divider == 0)
            {
                system("clear");
                printf("[ERROR] Пожалуйста, введите через запятую делимое и делитель (например: 2.25, 2).\n");
                printf("\n[ERROR] Делить на ноль - нельзя!\n\033[1m\033[32mВаш ответ\033[0m: ");
                clear_buffer_input();
            }
            else
            {
                clear_buffer_input();
                break;
            }
        }

        printf("\nВы желаете поделить %.2f / %.2f, верно? (y/n).\n\033[1m\033[32mВаш ответ\033[0m: ", dividend, divider);

        while(true)
        {
            char answer_10 = tolower(getchar());
            clear_buffer_input();

            if(answer_10 == 'y')
            {
                printf("\nПроисходит процесс деления, подождите, пожалуйста...\n\n");
                sleep(SHORT_WAIT);

                float quotient = dividend / divider;

                printf("\033[1m[ANSWER] %.2f / %.2f = %.2f.\033[0m\n\n", dividend, divider, quotient);
                sleep(SHORT_WAIT);
                
                printf("Введите букву 'q' для выхода в главное меню...\n\033[1m\033[32mВаш ответ\033[0m: ");

                while(true)
                {
                    char answer_11 = tolower(getchar());
                    clear_buffer_input();
                    
                    if(answer_11 == 'q')
                    {
                        return;
                    }
                    else
                    {
                        printf("\nЕсли хотите выйти, то введите букву 'q' для выхода в главное меню...\n\033[1m\033[32mВаш ответ\033[0m: ");
                    }
                }
            }
            else if(answer_10 == 'n')
            {
                printf("\nЖелаете заново поделить числа? (y/n)\n\033[1m\033[32mВаш ответ\033[0m: ");

                while(true)
                {
                    char answer_12 = tolower(getchar());
                    clear_buffer_input();

                    if(answer_12 == 'y')
                    {
                        break;
                    }
                    else
                    {
                        printf("\nВы отменили решение. Через 2 секунды вы вернетесь в главное меню...\n");
                        sleep(LONG_WAIT);

                        return;
                    }
                }
                break;
            }
            else
            {
                printf("\nВы желаете поделить %.2f / %.2f, верно? (y/n).\n\033[1m\033[32mВаш ответ\033[0m: ", dividend, divider);
                continue;
            }
        }
    }
}
