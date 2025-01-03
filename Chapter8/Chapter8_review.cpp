#include <bits/stdc++.h>
using namespace std;
// 1.
//  (1)短小的函数：函数体较短，通常只有几行代码。
//  (2)频繁调用的函数：在程序中被频繁调用的函数。
//  (3)简单的访问器和修改器：类的访问器（getter）和修改器（setter）函数。
//  (4)性能关键的函数：在性能关键路径上的小函数。
// 2.
// a.
void song(const char *name = "O.My Papa", int times = 1);
// b.将形参times的默认值设为1，这样在调用函数时可以省略times的实参。
// c.可以
// 4.
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
// a.
void show_box(box b)
{
    cout << "maker: " << b.maker << endl;
    cout << "height: " << b.height << endl;
    cout << "width: " << b.width << endl;
    cout << "length: " << b.length << endl;
    cout << "volume: " << b.volume << endl;
}
// b.
void set_volume(box *b)
{
    b->volume = b->height * b->width * b->length;
}
// 5.

// 6.
// a.
double mass(double density, double volume = 1)
{
    return density * volume;
}
// b.
void repeat(int times, const string &str)
{
    for (int i = 0; i < times; i++)
    {
        cout << str << endl;
    }
}
void repeat(const string &str)
{
    for (int i = 0; i < 5; i++)
    {
        cout << str << endl;
    }
}
// 7.
template <typename T>
T max(T a, T b);
template <>
box max<box>(box a, box b);
// 9.
// v1:float
// v2:float&
// v3:float&
// v4:int
// v5:float
int main()
{
    return 0;
}

template <typename T>
T max(T a, T b)
{
    return a > b ? a : b;
}

template <>
box max<box>(box a, box b)
{
    return a.volume > b.volume ? a : b;
}