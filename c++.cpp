#include<bits/stdc++.h>
using namespace std;



int main()
{
   #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

      int t;
      cin>>t;
      while(t--)
      {
      int n;
      cin>>n;
      string str;
      cin>>str;
      string str1,str2;
      vector <int> v,v1,v2; 
      for(int i=0;i<n;i++)
      {
          v.push_back(str[i]);
          v1.push_back(str[i]);
          v2.push_back(str[i]);



        // str1[i]=str[i];
        // str2[i]=str[i];
      }

      sort(v1.begin(),v1.end());
      sort(v2.begin(),v2.end());
      reverse(v2.begin(),v2.end());

      if(v!=v1 )
      {
        cout<<"1";
      }
      else cout<<"0";

      // sort(str1.begin(),str1.end());
      // sort(str2.begin(),str2.end());
      // reverse(str2.begin(),str2.end());
      
      // int temp=0;
      // for(int i=0;i<n;i++)
      // {
      //   if((str[i]!=str1[i]) && (str[i]!=str2[i]))
      //   temp=1;
      // }

      // if(temp==1)
      // {
      //   cout<<"1";

      // }
      // else cout<<"0";
      cout<<endl;
      
      }
   






   
}
