#include <iostream>
using namespace std;

int main(){
    int nilai;
    cout<<"Masukkan angka ";
    cin>>nilai;

    if (nilai % 5==0){
        cout<<nilai<<" adalah kelipatan dari 5"<<endl;
    }
    if (nilai % 10 ==0){
        cout<<nilai<<" adalah kelipatan dari 10"<<endl;
    }
    else{
        cout<<nilai<<" bukan kelipatan keduanya"<<endl;
    }

}