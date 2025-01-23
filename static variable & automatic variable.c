#include<stdio.h>
main()
{
    int n;
    void increment(void);
    for(n=1;n<=5;n++)
    increment();
}
void increment(void)
{
    int lcount=0;
    static int scount=0;
    lcount++;
    scount++;
    printf("\n1count=%d scount=%d", lcount, scount);
}