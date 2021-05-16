#include <stdio.h>
int max(int a, int b);
main()
{
    //本题要求对两个整数a和b，输出其中较大的数。
    int a, b;
    printf("Please enter the value of a and b:\n");
    scanf("%d%d", &a, &b);
    printf("max=%d", max(a, b));
    getchar();
    getchar();
}
int max(int a, int b)
{
    int max;
    if (a < b)
    {
        max = b;
    }
    else
    {
        max = a;
    }
    return max;
}