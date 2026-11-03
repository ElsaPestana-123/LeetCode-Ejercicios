class Solution {
public:
    struct DSU { 
        vector<int> p, sz; 
        DSU(int n) : p(n), sz(n, 1) { 
            iota(p.begin(), p.end(), 0);
        } 
        int find(int x) { 
            return p[x] == x ? x : p[x] = find(p[x]); 
        } 
        bool unir(int a, int b) { 
            a = find(a); 
            b = find(b); 
            if (a == b) return false; 
            if (sz[a] < sz[b]) 
                swap(a, b); 
                p[b] = a; 
               sz[a] += sz[b]; 
                return true;
        } 
    };

    int countIslas(vector<vector<char>>& grid){

        int suma = 0;

        for(int i = 0; i < grid.size(); i++){
            suma += count(grid[i].begin(), grid[i].end(), '1');
        }

        return suma;

    }

    int numIslands(vector<vector<char>>& grid) {

        long long total = (grid.size() * grid[0].size());

        DSU d(total);

        int total_islas = countIslas(grid);

        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                int C = grid[i].size();
                if(grid[i][j] == '1'){
                    if(j + 1 < C && grid[i][j+1] == '1'){
                        int id1 = (i * C) + j;
                        int id2 = (i * C) + (j+1);

                        if(d.unir(id1, id2)){
                            total_islas--;
                        }
                    }

                    if(i + 1 < grid.size() && grid[i+1][j] == '1'){
                        int id1 = (i * C) + j;
                        int id3 = ((i+1)*C) + j;

                        if(d.unir(id1, id3)){
                            total_islas--;
                        }
                    }
                    
                }
            }
        }

        return total_islas;
        
    }
};