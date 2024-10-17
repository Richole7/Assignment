//Arrays in C - 3D array
/*
Author:Richole Oduor
Reg No:CT101/G/25060/24
Date: 15/10/2024
*/
//Preprocessor Directive
#include<stdio.h>
int main () {
    int r,i,k;
    int marks [2] [2] [3] = { {{10,30,50},{40,60,40}},{{10,30,50},{40,60,40}} };
    for(r=0;r<2;r++){
        for(i=0;i<2;i++){
            for(k=0;k<3;k++){
                printf("marks[%d] [%d] [%d] = %d \n",r,i,k,marks [r] [i] [k]);
            }
        }
    }
    return 0;
}
