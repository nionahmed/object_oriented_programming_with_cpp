/*
Bismillahir Rahmanir Rahim
Author: Md Nurul Amin
Information and Communication Engineering, NSTU
*/
#include "seperate_file.h"
int main(){

    nion a;
    a.input();
    a.display(); ///publicly declared so accessible
   // cout<<a.n<<endl; ///we can't access n from here as n is private. if n is public then it is poss

    return 0;
}
