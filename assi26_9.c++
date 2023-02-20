#include<iostream>
using namespace std;
class Bill
{
    private:
        int curr_unit,prev_unit,unit;
        float amt;
    public:
        Bill()
        {
            curr_unit=0;
            prev_unit=0;
            amt=0;
            unit=0;
        }
        void getelc(int c_unit,int p_u)
        {
            curr_unit=c_unit;
            prev_unit=p_u;
        }
        void calculateBill()
        {
            unit=curr_unit-prev_unit;
            if(unit<=100)
            {
                
                amt=unit*1.20;
            }
            else if(unit>=100 && unit<=200)
            {
                
                amt=unit*2;
            }
            else
            {
                
                amt=unit*3;
            }
        }
        float bill_amt()
        {
            return amt;
        }
};
int main()
{
    Bill b1;
    b1.getelc(300,150);
    b1.calculateBill();
    cout<<"bill of b1 is "<<b1.bill_amt();

}