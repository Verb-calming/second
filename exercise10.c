#include <stdio.h>
//判断是否是素数
int Prime_number(int a)
{
    int i = 0;
    for ( i = 2; i < a; i++)
    {
       if (a % i == 0)//判断是否为素数
        {
            return 0;
        } 
        else if (a != i + 1)
        {
            continue;
        }
        else
        {
            return 1;
        }
    }
}
main()
{
    //任意的整数，当从左向右读与从右向左读是相同的，且为素数时，称为回文素数。
    //求 1000 以内的所有回文素数。
    int i = 0;
    for ( i = 11; i < 1000; i++)
    {
        int a = 0;
        int b = 0;
        int c = 0;
        if (i < 100)
        {
            a = i % 10;        //个位
            b = (i / 10) % 10; //十位
            if (Prime_number(i) && a == b)
            {
                printf("%d\n", i);
            }
        }
        else
        {
            a = i % 10;  //个位
            c = i / 100; //百位
            if (Prime_number(i) && a == c)
            {
                printf("%d\n", i);
            }
        }
    }
    getchar();
}