#include <stdio.h>

/* function declaration */
void printline(void);
void value(void);
main()
{
    printline();
    value();
    printline();
}
/*   Function1: printline()  */

void printline(void)         /* containes no argoments */
{
    int i;

    for(i=1;i<=35;i++)
        printf("%c",'-');
    printf("\n");
}
/*   Function2: value()      */

void value(void)             /* containes no argoments */
{
    int year,period;
    float inrate,sum,principal;

    printf("Principal amount?");
    scanf("%f",&principal);
    printf("Interest rate?   ");
    scanf("%f",&inrate);
    printf("Period?          ");
    scanf("%d",&period);

    sum = principal;
    year = 1;
    while(year<=period)
    {
        sum = sum *(1+inrate);
        year = year + 1;
    }
    printf("\n%8.2f %5.2f %5d %12.2f\n",principal,inrate,period,sum);
}


