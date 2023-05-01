#include<bits/stdc++.H>
using namespace std;
class abhi{
    public:
     string name;
     int rollno;
    private:
    string city;
    public:
    string get(){
        return city;
    } 
    void set(string ch){
        city=ch;
    }
};
int main(){
    abhi abhinay;
    cout<<sizeof(string)<<endl;
    cout<<sizeof(abhinay)<<endl;
    abhinay.name="GOSWAMI";
    abhinay.rollno=02;
    cout<<sizeof(abhinay.get());
    abhinay.set("noida");
    /*abhinay.city=1;*/
    cout<<abhinay.name<<abhinay.rollno<<endl;
    cout<<abhinay.get()<<endl;
    abhi *b=new abhi;
    cout<<sizeof(b);
    b->set("amarnath");
    b->name="amar";
    b->rollno=1;
    cout<<b->get()<<b->name<<b->rollno<<endl;


}