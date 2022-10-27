/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> V;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        vector<int> temp;
        for(int j=0;j<m;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        V.push_back(temp);
    }
    V.push_back(vector<int> ());//add extra vector of size 0 , just for example
    cout<<"output"<<endl;
    
    
    for(int i=0;i<V.size();i++)
    {
        cout<<"size : "<<V[i].size()<<endl;
        for(int j=0;j<V[i].size();j++)
        {
            cout<<V[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
