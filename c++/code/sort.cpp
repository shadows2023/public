#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Sort {
public:
    void insertionSort(vector<T> &arr) {
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
    }
    void bubbleSort(vector<T> &arr){
        int n=arr.size();
        for (int i = 0; i < n - 1; i++){
            for (int j = 0; j < n - i - 1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
    void chooseSort(vector<T> &arr){
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
    }
    void merge(vector<T> &arr,int start,int mid,int end){
        int n1 = mid - start + 1;
        int n2 = end - mid;
        vector<T> L(n1),R(n2);
        for (int i = 0; i < n1;++i){
            L[i] = arr[start + i];
        }
        for (int j = 0; j < n2; ++j){
            R[j] = arr[mid + j + 1];
        }
        int i = 0, j = 0, k = start;
        while(i<n1 && j<n2){
            if(L[i]<=R[j]){
                arr[k] = L[i];
                i++;
            }else{
                arr[k] = R[j];
                j++;
            }
            k++;
        }
        while(i<n1){
            arr[k] = L[i];
            i++;
            k++;
        }
        while(j<n2){
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    void mergeSort(vector<T> &arr,int start,int end){
        if(start>=end) return;
        int mid = (start + end) / 2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
};