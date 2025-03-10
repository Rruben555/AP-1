#include<iostream>
using namespace std;

int main(){
    float volume, lp;
    int r;
    const float pi =3.14;
    cout<<"Masukkan radius : ";
    cin>>r;

    volume=(float)4/(float)3*pi*r*r*r;
    lp=4*pi*r*r;

    cout<<volume<<endl;
    cout<<lp<<endl;

}
