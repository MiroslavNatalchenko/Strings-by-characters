#include <bits/stdc++.h>
using namespace std;

bool check_in(string shyfr)
{
    int pos;
    while(!shyfr.empty())
    {
        bool check=true;
        pos=shyfr.find("~@");
        if (pos!=-1)
        {
            shyfr.erase(pos,2);
            check=false;
        }
        pos=shyfr.find("#$");
        if (pos!=-1)
        {
            shyfr.erase(pos,2);
            check=false;
        }
        pos=shyfr.find("%&");
        if (pos!=-1)
        {
            shyfr.erase(pos,2);
            check=false;
        }
        if (check) return false;
    }
    return true;
}

int main()
{
    string shyfr;
    while(cin>>shyfr)
        if (check_in(shyfr))
            cout << "OK" << '\n';
        else
            cout << "WRONG" << '\n';
    return 0;
}
