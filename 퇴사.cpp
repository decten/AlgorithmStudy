#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, int>> v;
int n, answer;

void solve(int day, int value) {
	if (day > n)  return;

	answer = max(answer, value);
	for (int i = day; i < v.size(); i++) {
		solve(v[i].first + i, v[i].second + value);
	}
}

int main() {
	cin >> n;

	int x, y;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	solve(0, 0);
	cout << answer;
	return 0;
}
