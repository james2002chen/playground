#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main(){
    int **q;
    int x=10;
    int *p=&x;
    q=&p;
    cout<<p<<" "<<q<<endl;
    cout<<*p<<" "<<*q<<endl;
    cout<<**q<<endl;
    cout<<"a"<<endl<<"b"<<endl;
    char a[]={'a','b','c'};
    cout<<a<<endl;
    cout<<strlen(a)<<endl;
    strcpy(a, "abcde");
    cout<<a<<endl;
    return 0;
}