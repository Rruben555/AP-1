#include <iostream>
using namespace std;

void sapa(string nama){//inisialisasi fungsi sapa, void karena tidak mengembalikan nilai, nama sebagai parameter formal
    cout<<"Halo "<<nama<<"! Selamat belajar C++!"<<endl;
}

int main(){
    string namaPengguna="Ruben";
    sapa(namaPengguna);//pemanggilan fungsi sapa dengan namaPengguna sebagai parameter aktual

    return 0;
}
