#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <cstring>

using namespace std;
int N,M,V;
int adj[1010][1010];
bool chk[1010];

void bfs(int start) {

	queue<int> q;

	q.push(start);
	chk[start] = 1;

	while (q.size()) {
		int cur = q.front();
		q.pop();
		cout << cur << ' ';
		

		for (int i = 1; i <= N; ++i) {
			if ( adj[cur][i] && !chk[i]) {
				chk[i] = 1;
				q.push(i);
			}
		}
	}
}

void dfs(int start) {
	if (chk[start]) return;
	chk[start] = 1;
	cout << start << ' ';

	for (int i = 1; i <= N; ++i) {
		if (adj[start][i] && !chk[i]) dfs(i);
	}
}

int main(){
	int x,y;
	cin >> N >> M >> V;
	for(int i = 0; i < M; i++){
		cin >> x >> y;
		adj[x][y] = 1;
		adj[y][x] = 1;
	}
	dfs(V);
	cout << '\n';
	memset(chk, 0, sizeof(chk));
	bfs(V);
	cout << '\n';
	return 0;
}