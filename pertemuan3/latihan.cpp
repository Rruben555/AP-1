#include <iostream>
using namespace std;

int main(){
    int nilai;//deklarasi variabel
    cout<<"Masukkan angka ";
    cin>>nilai;//input nilai

    if (nilai % 5==0){//kondisi 1
        cout<<nilai<<" adalah kelipatan dari 5"<<endl;
        if (nilai % 10 ==0){// kondisi 2, berupa nested if
        cout<<nilai<<" adalah kelipatan dari 10"<<endl;
        }
    }
    else{// jika kondisi 1 salah
        cout<<nilai<<" bukan kelipatan keduanya"<<endl;
    }

}
