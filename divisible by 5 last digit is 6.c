#include<stdio.h>
void main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    if(num%5==0 && num%6==0){
        printf("number is divisible by 5 ");
    }
    else if(num%10==0){
        printf("last digit is 6");
    }else{
        printf("enter other number");
    }
}