#include<iostream>

using namespace std;
int N, M;
int arr[8];
void print_num(int cnt)
{
	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	else {
		for (int i = 1; i <= N; i++) {
			arr[cnt] = i;
			print_num(cnt + 1);
		}
	}
}
int main()
{
	cin >> N >> M;
	print_num(0);
}