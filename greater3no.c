void main(){
    int numA,numB,numC;
    printf("enter the numA number: ");
    scanf("%d",&numA);
    printf("enter the numB number: ");
    scanf("%d",&numB);
    printf("enter the numC number: ");
    scanf("%d",&numC);
    if (numA > numB && numA > numC) {
        printf("Greatest number is %d", numA);
    }
    else if (numB > numA && numB > numC) { 
        printf("Greatest number is %d", numB);
    }
    else {
        printf("Greatest number is %d", numC);
    }
}
