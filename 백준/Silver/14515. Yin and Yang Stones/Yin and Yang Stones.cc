#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int cnt = 0;
    for(int i=0; i<str.length(); i++)
        if(str[i] == 'B') cnt++;

    if(cnt == str.length() - cnt) cout << 1 << "\n";
    else cout << 0 << "\n";
}
