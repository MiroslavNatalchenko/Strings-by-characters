#include <iostream>

using namespace std;

bool check(string date)
{
    int year,month,day;
    day=(date[9]-'0')*10 + (date[8]-'0');
    month=(date[7]-'0')*10 + (date[6]-'0');
    year=(date[4]-'0')*1000 + (date[3]-'0')*100 + (date[1]-'0')*10 + (date[0]-'0');
    if (month > 12 || day > 31)
        return false;
    if ((month==4 || month==6 || month==9 ||month==11) && (day > 30))
        return false;
    if ((month == 2) && (day>28) && (year%4!=0 || (year%100==0 && year%400!=0)))
        return false;
    return true;
}


int main()
{
    string date;
    int N;
    cin >> N;
    for (int i=1; i<=N; ++i)
    {
       cin >> date;
       if (check(date))
           cout << "YES" << '\n';
       else
           cout << "NO" << '\n';
    }
    return 0;
}
