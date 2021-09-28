#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,*ptr;

    no=10;
    printf("\nno = %d",no);
    printf("\nno = %u",&no);        //%u is used for printing the address location of the integer.


    ptr=&no;
    printf("\nvalue = %u",ptr);
    printf("\naddress = %u",&ptr);
    printf("\nptr(*ptr) = %d",*ptr);


    *ptr=1000;
    printf("\nUpdated ptr = %u",*ptr);
    printf("\nno = %d",no);


    *ptr=*ptr+200;
    printf("\nupdated ptr = %u",*ptr);
    printf("\nno = %d",no);
    return 0;
}
