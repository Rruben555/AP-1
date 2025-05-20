#include <iostream>
using namespace std;

int main(){
    string kalimat;//deklarasi variabel
    int i;

    cout<<"Masukkan kalimat: ";
    getline(cin, kalimat);// input kalimat (spasi dibaca)
    
    for(i=0; i<kalimat.length(); i++){// jika i<kalimat.length() masih terpenuhi akan dijalankan
        if (kalimat[i]=='a' || kalimat[i]=='i' ||kalimat[i]=='u' ||kalimat[i]=='e' || kalimat[i]=='o'){// jika terdapat char di kalimat yang berupa a,i,u,e,o

        kalimat[i]=toupper(kalimat[i]);//akan di kaptialkan
        }

    }

    cout<<"Hasil: "<<kalimat<<endl;//tampilkan kalimat yang sudah dimodifikasi
}
