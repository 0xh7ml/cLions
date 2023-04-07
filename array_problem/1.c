//
// Created by Saikat on 7/4/23.
// Problem :
#include <stdio.h>
// Problem : write a code in c to calculate the sum of 5 numbers using an array

// algorithm
/*
 * define an array
 * assign the value to res var by calling index
 * sum the value with assignment operator and for loop
 */
int main(){
    int price[5] = {4,2, 20, 50, 10}, res = 0,i;
    for(i=0; i < 5; i++){
        res += price[i];
    }
    printf("%d\n", res);
}