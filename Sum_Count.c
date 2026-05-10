#include <stdio.h>
int main()
{
    int sum =0;
    int count =0;
    int i=1;
    while(i<=100)
    {
        if(i%4==0)
        {
           sum+=i;
           count++;
        }
        i++;
    }
    printf("Sum of integers between 1 to 100 that are divisible by 4: %d\n",sum);
    printf("Count of such integers: %d\n",count);
    return 0;
}
