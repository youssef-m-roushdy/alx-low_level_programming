#include "main.h"
/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline.
 */
void print_alphabet(void)
{
        char ch = 'a';


        while (ch <= 'z')
        {
                _putchar(ch);
                ch++;
        }
        _putchar('\n');
}
