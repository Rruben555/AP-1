#include <iostream>
using namespace std;

int main(){
    string kalimat;//deklarasi variabel
    int i;

    cout<<"Masukkan kalimat: ";
    getline(cin, kalimat);//input kalimat (spasi tetap dibaca)
    
    for(i=0; i<kalimat.length(); i++){// sampai i=kalimat.length() akan dijalankan
        kalimat[i]=toupper(kalimat[i]);//semua char di kalimat akan di kapitalkan

    }

    cout<<"Kalimat dalam huruf kapital: "<<kalimat<<endl;//tampilkan kalimat yang sepenuhnya dalam kapital
}
