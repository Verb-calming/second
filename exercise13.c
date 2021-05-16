// #include <stdio.h>

// main()
// {
//     char s;
//     char arr[] = {'p', 'a', 't', 'P', 'A', 'T'};
//     printf("Please enter the value of s:\n");
//     // scanf("%s", &s);
//     printf("%s", arr);
//     getchar();
//     getchar();
// }
#include <stdio.h>
//写出这个数
//题目：
/* 读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
输入格式：
每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10^100

输出格式：
在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。
输入样例：
1234567890987654321123456789

输出样例：
yi san wu
*/
void display(int x)
{
    if (x < 0)
    {
        printf("fu");
        x = -x;
    }

    int i = 1;
    int dis;
    int m;
    if (x < 10)
        i = 1;
    else
    {
        m = x / i;
        while (m > 9)
        {
            i = i * 10;
            m = x / i;
        }
    }
    while (i >= 1)
    {
        dis = x / i;
        switch (dis)
        {
        case 0:
            printf("ling");
            break;
        case 1:
            printf("yi");
            break;
        case 2:
            printf("er");
            break;
        case 3:
            printf("san");
            break;
        case 4:
            printf("si");
            break;
        case 5:
            printf("wu");
            break;
        case 6:
            printf("liu");
            break;
        case 7:
            printf("qi");
            break;
        case 8:
            printf("ba");
            break;
        case 9:
            printf("jiu");
            break;
        }
        if (i > 1)
            printf(" ");
        x = x - i * dis;
        i = i / 10;
    }
}
main()
{
    char c;
    int sum = 0;
    scanf("%c", &c);
    while (c != '\n')
    {
        sum += c - '0';
        scanf("%c", &c);
    }
    display(sum);
    getchar();
    getchar();
}
