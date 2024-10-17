//Array in C - 2D arrays
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
