#include <stdio.h>
#include <stdlib.h>
void login();
void exit();

int main(int argc,const char * argv[])
{
    int n;
    printf("\nWELCOME TO FIRSTBOOK.COM FOR BOOKING MOVIE TICKETS.");
    printf("\n\n1.login\n2.exit");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        login();
        break;

    case 2:
        exit(0);
        break;
    }
}
void login()
{
    long int m;
    int c=1810,choice,b,a,D,e;
logout:
    printf("\n\nEnter your mobile number :");
    scanf("%d",&m);
start:
    printf("Enter the 4 digit code to login :");
    scanf("%d",&c);
    if(c==c)
    {
         printf("\nTHANK YOU!YOU HAVE SUCCESSFULLY LOGGED IN!");
book:
         printf("\nEnter a choice :");
         printf("\n1.Book ticket :\n2.View booked tickets :\n3.Logout :");
         scanf("%d",&choice);
         switch(choice)
         {
         case 1:
which:
            printf("Which type of ticket you would like to book :");
            printf("\n1.Diamond@200/-\n2.Gold@150/-\n3.Silver@100/-");
            scanf("%d",&b);
            switch(b)
            {
            case 1:
                printf("How many tickets would you like to book?");
                scanf("%d",&a);
                if(a>7)
                {
                    printf("SORRY!You can book maximum 7 tickets only at once.");
                }
                else
                {
                    printf("THANK YOU!YOUR TICKETS ARE SUCCESSFULLY BOOKED.");
                }
                goto which;

            case 2:
                printf("How many tickets would you like to book?");
                scanf("%d",&D);
                if(a>7)
                {
                    printf("SORRY!You can book maximum 7 tickets only at once.");
                }
                else
                {
                    printf("THANK YOU!YOUR TICKETS ARE SUCCESSFULLY BOOKED.");
                }
                goto which;

            case 3:
                printf("How many tickets would you like to book?");
                scanf("%d",&e);
                if(a>7)
                {
                    printf("SORRY!You can book maximum 7 tickets only at once.");
                }
                else
                {
                    printf("THANK YOU!YOUR TICKETS ARE SUCCESSFULLY BOOKED.");
                }
                goto which;
            }
            goto book;

         case 2:
            printf("The total no. of tickets you have booked is %d",a+D+e);
            printf("The diamond tickets are %d",&a);
            printf("The gold tickets are %d",&D);
            printf("The silver tickets are %d",&e);
            goto book;

         case 3:
            goto logout;
         }
    }
    else
    {
        printf("SORRY,THE CODE IS INCORRECT.");
        goto start;
    }

}

