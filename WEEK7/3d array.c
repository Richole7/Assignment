//Array in C - 3D arrays
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
