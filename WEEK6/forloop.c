//for loop for output numbers 1 - 50
#include <stdio.h>
int main () {
    int start , sum=0, stop;
    printf("Enter the value for start:");
    scanf("%d",&start);

    printf("Enter the value for stop");
    scanf("%d",&stop);

    for(start =1; start<=stop;start++){
        printf("%d \n",start);
        sum = sum + start;
    }
    return 0;
}
