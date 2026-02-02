#include<stdio.h>
int main(){
    float radius,height,volume;
    printf("enter the radius of cylider: ");
    scanf("%f",&radius);
    printf("enter the height of cylinder: ");
    scanf("%f",&height);
    volume=3.14*radius*radius*height;
    printf("volume of cylinder is %f",volume);

}