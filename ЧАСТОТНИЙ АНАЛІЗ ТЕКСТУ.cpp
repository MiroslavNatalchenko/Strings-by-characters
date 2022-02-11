#include <bits/stdc++.h>

using namespace std;
int cnt_letter(int cnt[],string &text)
{
    int cnt_letters=0;
    for (int i=0; i<text.size(); ++i)
    {
        if (isalpha(text[i]))
        {
            ++cnt[tolower(text[i])-97];
            ++cnt_letters;
        }
    }
    return cnt_letters;
}
int main()
{
    freopen("analiz.in","r",stdin);
    freopen("analiz.out","w",stdout);
    int cnt[100]={0};
    int cnt_letters=0;
    string text;

    while (getline(cin,text))
        cnt_letters+=cnt_letter(cnt,text);

    if (cnt_letters==0)
        cout << -1;
    else for (int i=0; i<26; ++i)
         {
             cout << (char)(i+'A') << ' ' << cnt[i] << '\n';
         }
    return 0;
}
