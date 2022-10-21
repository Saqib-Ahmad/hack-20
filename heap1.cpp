#include<bits/stdc++.h>
#include<fstream>
#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

 void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && arr[left] > arr[largest])
      largest = left;
  
    if (right < n && arr[right] > arr[largest])
      largest = right;
    if (largest != i) {
      swap(arr[i], arr[largest]);
      heapify(arr, n, largest);
    }
  }
  

  void heapSort(int arr[], int n) {
  
    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
  
    for (int i = n - 1; i >= 0; i--) {
      swap(arr[0], arr[i]);

      heapify(arr, i, 0);
    }
  }



int main()
{
    ifstream intdata;
    intdata.open("increasing.txt");
    if(!intdata)
    {
        cerr << "Error: file could not be opened" << endl;
        exit(1);
    }
    else
    {
        int n=20000;
        for(int i=n;i<=200000;i+=n)
        {
            int arr[i];
            int cnt=0;
            while(cnt<i&&(intdata>>arr[cnt]))
            {
                cnt++;
            }
            clock_t start, end;
            start = clock();
            heapSort(arr,i);
            end = clock();
            double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
             cout<<"For input size = "<< i << "------------ time taken : " << fixed << time_taken << setprecision(5);
            cout << " sec " << endl;
        }
    }
}