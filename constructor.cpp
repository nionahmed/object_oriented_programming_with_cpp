/*
Bismillahir Rahmanir Rahim
Author: Md Nurul Amin
Information and Communication Engineering, NSTU
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class nion {
private:
    ll n, m, k;
public:
    nion() : n(21), m(102), k(98){ ///recommeded
        n=30; /// this type of initialization not recommended.
        cout<<"hi ammu the constructor"<<endl;
    }
    ///this is default constructor as it has no parameter

    ///now parameterized constructor
    nion (ll x, ll y, ll z){
        n=x;
        m=y;
        k=z;
        cout<<"value : "<<n<<" "<<m<<" "<<k<<endl;
    }
    void display(){
        cout<<"value : "<<n<<" "<<m<<" "<<k<<endl;
    }

};



int main(){
    nion argon, he(5,10,20);
    argon.display();

    return 0;
}

