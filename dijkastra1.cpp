#include<bits/stdc++.h>
using namespace std;

void dijkstra(vector<pair<int,int>> adj[], int src, int n){

    vector<int> dist(n, INT_MAX);
    dist[src]=0;

    priority_queue<pair<int, int>> pq;
    pq.push({0,src});

    while (!pq.empty())
    {
        int mdist=pq.top().first;
        int cur_node=pq.top().second;
        pq.pop();

        for(pair<int,int> nbr: adj[cur_node]){
            int weight=nbr.second;
            int nbrP=nbr.first;
            if(mdist+weight<dist[nbrP]){
                dist[nbrP]=mdist+weight;
                pq.push({dist[nbrP],nbrP});
            }
        }

    }
    for(int i=0;i<n;i++){
        cout<<"shortest path from "<<src<<" to "<<i<< " is "<<dist[i]<<"\n";
    }



}

int main()
{
    
int v;
int e;
cout<<"enter no. of vertex and edges";

cin>>v>>e;

vector<pair<int,int>> adj[v];

for(int i=0;i<e;i++){

    int u,v,w;
    cin>>u>>v>>w;

    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
}
cout<<"plz enter the source node";
int src;
cin>>src;

dijkstra(adj,src,v);

}