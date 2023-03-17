
//include all the libraries
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// write a class for sorting
class Sort {
   public:
      // write a quick sort algorithm in C++ using lambda expressions
      void quickSort(vector<int> &arr, int left, int right) {
         if(left < right) {
            int pivot = partition(arr, left, right);
            quickSort(arr, left, pivot - 1);
            quickSort(arr, pivot + 1, right);
         }
      }
      // write a partition function
      int partition(vector<int> &arr, int left, int right) {
         int pivot = arr[right];
         int i = left - 1;
         for(int j = left; j < right; j++) {
            if(arr[j] <= pivot) {
               i++;
               swap(arr[i], arr[j]);
            }
         }
         swap(arr[i + 1], arr[right]);
         return i + 1;
      }
};

// write a class for merge sort
class MergeSort {
   public:
      // write a merge sort algorithm in C++ using lambda expressions
      void mergeSort(vector<int> &arr, int left, int right) {
         if(left < right) {
            int mid = left + (right - left) / 2;
            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);
            merge(arr, left, mid, right);
         }
      }
      // write a merge function
      void merge(vector<int> &arr, int left, int mid, int right) {
         int n1 = mid - left + 1;
         int n2 = right - mid;
         vector<int> L(n1), R(n2);
         for(int i = 0; i < n1; i++) {
            L[i] = arr[left + i];
         }
         for(int j = 0; j < n2; j++) {
            R[j] = arr[mid + 1 + j];
         }
         int i = 0, j = 0, k = left;
         while(i < n1 && j < n2) {
            if(L[i] <= R[j]) {
               arr[k] = L[i];
               i++;
            } else {
               arr[k] = R[j];
               j++;
            }
            k++;
         }
         while(i < n1) {
            arr[k] = L[i];
            i++;
            k++;
         }
         while(j < n2) {
            arr[k] = R[j];
            j++;
            k++;
         }
      }
};

// test this function
int main() {
   vector<int> arr = {5, 4, 3, 2, 1};
   // test more cases
   vector<int> arr2 = {5, 4, 3, 2, 1, 0, 10, 120, 1023, 123};
    vector<int> arr3 = {5, 4, 3, 2, 1, 0, 10, 120, 1023, 123, 123};
    // test the merge sort with arr2
    MergeSort mergeSort;
    mergeSort.mergeSort(arr2, 0, arr2.size() - 1);
    for(int i = 0; i < arr2.size(); i++) {
       cout << arr2[i] << endl;
    }
    // test the merge sort with arr3
    mergeSort.mergeSort(arr3, 0, arr3.size() - 1);
    for(int i = 0; i < arr3.size(); i++) {
       cout << arr3[i] << endl;
    }
    // test the quick sort with arr


   Sort sort;
   sort.quickSort(arr, 0, arr.size() - 1);
   for(int i = 0; i < arr.size(); i++) {
      cout << arr[i] << endl;
   }
}
// write a class for quick sort
class QuickSort {
   public:
      // write a quick sort algorithm in C++ using lambda expressions
      void quickSort(vector<int> &arr, int left, int right) {
         if(left < right) {
            int pivot = partition(arr, left, right);
            quickSort(arr, left, pivot - 1);
            quickSort(arr, pivot + 1, right);
         }
      }
      // write a partition function
      int partition(vector<int> &arr, int left, int right) {
         int pivot = arr[right];
         int i = left - 1;
         for(int j = left; j < right; j++) {
            if(arr[j] <= pivot) {
               i++;
               swap(arr[i], arr[j]);
            }
         }
         swap(arr[i + 1], arr[right]);
         return i + 1;
      }
};

