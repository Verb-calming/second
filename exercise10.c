#include <stdio.h>
//�ж��Ƿ�������
int Prime_number(int a)
{
    int i = 0;
    for ( i = 2; i < a; i++)
    {
       if (a % i == 0)//�ж��Ƿ�Ϊ����
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
    //��������������������Ҷ���������������ͬ�ģ���Ϊ����ʱ����Ϊ����������
    //�� 1000 ���ڵ����л���������
    int i = 0;
    for ( i = 11; i < 1000; i++)
    {
        int a = 0;
        int b = 0;
        int c = 0;
        if (i < 100)
        {
            a = i % 10;        //��λ
            b = (i / 10) % 10; //ʮλ
            if (Prime_number(i) && a == b)
            {
                printf("%d\n", i);
            }
        }
        else
        {
            a = i % 10;  //��λ
            c = i / 100; //��λ
            if (Prime_number(i) && a == c)
            {
                printf("%d\n", i);
            }
        }
    }
    getchar();
}