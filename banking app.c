#include <stdio.h>
#include <stdlib.h>

int main()
{
    int balance = 10000,choice,a,c,pin = 1810,p;

incorrect:

    printf("\nWelcome");
    printf("\n\nEnter your 4 digit code to Login :");
    scanf("%d",&p);
    if(p==pin)
    {
        printf("\n\nWELCOME,YOU HAVE ENTERED CORRECT PIN.");
    }
    else
    {
        printf("\n\nSORRY,YOU HAVE ENTERED INCORRECT PIN.");
        goto incorrect;
    }
    /***************************************************************************************
     if(pin>1000 && pin<9999)
    {
        printf("\n\nWELCOME,YOU HAVE ENTERED CORRECT PIN.");            { FOR ANY 4 DIGIT PIN    }
    }
     else
    {
        printf("\n\nSORRY,YOU HAVE ENTERED INCORRECT PIN.");
        goto incorrect;
    }****************************************************************************************/

start:

    printf("\n\nSelect a choice :");
    printf("\n\n1.View balance :");
    printf("\n2.Deposit money :");
    printf("\n3.Withdraw money :");
    printf("\n4.Log out :");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\nYour balance left is : %d$",balance);
        goto start;
    case 2:
        printf("\nEnter the money to be deposited :");
        scanf("%d",&a);
        balance=balance+a;
        printf("Your money is successfully deposited.");
        goto start;
    case 3:
        printf("\nEnter the money to be withdrawed :");
    enter:
        scanf("%d",&c);
        if(balance-c<5000)
        {
            printf("Enter a valid amount as minimum balance needed is 5000$");
        }
        else
        {
            balance=balance-c;
            printf("Your money is successfully withdrawed.");
        }
        goto enter;
    case 4:
        goto incorrect;
    }
    getch();
    return 0;
}
