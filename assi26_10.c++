#include<iostream>
using namespace std;
class StaticCount
{
    private:
        static int a;
    public:
        void stat()
        {
            a++;
        }
        void print()
        {
            cout<<a<<endl;
        }
};
int StaticCount::a=0;
int main()
{
    StaticCount c;
    c.stat();
    c.stat();
    c.stat();
    c.print();
}