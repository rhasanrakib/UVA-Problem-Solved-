#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll string_to_int(string s)
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

string int_to_string(ll num)
{
	string s = "";
	while (num > 0)
	{
		s += (num % 10) + '0';
		num /= 10;
		//cout << num << endl;
	}
	reverse(s.begin(), s.end());
	return s;
}

bool comp(char a, char b)
{
	if (a > b) return true;
	return false;
}
int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int cases, n;
	string s;
	while (cin >> s && s[0] != '0')
	{
		map<string, bool>mp;
		int ln = 0;
		cout << "Original number was " << s << endl;
		while (true)
		{

			sort(s.begin(), s.end());
			string mn = s;
			sort(s.begin(), s.end(), comp);
			string mx = s;
			ll first = string_to_int(mx) ;
			ll second = string_to_int(mn);
			ll sub = first - second;
			string ans = int_to_string(sub);
			cout << first << " - " << second << " = " << sub << endl;
			if (mp.find(ans) != mp.end())
			{
				ln++;
				break;
			}
			mp[ans] = true;
			s = ans;
			ln++;

		}
		cout << "Chain length " << ln << endl << endl;;

	}

	return 0;
}