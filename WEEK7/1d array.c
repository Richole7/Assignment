//Arrays in C - 1D array
#include<stdio.h>
int main () {
    int r;
    int marks[5] = {10,30,50,40,60};
    for(r=0;r<5;r++){
        printf("marks[%d] = %d \n",r,marks [r]);
    }
    return 0;
}
