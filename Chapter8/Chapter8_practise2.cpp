#include <bits/stdc++.h>
using namespace std;
struct CandyBar
{
    string brand;
    double weight;
    int calorie;
};
void set(CandyBar &cb, const char *brand = "Millennium Munch", double weight = 2.85, int calorie = 350)
{
    cb.brand = brand;
    cb.weight = weight;
    cb.calorie = calorie;
}