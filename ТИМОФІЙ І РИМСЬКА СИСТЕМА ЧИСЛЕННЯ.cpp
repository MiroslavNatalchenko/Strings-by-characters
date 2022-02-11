#include <iostream>
using namespace std;

string translate(int digit)
{
    int pos=0;
    string res;
    while (digit>=1000)
    {
        digit-=1000;
        res.insert(pos,1,'M');
        pos++;
    }
    if (digit>=900)
    {
        digit-=900;
        res.insert(pos,1,'C');
        pos++;
        res.insert(pos,1,'M');
        pos++;
    }
    if (digit>=500)
    {
        digit-=500;
        res.insert(pos,1,'D');
        pos++;
    }
    if (digit>=400)
    {
        digit-=400;
        res.insert(pos,1,'C');
        pos++;
        res.insert(pos,1,'D');
        pos++;
    }
    while (digit>=100)
    {
        digit-=100;
        res.insert(pos,1,'C');
        pos++;
    }
    if (digit>=90)
    {
        digit-=90;
        res.insert(pos,1,'X');
        pos++;
        res.insert(pos,1,'C');
        pos++;
    }
    if (digit>=50)
    {
        digit-=50;
        res.insert(pos,1,'L');
        pos++;
    }
    if (digit>=40)
    {
        digit-=40;
        res.insert(pos,1,'X');
        pos++;
        res.insert(pos,1,'L');
        pos++;
    }
    while (digit>=10)
    {
        digit-=10;
        res.insert(pos,1,'X');
        pos++;
    }
    if (digit>=9)
    {
        digit-=9;
        res.insert(pos,1,'I');
        pos++;
        res.insert(pos,1,'X');
        pos++;
    }
    if (digit>=5)
    {
        digit-=5;
        res.insert(pos,1,'V');
        pos++;
    }
    if (digit>=4)
    {
        digit-=4;
        res.insert(pos,1,'I');
        pos++;
        res.insert(pos,1,'V');
        pos++;
    }
    while (digit>=1)
    {
        digit-=1;
        res.insert(pos,1,'I');
        pos++;
    }
    return res;
}


int main()
{
    int digit;
    cin >> digit;
    cout << translate(digit);
    return 0;
}
