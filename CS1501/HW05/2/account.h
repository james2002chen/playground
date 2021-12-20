#ifndef account_h
#define account_h
class SavingAccount{
    private:

        int index;
        float money,interest;
        float precision(float f);
    public:  
        static int cnt;
        SavingAccount(int m){money=(double)m,interest=0.05,index=cnt,cnt++;}
        void display();
        void calculate();
        void changerate(float r);
};
#endif