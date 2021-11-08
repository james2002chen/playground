#include <iostream>
#include <string.h>
using namespace std;
bool isLeapYear(int year){
    if(year%4!=0) return false;
    else if(year%100!=0) return true;
    else if(year%400!=0) return false;
    else return true;
}
int getDate(int year,int month){
    switch(month){
        case 1: return 31;
        case 2: 
            if(isLeapYear(year)) return 29;
            else return 28;
        case 3: return 31;
        case 4: return 30;
        case 5: return 31;
        case 6: return 30;
        case 7: return 31;
        case 8: return 31;
        case 9: return 30;
        case 10: return 31;
        case 11: return 30;
        case 12: return 31;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int year=1900;
    int month=1;
    int dateSum=13;
    int week[7];
    memset(week,0,sizeof(week));
    while(true){
        week[dateSum%7]++;
        dateSum+=getDate(year,month);
        month++;
        if(month>12){
            month-=12;
            year++;
        }
        if(year>1900+n-1) break;
    }
    for(int i=1;i<=6;i++) cout<<week[i]<<" ";
    cout<<week[0]<<endl;
    return 0;
}