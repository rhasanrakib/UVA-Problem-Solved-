#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

int string_to_int(string s)
{
	ll num = 0;
	for (int i = 0; i < s.length(); i++)
	{

		num *= 10;
		num += (s[i] - '0');
		//cout << num << endl;
	}
	return num;
}

int main() {

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	//string ss;
	int n, m;
	while (cin >> n >> m && n && m)
	{
		//cin.ignore();
		//cout << ss << endl;
		/*stringstream s(ss);
		string number;
		int arr[5];
		int k = 0;
		while (s >> number)
		{
			arr[k++] = string_to_int(number);
			//cout << number << endl;
		}
		//cout << arr[0] << " " << arr[1] << endl;
		int n = arr[0];
		int m = arr[1];*/
		//if (n == 0 && m == 0) break;
		int c = n - m;
		int x, y;
		if (c < m)
		{
			x = m;
			y = c;
			//swap(c, m);
		}
		else
		{
			x = c;
			y = m;
		}
		vector<int>u;
		vector<int>v;
		for (int i = x + 1; i <= n; i++)
		{
			u.push_back(i);
		}

		for (int i = 1; i <= y; i++)
		{
			v.push_back(i);
		}
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] == -1) continue;
			for (int j = 0; j < u.size(); j++)
			{
				if (u[j] % v[i] == 0)
				{
					u[j] = u[j] / v[i];
					v[i] = -1;
					break;
				}
			}
		}
		ll up = 1;
		ll down = 1;
		for (int i = 0; i < u.size(); i++)
		{
			up *= u[i];
		}
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] == -1) continue;
			down *= v[i];
		}
		ll ans = up / down;
		printf("%d things taken %d at a time is %llu exactly.\n", n, m, ans);
		//ss.clear();
	}

	return 0;
}
