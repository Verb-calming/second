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
//д�������
//��Ŀ��
/* ����һ�������� n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�
�����ʽ��
ÿ������������� 1 ��������������������Ȼ�� n ��ֵ�����ﱣ֤ n С�� 10^100

�����ʽ��
��һ������� n �ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ��� 1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�
����������
1234567890987654321123456789

���������
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
