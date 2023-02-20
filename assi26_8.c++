#include<iostream>
using namespace std;
class Bank
{
    private:
        int prin,year;
        float roi,SI;
    public:
        Bank(int p,float r,int y)
        {
            prin=p;
            roi=r;
            year=y;
            SI=0;
        }
        void simpint()
        {
            SI=prin*roi*year;
        }
        float getSI()
        {
            return SI;
        }
};
int main()
{
    Bank b1(5,3.1,5),b2(2,0.3,6);
    b1.simpint();
    cout<<"simple interst is "<<b1.getSI()<<endl;
    b2.simpint();
    cout<<"simple interst is "<<b2.getSI()<<endl;

}