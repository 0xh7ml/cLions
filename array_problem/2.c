//
// Created by Saikat on 7/4/23.
//
// sum of the value of an array (user input)

#include <stdio.h>
int main(){
    int price[5], sum = 0, i;
    printf("Enter the value of array");
    for(i=0;i<5;i++){
        scanf("%d",&price[i]);
    }
    for(i=0;i<5;i++){
        sum += price[i];
    }
    printf("%d\n",sum);
}