class Solution{
public:
    int numProvinces(vector<vector<int>> adj) {
        int V=adj.size();
        vector<int> vis(V,0);
        int count=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(adj,i,vis);
                count++;
            }
        }
        return count;

    }
    void dfs(vector<vector<int>>& adj,int V,vector<int> &vis){
        vis[V]=1;
        for(int j=0;j<adj.size();j++){
            if(adj[V][j]==1&&vis[j]!=1){
                dfs(adj,j,vis);
            }
        }
        
    }
};
