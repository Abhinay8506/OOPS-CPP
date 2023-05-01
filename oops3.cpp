#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class hero{
    private:
    int health;
    public:
    char level;
    char*name;
    static int time;
    hero(){
        cout<<"simple constructor";
        name = new char[100];
    }
    //if this copy constructor is not defined then default copy constructor is called which does shallow copying
    //DEEP COPYING
    hero(hero &temp){
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    void seth(int h){
        health=h;
    }
    void setname(char name[]){
        strcpy(this->name,name);
    }
    
    void print(){
        cout<<this->health<<" ";
        cout<<this->level<<" ";
        cout<<this->name<<" ";
    }
    int geth(){
      return health;
    }
    static int random(){
        return time;
    }


};
int hero::time=5;
int main(){
    hero r;
    cout<<endl;
    r.seth(12);
    r.level='A';
    char arr[8]="ABHINAY";
    r.setname(arr);
    r.print();
    hero s(r);
    cout<<endl;
    s.print();
    r.name[0]='S';
    r.print();
    cout<<endl;
    s.print();
    cout<<endl<<hero::time<<endl<<hero::random();
    


}