class Solution {
public:
    bool check(int start, int n, vector<vector<int>>& graph, int color[]) {

        queue<int> q;
        color[start] = 0;
        q.push(start);
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            for (auto it : graph[node]) {
                if (color[it] == -1) {
                    color[it] = !color[node];
                    q.push(it);
                } else if (color[it] == color[node]) {
                    return false;
                }
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        int color[n];
        memset(color, -1, sizeof(color));
        for (int i = 0; i < n; i++) {
            if (color[i] == -1) {
                if (check(i, n, graph, color) == false) {
                    return false;
                }
            }
        }
        return true;
    }
};