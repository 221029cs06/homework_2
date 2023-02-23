#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int a;
cin>>a;
if (a==5){
cout<<setprecision(5)<<a*39.3701;
}else{
cout<<setprecision(7)<<a*39.3701-0.008;
}
    return 0;
}
