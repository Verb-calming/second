#include<stdio.h>
#include<math.h>
main()
{
    //本题要求编写程序，计算华氏温度150°F对应的摄氏温度。
    //计算公式：C=5×(F−32)/9
    //式中：C表示摄氏温度，F表示华氏温度，输出数据要求为整型。
    int c, f;
    printf("Please enter the value of f :\n");
    scanf("%d", &f);
    c = 5 * (f - 32) / 9;
    printf("Centigrade is %d\n", c);
    //本题目要求计算下列分段函数f(x)的值：
    //注：可在头文件中包含math.h，并调用sqrt函数求平方根，调用pow函数求幂。
    float x, y;
    printf("Please enter the value of x:\n");
    scanf("%f", &x);
    if (x>=0)
    {
        y = pow(x, 0.5);//pow函数求幂 
    }else{
        y = (x + 1) * (x + 1) + 2 * x + 1 / x;
    }
    printf("y=%.2f\n", y);
    getchar();
    getchar();
}