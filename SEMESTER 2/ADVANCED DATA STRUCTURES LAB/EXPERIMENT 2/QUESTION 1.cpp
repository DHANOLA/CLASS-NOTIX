#include<iostream>
using namespace std;

class factorial
{
        private:
                        int no,n1,f=1;
        public:
                void input();
                int fact(int &no);
                void display();
};

void factorial::input()
{
        cout<<"\nEnter any number :: ";
        cin>>no;
}

int factorial::fact(int &no)
{
        n1=no;
        if(n==0||n==1)
        cout<<"\nFactorial of Number [ "<<no<<" ] is :: 1\n";
        else
        {
                while(no>0)
                {
                        f=f*no;
                        no--;
                }
        }
return 0;
}

void factorial::display()
{
                cout<<"\nFactorial of [ "<<n1<<" ] is :: "<<f<<"\n";
}

int main ()
{
        factorial f;
        f.input();
        f.fact(int &no);
        f.display();

        return 0;
}
