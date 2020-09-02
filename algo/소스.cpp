#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    priority_queue<int, vector<int>, greater<int>> pq;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        switch (x) {
        case 0:
            if (pq.empty()) cout << "0" << endl;
            else {
                cout << pq.top() << endl;
                pq.pop();
            }
        default:
            pq.push(x);
        }
    }
    return 0;
}