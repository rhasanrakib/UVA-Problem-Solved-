#include<bits/stdc++.h>
using namespace std;

int parent[5000 + 1];

int find_parent(int x)
{
    if (parent[x] == x)
        return x;
    return parent[x] = find_parent(parent[x]);
}

void make_relation(int x, int y)
{
    int a = find_parent(x);
    int b = find_parent(y);

    if (a != b)
        parent[a] = b;
}

void make_parent(int range)
{
    for (int i = 1; i <= range; i++)
        parent[i] = i;
}
int main()
{
    int C, R;
    while (cin >> C >> R && (C || R))
    {
        make_parent(C);
        int arr[C + 1];
        memset(arr, 0, sizeof(arr));
        map<string, int>mp;
        int T = C;
        int serial = 1;
        while (T--)
        {
            string ss;
            cin >> ss;
            if (mp.find(ss) != mp.end())
            {
                continue;
            }
            else
            {
                mp[ss] = serial;
                serial++;
            }
        }
        while (R--)
        {
            string s, ss;
            cin >> s >> ss;
            make_relation(mp[s], mp[ss]);
        }
        int mx = -9999;
        for (int i = 1; i <= C; i++)
        {
            arr[find_parent(i)]++;

        }
        for (int i = 1; i <= C; i++)
        {
            mx = max(mx, arr[i]);
        }
        cout << mx << endl;

    }
    return 0;
}
