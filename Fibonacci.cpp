/*******************************************************************************
** Author: Patrick Armitage
** Date: 03/08/2016
** Description: Code file defining the functions that are declared as
** prototypes within the Fibonacci header file
*******************************************************************************/

#include "Fibonacci.hpp"

/*----------------------------------------------------------------------------*/
/*
    Function Name: iterativeFactorial
    Function Parameters: integer of fibonacci sequence number
    What the function does: borrowed from
    http://www.codeproject.com/Tips/109443/Fibonacci-Recursive-and-Non-Recursive-C
*/
int iterativeFactorial(int n) {
    int first = 0;
    int second = 1;
    int counter = 2;

    while (counter < n) {
        int temp = second;
        second = first + second;
        first = temp;
        counter++;
    }

    if (n == 0) {
        return 0;
    } else {
        return first + second;
    }
}

/*----------------------------------------------------------------------------*/
/*
    Function Name: singleRecursiveFactorial
    Function Parameters: integer of fibonacci sequence number
    What the function does: borrowed from Lab 10 Assignment description doc
*/
int singleRecursiveFactorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        int next = n - 1;
        return n * singleRecursiveFactorial(next);
    }
}

/*----------------------------------------------------------------------------*/
/*
    Function Name: tailRecursiveFactorial
    Function Parameters: integer of fibonacci sequence number
    What the function does: borrowed from Lab 10 Assignment description doc
*/
int tailRecursiveFactorial(int n) {
    return tailRecursiveFactorialHelper(n, 1);
}

/*----------------------------------------------------------------------------*/
/*
    Function Name: tailRecursiveFactorialHelper
    Function Parameters: integer of fibonacci sequence number
    What the function does: partner function to tailRecursiveFactorial
*/
int tailRecursiveFactorialHelper(int n, int result) {
    if (n == 1) {
        return result;
    } else {
        int next = n - 1;
        int factorial = n * result;
        return tailRecursiveFactorialHelper(next, factorial);
    }
}

/*----------------------------------------------------------------------------*/
/*
    Function Name: doubleRecursiveFactorial
    Function Parameters: integer of fibonacci sequence number
    What the function does: borrowed from
    http://www.codeproject.com/Tips/109443/Fibonacci-Recursive-and-Non-Recursive-C
*/
int doubleRecursiveFactorial(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    int next = n - 1;
    int nextNext = n - 2;
    return doubleRecursiveFactorial(next) + doubleRecursiveFactorial(nextNext);
}
