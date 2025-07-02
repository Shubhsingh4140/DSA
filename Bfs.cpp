//Graph BFS
#include <iostream>
#include <vector>
#include <queue>
using namespace std;


vector<int> bfs(int V,vector<vector<int>> &adj,int st){
    vector<int> res;
    int vis[V]={0};
    vis[st]=1;
    queue<int> q;
    q.push(st);
    while(!q.empty()){
        int x=q.front();
        q.pop();
        res.push_back(x);
        for(auto it: adj[x]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
            
        }
        
        
    }
    return res;
    
}

int main() {
    int V = 9;
    vector<vector<int>> adj(V);
    
    // Example DAG:
    adj[1] = {2, 6};
    adj[4] = {5};
    adj[2] = {3,4};
    adj[3] = {};
    adj[5] = {};
    adj[6] = {7,8};
    adj[7] = {5};
    adj[8] = {};

    vector<int> res = bfs(V, adj,1); // Or use topoSortKahn(V, adj)

    cout << "BFS";
    for (int node : res)
        cout << node << " ";
    return 0;
}
