#include <bits/stdc++.h>


using namespace std;

bool check_palindrom(string & S)
{
   int j=S.size()/2,i;
   for (int i=0; i<j; ++i)
   {
       if (S[i]!=S[S.size()-1-i])
           return false;
       if (S[i]<'0' || S[i] > '9'|| S[S.size()-1-i]<'0' || S[S.size()-1-i] > '9')
           return false;
   }
   return true;
}

int main()
{
    string text;
    int cnt=0;
    while (cin >> text)
    {
        if (check_palindrom(text))
        {
           cout << text << '\n';
           ++cnt;
        }
    }
    if (cnt==0)
        cout << "The notepad is clean.";
    return 0;
}
