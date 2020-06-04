#include<bits/stdc++.h>
using namespace std;

bool comp(char a, char b)
{
	if (tolower(a) == tolower(b)) {
		return a < b;
	}
	return tolower(a) < tolower(b);
}

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int cases, n;
	cin >> cases;
	while (cases--)
	{
		string s;
		cin >> s;
		sort(s.begin(), s.end(), comp);
		std::vector<string> v;
		do
		{
			cout << s << endl;
			//v.push_back(s);
		}
		while (next_permutation(s.begin(), s.end(), comp));
	}

	return 0;
}