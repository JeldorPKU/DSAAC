/*
 * =====================================================================================
 *
 *       Filename:  c2-13.c
 *
 *    Description:  Determine if a positive integer is a prime number
 *
 *        Version:  1.0
 *        Created:  02/18/2018 13:16:13
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int i, flag = 1;
    for (i = 0; i < n; ++i) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    printf("%d\n", flag);
    return 0;
}

