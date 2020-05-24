#include "header.h"

double sum_double(int num, ...)
{
	double d = 0.0;
	double t;
	va_list argptr;
	va_start(argptr, num);

	for(; num;num--)
	{
		t = va_arg(argptr, double );
		d += t;
	}
	va_end(argptr);
	return d;
}


​
int main()
{
	ft_printf("lol %s %c -\n", "mem", '+');
	return (0);
}
