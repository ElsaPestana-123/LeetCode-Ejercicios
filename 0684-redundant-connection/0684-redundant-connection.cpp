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

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {

        DSU d(edges.size()+1);

        for(int i = 0; i < edges.size(); i++){
            int raiz_u = d.find(edges[i][0]);
            int raiz_v = d.find(edges[i][1]);

            if(raiz_u != raiz_v){
                d.unir(raiz_u, raiz_v);
            } else {
                return edges[i];
            }
            
        }

        return {};
 
    }
};