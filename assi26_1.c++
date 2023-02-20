#include<iostream>
using namespace std;
class complex 
{
    int real ,imag;
    public:
        void setdata(int x,int y)
        {
            real=x;
            imag=y;

        }
        void showdata()
        {
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
        void addcomplex(complex c)
        {
            cout<<real+c.real<<"+"<<imag+c.imag<<"i"<<endl;
        }
};
int main()
{
    int a,b;
    complex c1,c2;
    c1.setdata(5,7);
    c2.setdata(8,3);
    c1.showdata();
    c2.showdata();
    c1.addcomplex(c2);
}