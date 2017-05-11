#include<stdio.h>

int gcd(int a, int b){
    int q, 
        f = 1,
        i = 0,
        s1 = 1, s2 = 0, s3,
        t1 = 0, t2 = 1, t3;

    while(f != 0){
        f = a % b;
        q = (a - f) / b;
        s3 = s1 - q * s2;
        t3 = t1 - q * t2;
        s1 = s2;
        s2 = s3;
        t1 = t2;
        t2 = t3;
        a = b;
        b = f;
        i++;
    }

    printf("s = %d, t = %d\n", s1, t1);
    return a;
}