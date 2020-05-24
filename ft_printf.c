#include "header.h"

int ft_printf(const char *format, ...)
{

    va_list arg;
    va_start(arg, format);

    int i;
    char *s;

    while (*format)
    {
        while (*format && *format != '%')
        {
            ft_putchar(*format);
            format++;
        }
        if (*format)
            format++;
        else
            break;
        if (*format == 'c')
        {
            i = va_arg(arg,int);
            ft_putchar(i);
        }
        if (*format == 's')
        {

            s = va_arg(arg,char *);
            ft_putstr(s);
        }
        format++;
    }
    va_end(arg);
    return (0);
}


