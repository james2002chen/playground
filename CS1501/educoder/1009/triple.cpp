#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    bool chk=0;
    for(int i=a;i<=b;i++){
        int j=i,c=0;
        while(j>0){
            c+=(j%10)*(j%10)*(j%10);
            j/=10;
        }
        if(c==i) cout<<i<<" ",chk=1;
    }
    if(!chk) cout<<"no"<<endl;
    else cout<<endl;
    return 0;
}
