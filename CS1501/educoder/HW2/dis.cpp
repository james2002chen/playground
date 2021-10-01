#include <iostream>
#include <math.h>
using  namespace std;
double a,b;
bool dis(double c,double d){
    return sqrt((a-c)*(a-c)+(b-d)*(b-d))<=1;
}
int main()
{
    if(dis(2,2)||dis(2,-2)||dis(-2,2)||dis(-2,-2)) cout<<10<<endl;
    else cout<<0<<endl;
    return 0;
}