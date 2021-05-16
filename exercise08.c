//#include <stdio.h>
// main()
// {
//     int i = 2;
//     int k = 2;
//     int s = 0;
//     int j = 0;
//     int a = 0;
//     a = (++k) + (++k) + (++k);
//     for (j = 1; j <= 3; j++)
//     {
//         s += (++i);
//         printf("%d %d\n", s, i);
//     }
//     printf("%d %d\n", a,k);
//     printf("%d %d\n", s,i);
//     getchar();
// }
#include <stdio.h>
int GCD(int a, int b);
main()
{
    //从键盘输入两个正整数 a 和 b，求其最大公约数和最小公倍数。
    int a = 0;
    int b = 0;
    printf("Please enter the value of a and b:\n");
    scanf("%d %d", &a, &b);
    //利用函数来求其最大公约数
    int ret1 = GCD(a, b);
    int ret2 = ((a * b) / ret1); //最小公倍数等于两数之积除以其最大公约数
    printf("The GCD of a and b is %d\nThe LCM of a and b is %d\n", ret1, ret2);
    getchar();
    getchar();
}
//运用递归函数解决最大公约数问题
int GCD(int a, int b)
{
    if(a%b==0)
    {
        return b;
    }
    return GCD(b, a % b);
}

