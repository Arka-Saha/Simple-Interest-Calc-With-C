#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Declaring Variables
    int principal, time, rate_int, si, final_amt;

    //Asking For Input (Values Input)
    printf("Enter Principal Amount: Rs ");
    scanf("%d", &principal);

    printf("Enter Time(in years): ");
    scanf("%d", &time);

    printf("Enter The Rate Of Interest: ");
    scanf("%d", &rate_int);
    
    //using formula to calc SI and Final Amount
    si = principal * time * rate_int/100; 
    final_amt = principal + si;

    //Printing Final Statement
    printf("Principal: Rs %d \nTime: %d years \nRate Of Interest: %d \nNow, The Simple Interest: Rs %d \nFinal Amount: Rs %d", principal, time, rate_int, si,final_amt);
}
