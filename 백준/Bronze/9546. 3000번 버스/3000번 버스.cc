#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        cout << (int)pow(2, n)-1 << "\n";
    }
}
