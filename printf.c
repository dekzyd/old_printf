#include "main.h"
#include <stdlib.h>

int _printf(const char *format, ...)
{
	va_list args;
	int ln;
	int i;
	char *s;
	char *d;

	va_start(args, format);
	ln = 0;
	if (format)
	{
		for (; *format != '\0'; format++, ln++)
		{
			while (*format != '%' && *format != '\0')
			{
				putchar(*format);
				ln++;
				format++;
			}
			if (*format == '\0')
				break;
			if (*format == '%')
				format++;
			switch (*format)
			{
				case '%':
					putchar('%');
					break;
				case 'c':
					i = va_arg(args, int);
					putchar(i);
					break;
				case 's':
					s = va_arg(args, char *);
					while (*s != '\0')
					{
						ln++;
						putchar(*s);
						s++;
					}
					ln--;
					break;
				case 'i':
					d = _itoa(va_arg(args, int));
					while (*d != '\0')
					{
						ln++;
						putchar(*d);
						d++;
					}
					ln--;
					break;
				case 'd':
					d = _itoa(va_arg(args, int));
					while (*d != '\0')
					{
						ln++;
						putchar(*d);
						d++;
					}
					ln--;
					break;
			}
		}
	}
	va_end(args);
	return (ln);
}
