//File: debug04_03
# include <iostream>
# include <iomanip>
using namespace std;

const double EPS = 1E-6; // precision

int main()
{
    int i, n, item;
    double e;
    
    e = 1;
    n = 1;
    item = 1;
    do
    {
        item *= n;   
        e += 1.0 / item;
        n++;
            
    }while(1.0/item >= EPS);
    
    cout << "e = " << fixed << setprecision(6) << e << endl;
    
    return 0;
}
