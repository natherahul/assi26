#include<iostream>
using namespace std;
class Student
{
    private:
        int roll_no,std;
        float perc;
        char name[20];
    public:
        Student(int r,int s,float p,char c[20])
        {
            int i;
            roll_no=r;
            std=s;
            perc=p;
            for(i=0;c[i]!='\0';i++)
            {
                name[i]=c[i];
            }
            name[i]='\0';
        }
        void display()
        {
            cout<<endl<<roll_no<<"|"<<std<<"|"<<perc<<"|"<<name<<endl;
        }
};
int main()
{
    Student s(1,14,70.25,"rahul"),s1(2,12,90.00,"jivan");
    s.display();
    s1.display();

}