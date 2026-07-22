#include<iostream>
using namespace std;
void update(int &a){
    a++;
}
int main(){
    int x = 5;
    cout << "Before update: " << x << endl;
    update(x);
    cout << "After update: " << x << endl;
    return 0;
}