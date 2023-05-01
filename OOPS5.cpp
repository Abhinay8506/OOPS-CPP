#include<bits/stdc++.h>
using namespace std;
class abhinay{
    public:
    int a;
    int b;
    int add(){
        return a+b;
    }
    int multiply(){
        return a*b;
    }
    void operator+(abhinay &temp){
        int value1=this->a;
        int value2=temp.a;
        cout<<value2-value1<<endl;
    }
    void operator*(int c){
        int value1=this->a;
        cout<<c-value1<<endl;

    }
    
};
int main(){
       abhinay abhi1,abhi2;
       abhi1.a=5;
       abhi1.b=4;
       abhi2.b=10;
       abhi2.a=9;
       cout<<abhi1.add()<<endl<<abhi2.add()<<endl;
       abhi1+abhi2;
       abhi1*abhi2.b;

}