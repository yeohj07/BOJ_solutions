#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 1;

    for(int i=1; i<=N; i+=2) ans = (ans * i) % (int)(1e9 + 7);

    cout << ans << "\n";
}
