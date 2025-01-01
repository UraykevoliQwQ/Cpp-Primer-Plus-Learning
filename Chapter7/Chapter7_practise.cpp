#include <bits/stdc++.h>
using namespace std;
struct Map
{
};
struct boss
{
};
// 1.声明函数，写函数体，调用函数
// 2.a
void igor();
// 2.b
float tofu(int n);
// 2.c
double mpg(double a, double b);
// 2.d
long summation(long a[], int n);
// 2.e
double doctor(const char *str, int n);
// 2.f
void ofcourse(boss b);
// 2.g
char *plot(Map *g);
// 3
void change(int *a, int n, int value)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = value;
    }
}
// 4.
void change(int *a, int *b, int value)
{
    for (int *i = a; i != b; i++)
        *i = value;
}
// 5.
double cal(double *arr, int n)
{
    double result = 0;
    for (int i = 0; i < n; i++)
        result = max(result, arr[i]);
    return result;
}
// 6.反正是形参，随便改
// 7."abcdrfg",char str[],char*str;
// 8.
int replace(char *str, char c1, char c2)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c1)
            str[i] = c2;
    }
}
// 9.(1)"pizza"的地址，(2)字符串的第三个字符的地址
// 10.
// 11.
int judge(int(const char *));
// 12.
struct applicant
{
    char name[30];
    int credit_ratings[3];
};
// 12.a
void print(applicant a)
{
    cout << a.name << endl;
    for (int i = 0; i < 3; i++)
        cout << a.credit_ratings[i] << " ";
    cout << endl;
}
// 12.b
void print(applicant *a)
{
    cout << a->name << endl;
    for (int i = 0; i < 3; i++)
        cout << a->credit_ratings[i] << " ";
    cout << endl;
}
// 13.
void f1(applicant *a);
const char *f2(const applicant *a1, const applicant *a2);
auto p1 = f1;
auto p2 = f2;
void (*pa[3])(applicant *a);
const char *(*pb[10])(const applicant *a1, const applicant *a2);
int main()
{

    return 0;
}