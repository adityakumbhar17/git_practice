#include<stdio.h>
int main()
{
    //now this code for branch_1 code
    int a=10,b=20;
    int sum=a+b;//this is the code for branch_1
    printf("hello you are in branch_1\n");
    printf("Sum of a and b is: %d", sum);
    //now this code for branch_2 code
    //now we are using that sum  and  chek that number is even or odd
    if(sum%2==0)
    {
        printf("\nSum is even");
    }
    else
    {
        printf("\nSum is odd");
    }
    return 0;
}
//this is the version V1.1a
