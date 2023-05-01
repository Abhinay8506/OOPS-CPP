#include<bits/stdc++.h>
using namespace std;
class abhi{
    int health;
    int level;
    int road;
    public:
    abhi(){
        cout<<"blank constructor"<<endl;
    }
    abhi(int h){
        health=h;
    }
    abhi(int h,int l){
        health=h;
        level=l;
    }
    //downward function will not make any change to class variables due to local scoping
   /* abhi(int health,int level,int road){
        health=health;
        level=level;
        road=road;
    }*/
    abhi(int health,int level,int road){
        this->health=health;
        this->level=level;
        this->road=road;
    }
    int geth(){
        return health;
    }
    int getl(){
        return level;
    }
    int getr(){
        return road;
    }
    
};
int main(){
    abhi abhi5;
    abhi abhinay;
    cout<<abhinay.geth()<<" "<<abhinay.getl()<<endl;
    abhi abhi2(12);
    cout<<abhi2.geth()<<" "<<abhi2.getl()<<endl;
    abhi abhi3(12,1);
    cout<<abhi3.geth()<<" "<<abhi3.getl()<<endl;
    abhi abhi4(12,1,8);
    cout<<abhi4.geth()<<" "<<abhi4.getl()<<" "<<abhi4.getr()<<endl;
}