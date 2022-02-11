#include <bits/stdc++.h>
using namespace std;

void inp_mas(string codes[],int N)
{
    for (int i=0;i<N;i++)
        cin >> codes[i];
}
void out_mas(int mas[],int N)
{
    for (int i=0;i<N;i++)
        cout << mas[i];
}
bool check(string code,string S,int j)
{
    for (int i=0;i<10;i++)
    {
        if (code[i]!=S[i+j*10])
            return false;
    }
    return true;
}
int main()
{
    int password[8],N=0;
    string S,codes[10];
    cin >> S;
    inp_mas(codes,10);
    for(int j=0;j<8;++j)
    {
        int decoder=10;
        for(int i=0;i<10;++i)
            if (check(codes[i],S,j))
                decoder=i;

        if(decoder!=10)
        {
            N++;
            password[j]=decoder;
        }
    }
    if(N==8)
        out_mas(password,N);
    else
        cout << -1;
    return 0;
}
