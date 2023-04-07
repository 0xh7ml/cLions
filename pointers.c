//
// Created by Saikat on 7/4/23.
//
#include <stdio.h>
int main(){
    int a[5] = {22, 33, 44, 55, 66};

    int *ptr = a;

    int res = *(ptr + 0);

    printf("%d", res);
}