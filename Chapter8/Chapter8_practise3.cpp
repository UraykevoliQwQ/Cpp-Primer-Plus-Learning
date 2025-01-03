#include <bits/stdc++.h>
using namespace std;
void toupper(string &str);
int main()
{
    cout << "Enter a string (q to quit): ";
    string str;
    getline(cin, str);
    while (str != "q")
    {
        toupper(str);
        cout << str << endl;
        cout << "Next string (q to quit): ";
        getline(cin, str);
    }
    cout << "Bye!" << endl;
    return 0;
}
void toupper(string &str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if ('a' <= str[i] && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
    }
}