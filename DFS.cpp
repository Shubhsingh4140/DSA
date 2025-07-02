// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <queue>
using namespace std;


void dfs(int st,vector<vector<int>> &adj,vector<int> &vis,vector<int> &res){
   vis[st]=1;
    res.push_back(st);
    for(auto it:adj[st]){
        if(!vis[it]){
             
            dfs(it,adj,vis,res);
        }
    }
}

vector<int> dfsCall(int V,vector<vector<int>> &adj,int st){
    vector<int> res;
    vector<int> vis(V,0);
   dfs(st,adj,vis,res);
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

    vector<int> res = dfsCall(V, adj,1); // Or use topoSortKahn(V, adj)

    cout << "DFS"<<endl;
    for (int node : res)
        cout << node << " ";
    return 0;
}
