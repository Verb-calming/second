#include <stdio.h>
#include <math.h>
int Factorial(int a) //求阶乘
{
    int i = 0;
    int b = 1;
    for (size_t i = 1; i <= a; i++)
    {
        b *= i;
    }
    return b;
}
main()
{
    // 自然底数 e=2.718281828…，e 的计算公式如下：
    // e=1+1/1!+1/2!+1/3!+…
    // 要求当最后一项的值小于 10^-10 时结束。
    double ret = 0.0;
    int i = 1;
    while (1)
    {
        ret += 1.0 / Factorial(i);
        if (1.0 / Factorial(i) < (double)pow(10, -10))
        {
            break;
        }
        i++;
    }
    ret += 1.0;
    printf("The natural base is %.9lf\n", ret);
    getchar();
}