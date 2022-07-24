#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int l = 0, r = 1e4, ans = 1e4;

    while(l <= r) {
        int m = (l + r)/2;

        int cnt = 1, Min = 1e4, Max = 0;
        for(int i=0; i<N; i++) {
            Min = min(Min, v[i]);
            Max = max(Max, v[i]);

            if(Max - Min > m) {
                cnt++;

                Min = v[i];
                Max = v[i];
            }
        }

        if(cnt <= M) {
            ans = min(ans, m);
            r = m - 1;
        }
        else l = m + 1;
    }

    cout << ans << "\n";
}
