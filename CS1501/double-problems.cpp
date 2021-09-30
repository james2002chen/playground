//File: debug02_02.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int quantity, yuan, jiao;
    double charge;

    cout << "请输入本月用电量（单位：度）：";
    cin >> quantity;

    charge = 0.6 * quantity;
    cout << "本月需要支付电费：" << charge << "元" << endl;

    //cout << endl;
    //cout << "charge = " << setprecision(17) << charge << endl;

    yuan = charge;

    //cout << endl;
    //cout << "(charge - yuan) * 10 = " << (charge - yuan) * 10 << endl;

    jiao = (charge - yuan) * 10;
    cout << (charge - yuan)<<endl;
    cout << (charge - yuan) * 10<<endl;
    cout << (int)((charge - yuan) * 10)<<endl;
    cout << (int)((charge-1)*10)<<endl;
    cout<<endl;
    cout << setprecision(3)<<1.234 <<endl;
    cout<<endl;
    cout << setprecision(20)<<charge <<endl;
    cout << setprecision(20)<<3*0.6 <<endl;
    cout << setprecision(20)<<3*0.6 <<endl;
    cout << setprecision(20)<<1.8 <<endl;
    cout<< (charge==1.8)<<endl;
    cout << jiao << endl;
    cout << endl;
    cout << "共需要" << yuan << "个1元和" << jiao << "个1角的硬币" << endl;

    return 0;
}