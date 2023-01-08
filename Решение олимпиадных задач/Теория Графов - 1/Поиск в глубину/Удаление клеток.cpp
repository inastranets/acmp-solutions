#include <bits/stdc++.h>

using namespace std;

int n, m;
char paper[100][100];

bool isValid(int i, int j) {
	return i >= 0 && i < n && j >= 0 && j < m && paper[i][j] == '#';
}

void dfs(int i, int j) {

	paper[i][j] = '.';

	if(isValid(i + 1, j))
		dfs(i + 1, j);
	if(isValid(i - 1, j))
		dfs(i - 1, j);
	if(isValid(i, j + 1))
		dfs(i, j + 1);
	if(isValid(i, j - 1))
		dfs(i, j - 1);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for(int i = 0; i < n; ++ i)
		for(int j = 0; j < m; ++ j)
			cin >> paper[i][j];

	int ans = 0;
	for(int i = 0; i < n; ++ i)
		for(int j = 0; j < m; ++ j)
			if(isValid(i, j))
				dfs(i, j), ++ ans;

	cout << ans;

	return 0;
}
