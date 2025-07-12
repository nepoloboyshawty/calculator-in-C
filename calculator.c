#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "./includes/input_utils.h"
#include "./includes/math_func.h"

int main(void)
{
    bool is_unknown_operator = false;

    while(true)
    {
        system("clear");

        printf("Здравствуйте! Вы открыли калькулятор от nepoloboyshawty. Посвящается моему \033[31mумершему\033[0m птенчику.\n\nВыберите действие ниже:\n\n");
        printf("[+] Сложение.\n[-] Вычитание.\n[*] Умножение.\n[/] Деление.\n[q] Выйти.\n\n");

        if (is_unknown_operator) printf("[ERROR] Неизвестный оператор.\n\n");

        printf("\033[1m\033[32mВаш ответ\033[0m: ");

        char action;

        if(scanf(" %c", &action) != 1)
        {
            clear_buffer_input();
            continue;
        }

        switch(action)
        {
            case '+':
                clear_buffer_input();
                fold();

                is_unknown_operator = false;
                break;
            
            case '-':
                clear_buffer_input();
                subtract();

                is_unknown_operator = false;
                break;

            case '*':
                clear_buffer_input();
                multiply();

                is_unknown_operator = false;
                break;

            case '/':
                clear_buffer_input();
                divide();

                is_unknown_operator = false;
                break;

            case 'q':
            case 'Q':
                return 0;

            default:
                is_unknown_operator = true;
                clear_buffer_input();
                break;
        }
    }

    return 0;
}