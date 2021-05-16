#include <stdio.h>
int sum(int m, int n);
main()
{
    //本题要求实现一个计算m~n（m<n）之间所有整数的和的简单函数
    int m, n;
    printf("Please enter the value of m and n:\n");
    scanf("%d%d", &m, &n);
    printf("sum=%d", sum(m, n));
    getchar();
    getchar();
}
int sum(int m, int n)
{
    int i, sum;
    if (m > n)
    {
        printf("Error!");
    }
    else
    {
        /* for (size_t i = 0; i < n; i++)
        {
            if (m < n)
            {
                m++;
                sum += m;
                if (m == n - 1)
                {
                    break;
                }
            }
        }*/
        while (m < n)
        {
            if (m < n)
            {
                m++;
                sum += m;
                if (m == n - 1)
                {
                    break;
                }
            }
        }
    }
    return sum;
}