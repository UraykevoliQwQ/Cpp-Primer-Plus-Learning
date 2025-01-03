#include<bits/stdc++.h>
using namespace std;
struct free_throws
{
    string name;
    int made;
    int attempts;
    float percent;
};
void display(const free_throws &ft);
void set_pc(free_throws &ft);
free_throws &accumulate(free_throws &target, const free_throws &source);
int main()
{
    free_throws one = {"Ifelsa Branch", 13, 14};
    free_throws two = {"Andor Knott", 10, 16};
    free_throws three = {"Minnie Max", 7, 9};
    free_throws four = {"Whily Looper", 5, 9};
    free_throws five = {"Long Long", 6, 14};
    free_throws team = {"Throwgoods", 0, 0};
    free_throws dup;
    set_pc(one);
    display(one);
    accumulate(team, one);
    display(team);

    display(accumulate(team, two));
    accumulate(accumulate(team, three), four);
    display(team);

    dup = accumulate(team, five);
    cout << "Displaying team:\n";
    display(team);
    cout << "Displaying dup after assignment:\n";
    display(dup);
    set_pc(four);   
    accumulate(dup, five) = four;
    cout << "Displaying dup after ill-advised assignment:\n";
    display(dup);



    return 0;
}
void display(const free_throws &ft)
{
    cout << "Name: " << ft.name << '\n';
    cout << " Made: " << ft.made << '\t';
    cout << "Attempts: " << ft.attempts << '\t';
    cout << "Percent: " << ft.percent << '\n';
}
void set_pc(free_throws &ft)
{
    if (ft.attempts != 0)
        ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
    else
        ft.percent = 0;
}
free_throws &accumulate(free_throws &target, const free_throws &source)
{
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}
// Output:
// Name: Ifelsa Branch
//  Made: 13    Attempts: 14    Percent: 92.8571
// Name: Throwgoods
//  Made: 13    Attempts: 14    Percent: 92.8571
// Name: Throwgoods                 
//  Made: 23    Attempts: 30    Percent: 76.6667
// Name: Throwgoods
//  Made: 35    Attempts: 48    Percent: 72.9167
// Displaying team:
// Name: Throwgoods
//  Made: 41    Attempts: 62    Percent: 66.129
// Displaying dup after assignment:
// Name: Throwgoods
//  Made: 47    Attempts: 76    Percent: 61.8421
// Displaying dup after ill-advised assignment:
// Name: Long Long
//  Made: 6    Attempts: 14    Percent: 42.8571
// Name: Whily Looper
//  Made: 5    Attempts: 9    Percent: 55.5556
// Name: Long Long
//  Made: 6    Attempts: 14    Percent: 42.8571
// Name: Whily Looper
//  Made: 5    Attempts: 9    Percent: 55.5556
// Name: Long Long
//  Made: 6    Attempts: 14    Percent: 42.8571
// Name: Whily Looper
//  Made: 5    Attempts: 9    Percent: 55.5556
        