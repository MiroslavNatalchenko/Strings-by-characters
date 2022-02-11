#include<bits/stdc++.h>

using namespace std;

int translate(char rym)
{
    if (rym=='I')
        return 1;
    if (rym=='V')
        return 5;
    if (rym=='X')
        return 10;
    if (rym=='L')
        return 50;
    if (rym=='C')
        return 100;
    if (rym=='D')
        return 500;
    return 1000;
}

int main()
{
    string rym_S;
    cin >> rym_S;
    int res=translate(rym_S[rym_S.size()-1]);
    for (int i=rym_S.size()-2;i>=0;i--)
        if (translate(rym_S[i])<translate(rym_S[i+1]))
            res=res-translate(rym_S[i]);
        else
            res=res+translate(rym_S[i]);
    cout << res;
    return 0;
}
