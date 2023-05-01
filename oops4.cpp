#include<bits/stdc++.h>
using namespace std;
class parent{
    private:
    int age;
    public:
    int height;
    string haircolor;
    int getparenthealth(){
       return age;
    }
    void setparenthealth(int e){
         age=e;
    }
    /*int getheight(){
        return height;
    }*/
    /*void setheight(int h){
       height=h;
    }*/
    
};
class child:public parent{
      public:
      string skincolor;
      void random(){
        cout<<"inside child function";
      }
      void print1(){
        cout<<this->height<<endl;
        cout<<this->haircolor<<endl;
        cout<<this->skincolor<<endl;
        cout<<this->getparenthealth()<<endl;
      }
};
int main(){
    child abhinay;
    /*cout<<abhinay.age<<endl;inaccessible*/
    cout<<abhinay.height<<endl;
    cout<<abhinay.haircolor<<endl;
    cout<<abhinay.skincolor<<endl;
    abhinay.random();
    abhinay.height=20;
    abhinay.haircolor="black";
    abhinay.skincolor="yellowishblack";
    cout<<abhinay.height<<endl;
    cout<<abhinay.haircolor<<endl;
    cout<<abhinay.skincolor<<endl;
    abhinay.setparenthealth(40);
    abhinay.print1();

}