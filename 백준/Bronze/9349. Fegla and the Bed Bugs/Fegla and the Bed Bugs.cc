#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, K; cin >> N >> K;

        cout << (N-1)/(K-1) -1 << "\n";
    }
}
