#include<iostream>
using namespace std;

int main(){
    float volume, lp;
    int r;
    const float pi =3.14;
    cout<<"Masukkan radius : ";
    cin>>r;

    volume=(float)4/(float)3*pi*(float)r*(float)r*(float)r;
    lp=4*pi*(float)r*(float)r;

    cout<<volume<<endl;
    cout<<lp<<endl;

}