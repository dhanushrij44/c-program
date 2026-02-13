#include<stdio.h>
int main(){
    int unit;
    float bill;

    printf("Enter units: ");
    scanf("%d",&unit);
    
    if(unit <= 100)
    {
        bill = unit * 5;
    }
    else
    {
        bill = (100 * 5) + (unit - 100) * 7;
    }

    printf("Bill amount = Rs. %.2f", bill);

    return 0;
}
