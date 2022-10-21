#include<bits/stdc++.h>
#include<fstream>
#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;


void bubbleSort(int arr[],int n)
{
    bool swapped=false;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped)
        {
            break;
        }
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
            bubbleSort(arr,i);
            end = clock();
            double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
             cout<<"For input size = "<< i << "------------ time taken : " << fixed << time_taken << setprecision(5);
            cout << " sec " << endl;
        }
    }
}