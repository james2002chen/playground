//
//  main.cpp
//  chap4_Collatz
//
//  Created by 魏思哲 on 2021/10/12.
//  Copyright © 2021 SizheWei. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    long long int n(0);
    cin >> n;
//    for loop, your code below:
    while(n!=1){
        if(n%2==0) n/=2,cout<<n<<" ";
        else n=n*3+1,cout<<n<<" ";
    }
    return 0;
}
