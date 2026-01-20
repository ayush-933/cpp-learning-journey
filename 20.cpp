#include<iostream>
using namespace std;
class restourent{
    private:
      int rating;
    public:
      string name;
      string address;
    restourent(int A_rating,string A_name,string A_address){
        rating=A_rating;
        name=A_name;
        address=A_address;
    }
    int rate(int A_rating){
        if(rating>5){
            cout<<"Invalid rating";
            exit(1);
        }
        else{
           rating=A_rating;
        }
    }
    int giverate(){
        return rating;
    }
    
};
int main(){
    restourent tadka(5,"tadka","near city station");
    cout<<tadka.address;


return 0;}