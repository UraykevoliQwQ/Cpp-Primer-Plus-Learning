#include <iostream>
#include <cstring>
using namespace std;
struct stringy
{
    char *str;
    int ct;
};
void set(stringy &str, const char *s);
void show(const stringy &str, int times = 1);
int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);

    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(beany, 3);
    show(beany);
    delete[] beany.str;
    return 0;
}
void set(stringy &str, const char *s)
{
    str.ct = strlen(s);
    str.str = new char[str.ct + 1];
    strcpy(str.str, s);
}
void show(const stringy &str, int times)
{
    for (int i = 0; i < times; i++)
    {
        cout << str.str << endl;
    }
}