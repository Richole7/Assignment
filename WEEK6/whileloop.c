\// while do for output numbers
#include <stdio.h>
int main () {
    int start, sum =0,stop;
    printf("Enter the value for start:");
    scanf("%d",&start);

    printf("Enter the value for stop:");
    scanf("%d",&stop);

    while(start<=stop){
        printf("%d\n",start);
        start++;
     sum = sum +start;
     sum += start;
    }
    printf("The sum is %d",sum);
    return 0;
}
