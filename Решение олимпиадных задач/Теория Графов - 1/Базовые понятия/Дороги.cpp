#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n; 
	cin >> n;
	int sum = 0;
	for(int i = 0; i < n * n; ++ i)
	{
		bool x;
		cin >> x;
		sum += x;
	}               
 	
	cout << sum / 2;

	return 0;
}
