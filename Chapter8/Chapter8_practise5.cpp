#include <bits/stdc++.h>
using namespace std;
template<typename T>
T max5(T arr[5]);
int main(){
    int arr1[5] = {1, 2, 3, 4, 5};
    double arr2[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << "The max of arr1 is " << max5(arr1) << endl;
    cout << "The max of arr2 is " << max5(arr2) << endl;
    return 0;
}
template<typename T>
T max5(T arr[5]){
    T max = arr[0];
    for(int i = 1; i < 5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}