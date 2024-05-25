#include<iostream>
#include<algorithm>
using namespace std;

int N, K;
int dp[101][100001] = { 0 };;
int W[101];
int V[101];
int main()
{
	
	cin >> N >> K;
	for (int i = 1; i <= N; i++) 
	{
		cin >> W[i] >> V[i];
	}
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= K; j++) 
		{
			if (j - W[i] >= 0)
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - W[i]] + V[i]);
			else
				dp[i][j] = dp[i - 1][j];
		}
	}
	cout << dp[N][K];
}
