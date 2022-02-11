#include <bits/stdc++.h>

using namespace std;
long long sum(string S)
{
    long long res=0;
    for (int i=0;i<S.size();i++)
        res+=S[i]-'0';
    return res;
}
int main()
{
    string win;
    int N;
    cin >> N;
    for (int i=0;i<N;i++)
    {
        cin >> win;
        if (sum(win)%3==0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}
