//uninary operator overloading
#include<iostream>
using namespace std;

class Square
{
    private:
    //a=side of the square
    int a;
    public:
    Square(int side)
    {
        a=side;
    
    }
    double area()
    {
        return a*a;
    }
    //doing uniary operstion;
    Square operator--()
    {
        --a;
    }
    void display()
    {
        cout<<a<<endl;
    }
};
int main()
{
    Square obj=20;
    cout<<obj.area()<<endl;
    --obj;
    cout<<obj.area();
    
    
}
