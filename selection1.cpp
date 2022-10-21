#include<bits/stdc++.h>
#include<fstream>
#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {
      if (array[i] < array[min_idx])
        min_idx = i;
    }
    //swap(&array[min_idx], &array[step]);
    int temp=array[min_idx];
    array[min_idx]=array[step];
    array[step]=temp;
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
            selectionSort(arr,i);
            end = clock();
            double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
             cout<<"For input size = "<< i << "------------ time taken : " << fixed << time_taken << setprecision(5);
            cout << " sec " << endl;
        }
    }
}