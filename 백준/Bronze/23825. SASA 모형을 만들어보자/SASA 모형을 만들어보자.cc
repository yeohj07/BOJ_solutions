#include <cstdio>
using namespace std;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a < b) printf("%d", a/2);
    else printf("%d", b/2);
}
