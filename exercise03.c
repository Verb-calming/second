#include <stdio.h>
int Pyramid(int n);
main()
{
    //本题要求实现函数输出n行数字金字塔。
    int n;
    printf("Please enter the value of n:\n");
    scanf("%d", &n);
    printf("This pyramid has %d levels!\n", Pyramid(n));
    getchar();
    getchar();
}
int Pyramid(int n)
{
    int i, j, k;
    for (size_t i = 1; i < n; i++)
    {
        for (size_t k = 0; k < n - i; k++)
        {
            printf(" ");
        }
        for (size_t j = 1; j <= 2 * i - 1; j++)
        {
            if (i % 2 != 1)
            {
                if (j % 2 != 1)
                {
                    printf(" ");
                }
                else
                {
                    printf("%d", i);
                }
            }
            else
            {
                if (j % 2 != 1)
                {
                    printf(" ");
                }
                else
                {
                    printf("%d", i);
                }
            }
        }
        printf("\n");
    }
    return n;
}