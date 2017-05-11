#include<cstdio>
#include<iostream>

#define N 10000

using namespace std;

void primeSearch(int num[], int size);

int main(){
    int num[N],
        primenum = 0;
 
    primeSearch(num, N);

    for(int i = 0; i < N; i++){
        if(num[i] == 1){
            printf("%4d ", i);
            primenum++;
            if(primenum % 10 == 0){
                printf("\n");
            }
        }
    }

    printf("\n");
    printf("The number of prime number: %d\n", primenum);
}