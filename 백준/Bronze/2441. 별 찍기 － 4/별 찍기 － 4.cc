#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    for(int i=N; i>=1; i--) {
        for(int j=1; j<=N-i; j++) cout << " ";
        for(int j=1; j<=i; j++) cout << "*";
        cout << "\n";
    }
}
