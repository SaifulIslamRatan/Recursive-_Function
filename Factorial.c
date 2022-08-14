#include<stdio.h>
int Factorial(int Number){
    if(Number == 0)
        return 1;
    return Number*Factorial(Number-1);}
    int main(){
    int Number;
    int Result;
    printf("Please dear enter the Number:");
    scanf("%d", &Number);
    Result = Factorial(Number);
    printf("The factorial of %d is %d !",Number,Result);
    return 0;
}
