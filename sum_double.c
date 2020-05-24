/**
 Created by Rodion Golovin on 5/24/20. Location (May 2020): Saint-Petersburg, Russia
 telegram/Github: @rongolovin Gmail: rodionland@gmail.com

 if you have any suggestion/wise thought about anything- write a couple of lines on gmail/telegram
 -------------------------------------------------------------------------------------------------
*/

/**variable type va_list
 *This is a type suitable for holding information needed by the three macros va_start(), va_arg() and va_end(). */

#include <stdarg.h>
#include <stdio.h>
double sum_double(int num, ...){
	double d = 0.0;
	double t;
	va_list argptr;
	va_start(argptr, num);
	/** void va_start(va_list ap, last_arg) This macro initializes ap variable to be used
	 * with the va_arg and va_end macros. The last_arg is the last known
	 * fixed argument being passed to the function */
	for (; num;num--){
		t = va_arg(argptr, double );
		/** This macro retrieves (извлекает) the next argument in the parameter
		 * list of the function with type type */
		d += t;
	}
	va_end(argptr);	 /**va_end correctly restores the stack */
	return d;
}

/*
int main() {
	double d = sum_double(2, 0.5, 0.7);
	return 0;
}
*/