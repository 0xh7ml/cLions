//
// Created by Saikat on 7/4/23.
//
#include <stdio.h>
int fact(int num){
    int y = num;
    if(y==1){
        return (1);
    } else
        return (y * fact((y-1)));
}

int main(){
    int x;
    printf("enter the value => ");
    scanf("%d", &x);
    printf("Factorial is %d" , fact(x));
}