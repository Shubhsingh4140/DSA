// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <queue>
using namespace std;




void dfsCall(int V,vector<vector<int>> &adj){
  vector<int> indegree(V,0);
  vector<int> res;
  queue<int> qp;
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        for(int i:indegree){
            cout<<i<<" ";
        }
        cout<<endl;
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0){
                qp.push(i);
            }
        }
        while(!qp.empty()){
            int x=qp.front();
            res.push_back(x);
            qp.pop();
            for(auto it :adj[x]){
                indegree[it]--;
                if(indegree[it]==0){
                    qp.push(it);
                }
            }
        }
            cout<<res.size()<<endl;
        for(int i:res){
            cout<<i<<" ";
        }
    
}



int main() {
    int V = 9;
    vector<vector<int>> adj(V);
    
    // Example DAG:
    adj[0]={1};
    adj[1] = {2, 6};
    adj[4] = {5,1};
    adj[2] = {3,4};
    adj[3] = {};
    adj[5] = {};
    adj[6] = {7,8};
    adj[7] = {5};
    adj[8] = {};

    // vector<int> res = dfsCall(V, adj,1);
     dfsCall(V, adj);// Or use topoSortKahn(V, adj)

    cout << "DFS"<<endl;
   
    return 0;
}
