#include <bits/stdc++.h>
#define int long long
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second) return a.second < b.second;
    else return a.first < b.first;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> v(N);
    for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), cmp);

    int ans = 0, time = 0;
    for(int i=0; i<N; i++) {
        if(v[i].first >= time) {
            ans++;
            time = v[i].second;
        }
    }

    cout << ans << "\n";
}
