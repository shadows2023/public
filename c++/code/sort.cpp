#include<bits/stdc++.h>
using namespace std;
template<typename T>
void insertionSort(vector<T> &arr){
    for (int i = 2; i < arr.size();i++){
        T temp = arr[i];
        int j = i - 1;
        while (j >0 && temp < arr[j]){  // 降序只需改变不等号方向
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }             
}