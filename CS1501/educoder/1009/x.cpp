#include <iostream>
using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    bool chk=0;
    for(long long i=a;i<=b;i++){
        if(i>100000) break;
        long long j=i,c=0;
        while(j>0){
            c+=(j%10)*(j%10)*(j%10);
            j/=10;
        }
        if(c==i) cout<<i<<" ",chk=1;
    }
    if(!chk) cout<<"no";
    return 0;
}
