#include<iostream>
using namespace std;
class Time
{
    private:
        int hr,min,sec;
    public:
        void settime(int x,int y,int z)
        {
            hr=x;
            min=y;
            sec=z;
            while(hr>=12)
            {
                if(hr>12)
                {
                    hr=hr-12;
                }
            }
            while(min>=60)
            {
                if(min>60)
                {
                    
                    min=min-60;
                }

            }
            while(sec>=60)
            {
                if(sec>60)
                {
                    
                    sec=sec-60;
                }
            }
          
        }
        void showtime()
        {
            cout<<"time is= "<<hr<<":"<<min<<":"<<sec<<endl;
        }
        void normalize()
        {

        }
        Time add(Time t)
        {
            t.hr=hr+t.hr;
            t.min=min+t.min;
            t.sec=sec+t.sec;
            if(t.sec>60)
            {
                t.min++;
                t.sec=t.sec-60;
            }
            if(t.min>60)
            {
                t.hr++;
                t.min=t.min-60;
            }
            if(t.hr>12)
            {
                t.hr=t.hr-12;
            }
            return t;
        }
};
int main()
{
    Time t1,t2,t3;
    t1.settime(14,20,65);
    t2.settime(17,25,25);
    t1.showtime();
    t2.showtime();
    t3=t1.add(t2);
    t3.showtime();
}