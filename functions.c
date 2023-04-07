//
// Created by Saikat on 7/4/23.
//

// Functions type
/*
 * No aurguments , no return value
 * No aurguments , return value
 * Aurguments, no return value
 * Aurguments, return value
 */
#include <stdio.h>
// create a function to sqrt a number

// aurguments passed and also return value passed

// defination && declartion of the function
int square(int num){
    int y;
    y = num * num;
    return y;
}

int main(){
    int x;
    printf("enter the value => ");
    scanf("%d", &x);
    printf("output is => %d", square(x));
}