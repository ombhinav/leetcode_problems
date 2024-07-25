class Solution {
public:

    void bfs(int row, int col, vector<vector<int>>& vis, vector<vector<char>>& grid){
        int n = grid.size();
        int m = grid[0].size();
        vis[row][col] = 1;
        queue<pair<int,int>> q;
        q.push({row,col});
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            vector<pair<int,int>> directions = {{-1,0},{1,0},{0,-1}, {0,1}};
            //now traversing in all the directions, not including diagonals(according to ques);
            
            for(auto it: directions){
                    int nrow = row + it.first;
                    int ncol = col + it.second;
                    if(nrow >= 0 && nrow<n && ncol >= 0 && ncol<m && grid[nrow][ncol] == '1' && !vis[nrow][ncol]){
                        vis[nrow][ncol] = 1;
                        q.push({nrow,ncol});
                    }
                }
            }
        }

    

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n,vector<int>(m,0));
        int cnt = 0;
        for(int row = 0;row <n;row++){
            for(int col = 0; col < m;col++){
                if(!vis[row][col] && grid[row][col] == '1'){
                    cnt++;
                    bfs(row,col,vis,grid);
                }
            }
        }

        return cnt;
    }
};