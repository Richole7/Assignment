//Arrays in C - 2D array
/*
Author:Richole Oduor
Reg No:CT101/G/25060/24
Date: 15/10/2024
*/
//Preprocessor Directive
#include<stdio.h>
int main () {
    int r,i;
    int marks [2] [3] = { {50,30,90},{40,50,30} };
    for(r=0;r<2;r++);{
        for(i=0;i<3;i++){
            printf("marks[%d] [%d] =%d \n",r,i,marks [r] [i]);
        }
    }
    return 0;
}
