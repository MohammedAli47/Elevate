/*
Write a Function that take 2 integergers (n,m) then print all prime numbers between them

Note: you can implement the task with any language you prefer like (c++,dart,js)
Input
The input consists of two integers n and m (1≤n≤1000000) and n always less than m
Output
Print all prime numbers

Examples
Input: 5 10
output : 7

Input: 7 20
Output: 11 13 17 19
*/

#include <iostream>
#include <math.h>

bool isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        } else {
            /* Do Nothing */
        }
    }
    return true;
}

void primePrinter(int x, int y)
{
    for (int i = x + 1; i <= y; i++) {
        if (isPrime(i)) {
            std::cout << i << " ";
        } else {
            /* Do Nothing */
        }
    }
}

int main(void)
{
    int n, m;
    std::cin >> n >> m;
    primePrinter(n, m);
    return 0;
}