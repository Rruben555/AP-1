#include<iostream>
#include <string>
using namespace std;

struct Mahasiswa{//Struct adalah kumpulan variabel yang tidak perlu sama
    string nama;
    int umur;
    float ipk;
};

int main(){
    Mahasiswa mhs1;
    mhs1.nama="Ruben";
    mhs1.umur=18;
    mhs1.ipk=3.8;

    // cout<<"Akses dengan . : "<<endl; //dapat diakses dengan .
    // cout<<"Nama: "<<mhs1.nama<<endl;
    // cout<<"Umur: "<<mhs1.umur<<endl;
    // cout<<"IPK: "<<mhs1.ipk<<endl;

    Mahasiswa *ptrMhs=&mhs1; // dapat diakses dengan ->
    cout<<"Akses dengan -> : "<<endl;
    cout<<"Nama: "<<ptrMhs->nama<<endl;
    cout<<"Umur: "<<ptrMhs->umur<<endl;
    cout<<"IPK: "<<ptrMhs->ipk<<endl;

    
}   
