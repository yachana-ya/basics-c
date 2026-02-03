#include<stdio.h>
void main(){
    int a,b;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
    if(b%a==0){
        printf("b is divided by a");
    }
    else{
        printf("b is not divided by a");
    }
}
