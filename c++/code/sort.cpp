#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Sort {
public:
    vector<T> insertionSort(vector<T> arr) {
        int n = arr.size();
        for (int i = 1; i < n; i++) {
            T temp = arr[i];
            int j = i - 1;
            while (j >= 0 && temp < arr[j]) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }
        return arr;
    }
    vector<T> bubbleSort(vector<T> arr){
        int n=arr.size();
        for (int i = 0; i < n - 1; i++){
            for (int j = 0; j < n - i - 1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
        return arr;
    }
    vector<T> chooseSort(vector<T> arr){
        int n = arr.size();
        for (int i = 0; i < n - 1;i++){
            int min_idx = i;
            for (int j = i + 1; j < n;j++){
                if(arr[j]<arr[min_idx]){
                    min_idx = j;
                }
            }
            swap(arr[i], arr[min_idx]);
        }
        return arr;
    }
    vector<T> fastSort(vector<T> arr){
        
    }
};