#include<cstdio>
#include<iostream>

using namespace std;

void primeSearch(int num[], int size){
    int key = 2,
        i;

    //init
    num[0] = 0;
    num[1] = 0;
    for(i = 2; i < size; i++){
        num[i] = 1;
    }

    while(key < size / 2){
        for(i = key; i < size; i++){
            if(num[i] == 1){
                key = i;
                i += key;
                break;
            }
        }
        // cout << key << " " << i << endl;
        while(i < size){
            num[i] = 0; 
            i += key;  
        }
        
        key++;
    }

    return;
}