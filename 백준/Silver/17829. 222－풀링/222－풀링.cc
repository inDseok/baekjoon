#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int arr[1025][1025];
int pulling(int x, int y) 
{
	vector<int> v;
	for (int i = x; i < x + 2; i++) {
		for (int j = y; j < y+2; j++) {
			v.push_back(arr[i][j]);
		}
	}
	sort(v.begin(), v.end());
	return v[2];
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	while (n > 1) {
		for (int i = 0; i < n; i += 2) {
			for (int j = 0; j < n; j += 2) {
				arr[i/2][j/2]=pulling(i,j);
			}
		}
		n /= 2;
	}
	cout << arr[0][0];
}