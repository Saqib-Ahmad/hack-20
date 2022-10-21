#include<bits/stdc++.h>
#include<fstream>
#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

void insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++)
    { 
        key = arr[i]; 
        j = i - 1; 
        while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
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
            insertionSort(arr,i);
            end = clock();
            double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
             cout<<"For input size = "<< i << "------------ time taken : " << fixed << time_taken << setprecision(5);
            cout << " sec " << endl;
        }
    }
}