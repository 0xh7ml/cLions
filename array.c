//
// Created by Saikat on 7/4/23.
//
#include <stdio.h>

// access the value of 2D Array
int main(){
 int a[3][3] = {
         {1,2,3}, {4,5,6}, {7,8,9}
 };
 int i,j;
 // get the value of 3 row, 3 elements
 for(i=0; i < 3; i++){
     for(j = 0; j <3 ; j++){
         printf("%d\t", a[i][j]);
     }
     printf("\n");
 }
}