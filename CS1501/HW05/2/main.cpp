#include "account.h"
#include <iostream>
#include <cmath>
using namespace std;
int SavingAccount::cnt=1;
inline void SavingAccount::display(){
    printf("%d %.2f %.2f\n",index,money,interest);
    printf("%f\n",money);
}
inline void SavingAccount::calculate(){
    money*=1+interest;
}
inline void SavingAccount::changerate(float r){interest=r;}
int main()
{
    // 1st month
    int first_money, second_money;
    cin>>first_money>>second_money;
    SavingAccount first(first_money);
    SavingAccount second(second_money);
    first.display();
    second.display();

    // 2nd month
    float new_rate;
    cin>>new_rate;
    first.calculate();
    first.display();
    second.calculate();
    second.display();
    first.changerate(new_rate);
    second.changerate(new_rate);

    // 3rd month
    int third_money;
    cin>>third_money;
    first.calculate();
    first.display();
    second.calculate();
    second.display();
    SavingAccount * p = new SavingAccount(third_money);

    // 4th month
    first.calculate();
    first.display();
    second.calculate();
    second.display();
    p->calculate();
    p->display();

    delete p;
    return 0;
}
