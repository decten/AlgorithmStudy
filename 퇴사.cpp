#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve(int n, vector<pair<int, int>> v) {
	vector<pair<int, int>>::iterator it;
	it = v.begin();
	int tmp[16] = { 0, }; //인덱스는 날짜, 값은 최대값 저장
	int answer = 0;
	for (int i = 1; i <= n; i++) {
		int j = 0;
		if ((it+ j)->first <= n + 1) {
			tmp[(it + j)->first] = max(tmp[(it + j)->first], tmp[it->first] + it->second);
			answer = max(answer, tmp[(it + j)->first]);
		}

		tmp[j + 1] = max(tmp[j + 1], tmp[j]);
		answer = max(answer, tmp[j + 1]);
		j++;
	}
	cout << answer;
}

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	int x, y;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	solve(n,v);
	return 0;
}
