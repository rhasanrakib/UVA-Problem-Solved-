#include<bits/stdc++.h>
using namespace std;

bool make_prime[101];
vector<int>factors[101];
int num_prime[1001];
void seive()
{
	make_prime[0] = true;
	make_prime[1] = true;

	for (int i = 2; i <= 100; i++)
	{
		if (make_prime[i] == false)
		{
			for (int j = i + i; j <= 100; j += i)
			{
				make_prime[j] = true;
			}
		}
	}
}
void prime_factors()
{
	int mx = -999;
	for (int i = 2; i <= 100; i++)
	{
		for (int j = 2; j <= 100; j++)
		{
			//int n = i;
			int cnt = 0;
			if (make_prime[j])
				continue;
			if (i % j == 0)
			{	int n = i;
				while (n % j == 0)
				{
					n /= j;
					cnt++;

				}

			}
			factors[i].push_back(cnt);

		}

	}
	int cnt = 0;

	for (int i = 0; i <= 100; i++)
	{
		if (make_prime[i])
		{
			num_prime[i] = cnt;
		}
		else
		{
			num_prime[i] = ++cnt;
		}

	}

}
int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	seive();
	prime_factors();
	//cout << num_prime[10] << endl;
	int n;
	while (cin >> n && n)
	{
		vector<int>v;
		int sz = factors[2].size();
		for (int i = 0; i < sz; i++)
		{
			int sum = 0;
			for (int j = 2; j <= n; j++)
			{
				sum += factors[j][i];
			}
			v.push_back(sum);
		}
		int num = num_prime[n];
		printf("%3d! =", n);

		for (int i = 0; i < num; i++)
		{
			if (i == 15)
			{
				printf("\n%9d", v[i]);

			}
			else
				printf("%3d", v[i] );
		}
		cout << endl;
		v.clear();
	}

}