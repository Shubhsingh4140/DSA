// User Function Template
class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        vector<int> dist(V,INT_MAX);
        dist[src]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,src});
        vector<vector<pair<int,int>>> adj(V);
      for (int i = 0; i < edges.size(); i++) {
    int u = edges[i][0];
    int v = edges[i][1];
    int wt = edges[i][2];
    adj[u].push_back({v, wt});
    adj[v].push_back({u, wt});  // remove this line for directed graph
}

    while(!pq.empty()){
        int u=pq.top().second;
        int dt=pq.top().first;
        pq.pop();
        for(auto it:adj[u]){
            int v=it.first;
            int wt=it.second;
            if(dt+wt<dist[v]){
                dist[v]=dt+wt;
                pq.push({dist[v],v});
            }
        }
    
        }
        return dist;
    }
};
