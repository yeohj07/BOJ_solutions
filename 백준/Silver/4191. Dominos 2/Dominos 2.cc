#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;

void f(int x) {
    vis[x] = true;

    for(int i=0; i<adj[x].size(); i++) {
        int y = adj[x][i];

        if(!vis[y]) f(y);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M, K; cin >> N >> M >> K;

        adj.clear();
        adj.resize(N+1);

        while(M--) {
            int a, b; cin >> a >> b;

            adj[a].push_back(b);
        }

        vis.clear();
        vis.resize(N+1);

        while(K--) {
            int x; cin >> x;

            if(!vis[x]) f(x);
        }

        int ans = 0;
        for(int i=1; i<=N; i++)
            if(vis[i]) ans++;

        cout << ans << "\n";
    }
}
