class Solution {
  public:
  void dfs(int node, vector<vector<int>>& adj,stack<int>& st,vector<int>&vis){
      vis[node]=1;
      for(auto it:adj[node]){
          if(!vis[it]){
              dfs(it,adj,st,vis);
          }
      }
      st.push(node);
      return;
      
  }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        for(auto &edge:edges){
            int u=edge[0];
            int v=edge[1];
            adj[u].push_back(v);
        }
        vector<int> vis(V,0);
        stack<int> st;
        for(int i=0;i<V;i++){
            if(!vis[i])
            dfs(i,adj,st,vis);
        }
        vector<int> res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
            
        }
        return res;
    }
};
