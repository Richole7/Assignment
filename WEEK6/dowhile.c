// do while loop
#include <stdio.h>
int main () {
    int start, sum =0, stop;
    printf("Enter the value for start:");
    scanf("%d",&start);
    printf("Enter the value for stop:");
    scanf ("%d",&stop);
   do{
       printf("%d \n",start);
       start++;
       sum = sum + start;
       sum +=start;
   }
       while (start<=stop);
       printf("the sum is %d",sum);
    return 0;
}
