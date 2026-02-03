#include<stdio.h>
void main(){
    int num1,num2;
    printf("enter the 1st number: ");
    scanf("%d",&num1);
    printf("enter the 2nd number: ");
    scanf("%d",&num2);
    if(num1>num2){
        printf("num1 is greater than num2");
    }
    else{
        printf("num2 is greater than num1");
    }
}