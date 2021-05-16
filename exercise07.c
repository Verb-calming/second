#include <stdio.h>
#include <math.h>
//根据输入的三角形的三条边判断三角形的类型，并输出其面积和类型。
int triangle(double a, double b, double c);
void type(double a, double b, double c);
main()
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double area = 0.0;
    int tmp = 0.0;
    do
    {
        printf("Please enter the length of three sides of the triangle.\n");
        scanf("%lf%lf%lf", &a, &b, &c);
        //判断是否能组成三角形
        int ret = triangle(a, b, c);
        if (ret == 1)
        {
            //判断该三角形属于什么类型并求其面积
            type(a, b, c);
            tmp = (a + b + c) / 2.0;
            area = (double)sqrt(tmp * (tmp - a) * (tmp - b) * (tmp - c));
            printf("The area of the triangle is %lf .\n", area);
            break;
        }
        else
        {
            printf("Input error,please input again.\n");
        }
    } while (1);
    system("pause");
}
int triangle(double a, double b, double c)
{

    if ((a+b>c)||(a+c)>b||(c+b)>a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void type(double a, double b, double c)
{
    double s = 0.0;
    double tmp = 0.0;
    if (a == b && a == c && c == b)
    {
        printf("This triangle is equilateral!\n");
    }
    else if (a == b && a != c && b != c)
    {
        if ((a * a) + (b * b) == (c * c) || (a * a) + (c * c) == (b * b) || (c * c) + (b * b) == (a * a))
        {
            printf("This triangle is an isosceles right triangle!\n");
        }
        else
        {
            printf("This triangle is an isosceles triangle!\n");
        }
    }
    else if ((a * a) + (b * b) == (c * c) || (a * a) + (c * c) == (b * b) || (c * c) + (b * b) == (a * a))
    {
        printf("This triangle is a right triangle!\n");
    }
    else
    {
        printf("This triangle is a normal triangle!\n");
    }
}