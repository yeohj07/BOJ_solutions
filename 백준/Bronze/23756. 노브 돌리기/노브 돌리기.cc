#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int a; cin >> a;

    int ans = 0;

    while(N--) {
        int x; cin >> x;

        ans += min(abs(a - x), min(abs(a + 360 - x), abs(a - (x + 360))));

        a = x;
    }

    cout << ans << "\n";
}
