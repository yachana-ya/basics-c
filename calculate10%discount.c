#include<stdio.h>
void main(){
    int bill,discount,bill_disc;
    printf("enter the purchase value: ");
    scanf("%d",&bill);
    if(bill>10000){
        discount=bill*0.10;
    }
    else{
        discount=bill*0.05;
    }
    bill_disc=bill-discount;
    printf("the total bill is %d",bill_disc);
}