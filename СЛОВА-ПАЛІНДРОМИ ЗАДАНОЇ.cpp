#include <bits/stdc++.h>

using namespace std;

bool check_palindrom(string & S)
{
   int j=S.size()/2,i;
   for (int i=0; i<j; ++i)
   {
       if (tolower(S[i])!=tolower(S[S.size()-1-i]))
           return false;
   }
   return true;
}

int main()
{
    freopen("palindrom.in","r",stdin);
    freopen("palindrom.out","w",stdout);
    string text;
    int cnt=0,N=0;
    cin >> N;
    if (N==0)
        cout << "NULL";
    else
    {
       while (cin >> text)
       {
          if (check_palindrom(text) && text.size()==N)
          {
              cout << text << '\n';
              ++cnt;
          }
       }
       if (cnt==0)
          cout << "-1";
    }
    return 0;
}
