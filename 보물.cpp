#include <iostream>
#include <algorithm>

using namespace std;

bool desc(int a, int b) {
    return a > b;
}

int main() {
    int n;
    cin >> n;

    int a[50];
    int b[50];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(a, a + n, desc);
    sort(b, b + n);

    int answer = 0;
    for (int i = 0; i < n; i++) answer += a[i] * b[i];
    cout << answer;

    return 0;
}