#include<iostream>
using namespace std;
class circle{
    float r,area,circumference;
    public:
    void get();
    void display();
};
void circle::get(){
    cout<<"Enter the radius:";
    cin>>r;
    area=3.14*r*r;
    circumference=2*3.14*r;


}
void circle::display(){
    cout<<"area:"<<area<<endl;
    cout<<"circumference:"<<circumference<<endl ;
}

int main(){
   circle c;
   c.get();
   c.display();

return 0;}