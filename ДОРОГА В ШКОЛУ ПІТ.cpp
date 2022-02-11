#include <iostream>

using namespace std;

string answer(string S)
{
    if (S[0]==')')
        return "ERROR";
    for (int i=0;i<S.size()-1;i++)
        if (S[i]==S[i-1])
            return "ERROR";
    if (S[S.size()-1]=='(')
          return "INSIDE";
    return "OUTSIDE";
}

int main()
{
    string S;
    getline(cin,S);
    cout << answer(S);
    return 0;
}
