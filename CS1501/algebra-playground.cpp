#include <iostream>
#include <ostream>
using namespace std;
int main(){
    int i=0;
    cout<<i++<<endl;
    //0
    i=0;
    cout<<++i<<endl;
    //1
    i=0;
    int s=0;
    s+=i++;cout<<s<<endl;
    //0
    s=0,i=0;
    s+=++i;cout<<s<<endl;
    //1
    cout<<endl;

    double a,b,c,d;
    cout<<2/3<<endl;
    //0
    cout<<2.0/3<<endl;
    //0.666667
    cout<<2/3.0<<endl;
    //0.666667
    i=2,s=3;
    cout<<i/s<<endl;
    //0
    cout<<(double)i/s<<endl;
    //0.666667
    cout<<i/(double)s<<endl;
    //0.666667
    cout<<(double)(i/s)<<endl;
    //0
    cout<<endl;

    a=2.0,b=1.0;
    cout<<a-b<<endl;
    //1
    cout<<a+b<<endl;
    //3
    a=2.0/3;
    b=2.0/3;
    cout<<a-b<<endl;
    //0
    cout<<a+b<<endl;
    //1.33333
    
    return 0;
}