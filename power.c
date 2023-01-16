#include <stdio.h>
#include <stdlib.h>
#include <time.h>


double RecursivePower(double n, int x) {
    if (x < 0 ) {
        return 1.0 / RecursivePower(n , (-1 * x));
    }else if (x == 0 ) {
        return 1.0;
    }else {
        return n * RecursivePower(n,x-1);
    }
}

double IterativePower(double n, int x) {
    double result = 1.0;
    if (x < 0) {
        return 1.0/ IterativePower(n, (-1 * x));
    }else{
        for( int i = 0; i < x ; i++) {
            result *= n;
        }
    }
    return result;
}

int main (int argc, char*argv[]) {
    clock_t istart,iend,rstart,rend;

    char *param1= argv[1];
    int iter = atoi(param1);
    //  int iter = atoi(argv[0]);
/* Test
 * Running both Iterative and Recursive with a
 * base number of 3.14159265359 and exponent 620
 * This value is the maximum value that the computer can hold.
 * Any value higher than this will result to infinity
 */
    double x;
    double y;
    // printf("Running using %d \n",iter);
    istart = clock();
    for (int j = 0; j < iter; j++){
    IterativePower(3.14159265359,1);
    }
    iend = clock();
    rstart = clock();
    for (int j = 0; j < iter; j++){
    RecursivePower(3.14159265359,1);
    }
    rend = clock();

    printf("n,Iterative,Recursive\n");
    printf("%d,%lu,%lu\n",1,(iend - istart),(rend - rstart));


    for (int i = 50 ; i < 650; i+=50) {
        istart = clock();
        for (int j = 0; j < iter; j++){
        IterativePower(3.14159265359,i);
        }
        iend = clock();

        rstart = clock();
        for (int j = 0; j < iter; j++){
        RecursivePower(3.14159265359,i);
        }
        rend = clock();

        printf("%d,%lu,%lu\n",i,(iend - istart),(rend - rstart));
    }

    istart = clock();
    for (int j = 0; j < iter; j++){
    IterativePower(3.14159265359,621);
    }
    iend = clock();
    rstart = clock();
    for (int j = 0; j < iter; j++){
    RecursivePower(3.14159265359,621);
    }
    rend = clock();

    printf("%d,%lu,%lu\n",621,(iend - istart),(rend - rstart));

    return 0;
}