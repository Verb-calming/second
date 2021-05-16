#include <stdio.h>
main()
{
    //输入2个正整数lower和upper（lower≤upper≤100）
    //请输出一张取值范围为[lower，upper]
    //且每次增加2华氏度的华氏-摄氏温度转换表。
    //温度转换的计算公式：C=5×(F−32)/9
    //其中：C表示摄氏温度，F表示华氏温度。
    int lower, upper, i;
    float C, c;
    printf("Please enter the value of lower and upper:\n");
    scanf("%d%d", &lower, &upper);
    if (lower > upper)
    {
        printf("Error!\n");
    }
    else
    {
        printf("fahr celsious\n");
        c = 5 * (lower - 32) / 9;
        printf("%d %.1f\n", lower, c);
        lower += 2;
        C = 5 * (lower - 32) / 9;
        printf("%d %.1f\n", lower, C);
    }
    getchar();
    getchar();
}