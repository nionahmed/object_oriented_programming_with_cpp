/*
Bismillahir Rahmanir Rahim
Author: Md Nurul Amin
Information and Communication Engineering, NSTU
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class job{
private:
    string post;
    ll salary;
    string skill;
public:
    void setpost(string p){
        post=p;
    }

    void setsalary(ll s){
        salary=s;
    }

    void setskill(string sk){
        skill=sk;
    }

    ll getsalary(){
    return salary;
    }

    void display(){
        cout<<post<<" : "<<salary<<" : "<<skill<<endl;
    }
};



/// setter function used to assign value to private variabe/data.
/// getter function is for get the value return

int main(){

    job job1;



    ll i=1;
    while(i<=10){
    string post_name,skilll;

    ll beton;
    cin>>post_name>>beton>>skilll;

    cout<<"-------job "<<i<<" details--------"<<endl;
    job1.setpost(post_name);
    job1.setsalary(beton);
    job1.setskill(skilll);
    ///job1.display();// to display set data
    cout<<job1.getsalary()<<endl;
    i++;
    }

    return 0;
}


