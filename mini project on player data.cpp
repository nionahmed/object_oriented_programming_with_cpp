/*
Bismillahir Rahmanir Rahim
Author: Md Nurul Amin
Information and Communication Engineering, NSTU
*/

/// use constructor to initialize player name, age, team name
/// make display function and change function and input function

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class player{
private:
    string name, team_name;
    ll age;
public:
    player(): name("tamim"), age(30), team_name("bangladesh"){
    cout<<"------player data initialized-------"<<endl;
    }
    void display(){
        cout<<"-------player data-------"<<endl;
        cout<<"player name : "<<name<<endl;
        cout<<"player age : "<<age<<endl;
        cout<<"player team name : "<<team_name<<endl;
    }
    void update(string n, string tn, ll a){
        name=n;
        team_name=tn;
        age=a;
    }
};

int main(){

    player p1;
    ll ch;
    while(1){
        cout<<"------press : 1 to view player data------"<<endl;
        cout<<"------press : 2 to update player data------"<<endl;

        cin>>ch;

        if(ch==1){
            p1.display();
        }
        else if(ch==2){
            ll a; string n,tn;
            cin>>n>>a>>tn;
            p1.update(n,tn,a);
        }
        else {
            cout<<"enter number 1 or 2"<<endl;
            break;
        }
    }

    return 0;
}
