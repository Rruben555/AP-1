#include <iostream>
using namespace std;

void sapa(string nama){
    cout<<"Halo "<<nama<<"! Selamat belajar C++!"<<endl;
}

int main(){
    string namaPengguna="Ruben";
    sapa(namaPengguna);

    return 0;
}