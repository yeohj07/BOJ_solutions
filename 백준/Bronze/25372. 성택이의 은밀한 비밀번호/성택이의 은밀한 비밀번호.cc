#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        if(str.length() >= 6 && str.length() <= 9) cout << "yes\n";
        else cout << "no\n";
    }
}
