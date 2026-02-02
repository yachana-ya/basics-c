#include<stdio.h>
void main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    if(num%3==0 && num%4==0){
        printf("number is divisible by 3 and the last digit is divisible by4");
    }
    else{
        printf("enter other number");
    }
}
