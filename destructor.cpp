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
//    nion() : n(21), m(102), k(98){ ///recommeded
//        n=30; /// this type of initialization not recommended.
//        cout<<"hi ammu the constructor"<<endl;
//    }
//    ///this is default constructor as it has no parameter

    ///now parameterized constructor
    nion (ll x, ll y, ll z){
        n=x;
        m=y;
        k=z;
        cout<<"value : "<<n<<" "<<m<<" "<<k<<endl;
    }
    ~nion(){
        cout<<"this constructor is destroyed and memory become free"<<endl;
    }
    void display(){
        cout<<"value : "<<n<<" "<<m<<" "<<k<<endl;
    }

};



int main(){
    nion he(5,10,20);

    return 0;
}


