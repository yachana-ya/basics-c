#include<stdio.h>
int main(){
    int num;
    printf("enter the number ");
    scanf("%d",&num);
    if(num%10==4){
        printf("The number is divisible by 4");
        }else{
            printf("The number is not divisible by 4");
        }
        return 0;
}
