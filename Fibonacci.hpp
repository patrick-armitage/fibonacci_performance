/*******************************************************************************
** Author: Patrick Armitage
** Date: 03/08/2016
** Description: A number of different algorithmic implementations that calculated
** Fibonacci sequences, borrowed from various sources.
*******************************************************************************/

#ifndef FIBONACCI_HPP
#define FIBONACCI_HPP

int iterativeFactorial(int n);
int singleRecursiveFactorial(int n);
int tailRecursiveFactorialHelper(int n, int result);
int tailRecursiveFactorial(int n);
int doubleRecursiveFactorial(int n);

#endif
