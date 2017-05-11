#include<stdio.h>

/*
問題：次の整数a,bの最大公約数d,およびd=sa+tbである整数s,tを求めよ.
(i) a=15561,b=7315 (ii)a=15640,b=1037
*/

int gcd(int a, int b);

int main(){
    int  a = 15561,
    b = 7315;
    
    printf("gcd(%d,%d) = %d\n", a, b, gcd(a, b));

    a = 15640;
    b = 1037;

    printf("gcd(%d,%d) = %d\n", a, b, gcd(a, b));
}