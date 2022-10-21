#include<bits/stdc++.h>
using namespace std;
int lSearchCompare(int arr[],int s,int n, int target)
{
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==target)
		{
			return i;
		}
		else
		ans++;
		
	}
	return ans;
}

int bSearchCmp(int arr[],int s,int e,int target)
{
    int i=s;int j=e-1;
    int ans=0;
    while(i<j)
    {
        int mid=(i+j)/2;
        if(arr[mid]==target)
        {
            return ans;
        }
        else if(arr[mid]>target)
        {
            j=mid-1;
            ans++;
        }
        else
        {
            i=mid+1;
            ans++;
        }
    }
    return  ans;
}
int main()
{
   int arr[10001];
   for(int i=0;i<10001;i++)
   {
       arr[i]=i;
   }
   for(int i=1000;i<=10000;i+=1000)
   {
       int arr1[i];
       for(int j=0;j<i;j++)
       {
           arr1[j]=arr[j];
       }
    //   int cmp=lSearchCompare(arr,0,i,-1);
       int cmp=bSearchCmp(arr1,0,i,-1);
       cout<<"Total Comprisions : "<<cmp<<endl;
   }
}