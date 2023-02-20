#include<iostream>
using namespace std;
class Cube
{
    private:
        int l,b,h,cube;
    public:
        Cube()
        {
            l=0;
            b=0;
            h=0;
            cube=0;
        }
        void setvalue(int x,int y,int z)
        {
            l=x;
            b=y;
            h=z;
        }
        void findVcube()
        {
            cube=l*b*h;
        }
        int getvolume()
        {
            return cube;
        }

};
int main()
{
    Cube c1;
    c1.setvalue(3,4,5);
    c1.findVcube();
    cout<<"volume of cube is "<<c1.getvolume()<<endl;
}