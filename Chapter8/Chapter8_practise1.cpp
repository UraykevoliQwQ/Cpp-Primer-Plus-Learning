#include <bits/stdc++.h>
using namespace std;
void show(const char *str, int times = 1);
int main()
{
    show("Hello");
    show("UraykevoliQwQ", 3);
    return 0;
}
void show(const char *str, int times)
{
    for (int i = 1; i <= times; i++)
    {
        cout << str << endl;
    }
}