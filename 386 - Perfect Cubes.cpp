#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	for (int i = 6; i <= 200; i++)
	{
		int cube = i * i * i;
		bool arr[201];
		memset(arr, false, sizeof(arr));
		for (int j = 2; j <= i; j++)
		{
			for (int k = 2; k <= i; k++)
			{
				for (int l = 2; l <= i; l++)
				{
					if (j == k || j == l || l == k) continue;
					int cubeJ = j * j * j;
					int cubeK = k * k * k;
					int cubeL = l * l * l;

					if (cubeJ + cubeK + cubeL == cube)
					{
						if (!arr[j] || !arr[k] || !arr[l])
						{
							printf("Cube = %d, Triple = (%d,%d,%d)\n", i, j, k, l);
							arr[j] = true;
							arr[k] = true;
							arr[l] = true;

						}
					}
				}
			}
		}
	}

	return 0;
}
