//Arrays in C - 1D array
/*
Author:Richole Oduor
Reg No:CT101/G/25060/24
Date: 15/10/2024
*/
//Preprocessor Directive
#include<stdio.h>
int main () {
    int r;
    int marks[5] = {10,30,50,40,60};
    for(r=0;r<5;r++){
        printf("marks[%d] = %d \n",r,marks [r]);
    }
    return 0;
}
