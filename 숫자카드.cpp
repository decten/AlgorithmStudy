#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int n, m, x;
vector<int> v;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        if (binary_search(v.begin(), v.end(), x))
            printf("1 ");
        else
            printf("0 ");
    }
    return 0;
}