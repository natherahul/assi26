#include<iostream>
using namespace std;
class Date
{
    private:
        int day,year,month;
    public:
        Date()
        {
            day=1;
            month=1;
            year=2000;
        }
        void setdate(int a,int b,int y)
        {
            day=a;
            month=b;
            year=y;
            while(day>30)
            {
                if(day>30)
                {
                    month++;
                    day=day-30;
                }
            }
            while(month>12)
            {
                if(month>12)
                {
                    month=month-12;
                }
            }
        }
        void showdate()
        {
            cout<<"date="<<day<<"|"<<month<<"|"<<year<<endl;
        }
};
int main()
{
    Date d1;
    d1.setdate(35,16,2003);
    d1.showdate();
}