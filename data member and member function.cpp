/*
Bismillahir Rahmanir Rahim
Author: Md Nurul Amin
Information and Communication Engineering, NSTU
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class nion{
private:
    ll n;
public:
    void input(){
    cin>>n;
    }

    void display(string);
};

void nion::display(string s){
    cout<<s<<" : "<<n<<endl;
}
/// member function may be defined inside or outside the class. but declared inside the class.
/// all data member are private and all member function are public.

int main(){

    nion a, b;
    string s; cin>>s;
    a.input();
    a.display(s);

    return 0;
}

