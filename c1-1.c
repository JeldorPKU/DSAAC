/*
 * =====================================================================================
 *
 *       Filename:  c1-1.c
 *
 *    Description:  use "time ./c1-1 10000" to set N as 10000 and test time.
 *
 *        Version:  1.0
 *        Created:  02/14/2018 11:35:13
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
int main(int argc, char * argv[]) {
    int l = strlen(argv[1]);
    int i, j, n = 0;
    for (i = 0; i < l; ++i) {
        n *= 10;
        n += argv[1][i] - 48;
    }
    printf("n = %d\n", n);
    int * a = (int *) malloc(n * sizeof(int));
    srand(time(NULL));
    for (i = 0; i < n; ++i) {
        a[i] = rand();
    }
    for (i = 0; i < n; ++i) {
        for (j = i; j < n - 1; ++j) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    return 0;
}

