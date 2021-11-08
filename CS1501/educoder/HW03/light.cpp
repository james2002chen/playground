#include <iostream>
using namespace std;
bool grid[7][7],opt[7][7];
void flip(int i,int j){
    opt[i][j]=!opt[i][j];
    opt[i+1][j]=!opt[i+1][j];
    opt[i-1][j]=!opt[i-1][j];
    opt[i][j+1]=!opt[i][j+1];
    opt[i][j]=!opt[i][j];
}
void printout(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++) cout<<opt[i][j]<<" ";
        cout<<endl;
    }
}
int main()
{
    for(int i=1;i<=5;i++)
        for(int j=1;j<=5;j++) cin>>grid[i][j];
    int minn=26;
    for(int i=0;i<=31;i++){
        for(int j=1;j<=5;j++)
            for(int k=1;k<=5;k++) opt[j][k]=grid[j][k];
        cout<<"initial"<<endl;
        printout();
        int step=0;
        for(int j=1;j<=5;j++){
            if((i>>(j-1))&1){
                step++;
                flip(1,j);
            }
        }
        cout<<"step 1"<<endl;
        printout();
        for(int j=2;j<=5;j++)
            for(int k=1;k<=5;k++)
            {
                if(!opt[j-1][k]){
                    step++;
                    flip(j,k);
                }
            }
        if(step<minn) minn=step;
    }
    cout<<minn<<endl;
    return 0;
}