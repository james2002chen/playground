#include <iostream>
#include <string.h>
using namespace std;
bool ifLeapYear(int year){
    if(year%4!=0) return false;
    else if(year%100!=0) return true;
    else if(year%400!=0) return false;
    else return true;
}
int getDate(int year,int month);
int main()
{
    int n;
    cin>>n;
    int year=1900;
    int month=1;
    int dateSum=0;
    int week[8];
    memset(week,0,sizeof(week));
    while(true){
        dateSum+=getDate(year,month);
        
    }
    return 0;
}