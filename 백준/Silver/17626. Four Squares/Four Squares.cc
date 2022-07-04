#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int dp[50001] = {0, 1, 2, 3, 1};
    for(int i=5; i<=50000; i++) {
        dp[i] = INT_MAX;
        for(int j=1; j*j<=i; j++)
            dp[i] = min(dp[i], dp[i - j*j] + 1);
    }

    int N; cin >> N;

    cout << dp[N] << "\n";
}
