#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int dp[5001] = {1, 1};
    for(int i=2; i<=5000; i++)
        for(int j=0; j<i; j++) dp[i] = (dp[i] + dp[j] * dp[i-1-j]) % 987654321;

    int N; cin >> N;

    cout << dp[N/2] << "\n";
}
