#include <bits/stdc++.h>
using namespace std;
template <typename T>
T maxn(T arr[], int n);
template <>
const char *maxn(const char *arr[], int n);
int main()
{
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    double arr2[4] = {1.1, 2.2, 3.3, 4.4};
    const char *arr3[5] = {"Hello", "World", "UraykevoliQwQ", "QwQ", "QwQ"};
    cout << "The max of arr1 is " << maxn(arr1, 6) << endl;
    cout << "The max of arr2 is " << maxn(arr2, 4) << endl;
    cout << "The max of arr3 is " << maxn(arr3, 5) << endl;
    return 0;
}
template <typename T>
T maxn(T arr[], int n)
{
    T max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
template <>
const char *maxn(const char *arr[], int n)
{
    const char *max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (strlen(arr[i]) > strlen(max))
        {
            max = arr[i];
        }
    }
    return max;
}