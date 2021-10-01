#include <iostream>
using  namespace std;
int main()
{
    char c; cin>>c;
    int a,b; cin>>a>>b;
    switch(c){
        case 'c':{
            if(b-a<=3) cout<<(b-a)*5<<endl;
            else cout<<15+10*((b-a)-3)<<endl;
        }
        case 'b':{
            if((b-a)<=2) cout<<(b-a)*10<<endl;
            else cout<<20+15*((b-a)-2)<<endl;
        }
        case 't':{
            if((b-a)<=1) cout<<(b-a)*10<<endl;
            else cout<<10+15*((b-a)-1)<<endl;
        }
    }
    return 0;
}