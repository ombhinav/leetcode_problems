class Solution {
public:

    bool isCycle(int node,vector<vector<int>>& adj, int vis[], int dfsvis[]){
        vis[node] = 1;
        dfsvis[node] = 1;
        for(auto it: adj[node]){
            if(!vis[it]){
                if(isCycle(it, adj, vis, dfsvis)){
                    return true;
                }
            }
            else if(dfsvis[it]){
                return true;
            }
        }
        dfsvis[node] = 0;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int vis[numCourses];
        int dfsvis[numCourses];
        vector<vector<int>> adj(numCourses);
        for (const auto& pair : prerequisites) {
            adj[pair[1]].push_back(pair[0]);
        }
        memset(vis,0,sizeof(vis));
        memset(dfsvis,0,sizeof(dfsvis));
        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(isCycle(i,adj,vis,dfsvis)){
                    return false;
                }
            }
        }
        return true;
    }
};