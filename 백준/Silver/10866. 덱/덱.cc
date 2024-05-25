#include<iostream>
#include<deque>
using namespace std;

int main()
{
	int N;
	cin >> N;
	string s;
	int num;
	deque<int> dq;
	while (N--)
	{
		cin >> s;
		if (s == "push_back") {
			cin >> num;
			dq.push_back(num);
		}
		else if (s == "push_front") {
			cin >> num;
			dq.push_front(num);
		}
		else if (s == "pop_front") {
			if (dq.empty())
				cout << -1<<"\n";
			else {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}
		else if (s == "pop_back") {
			if (dq.empty())
				cout << -1<<"\n";
			else {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}
		else if (s == "size") {
			cout << dq.size() << "\n";
		}
		else if (s == "empty") {
			if (dq.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (s == "front") {
			if (dq.empty())
				cout << -1 << "\n";
			else
				cout << dq.front() << "\n";
		}
		else if (s == "back") {
			if (dq.empty())
				cout << -1 << "\n";
			else
				cout << dq.back() << "\n";
		}
	}
}