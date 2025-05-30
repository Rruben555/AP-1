#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Alamat{ //deklarasi struct
    string jalan,kota;
    int kodePos;
};

struct Mahasiswa{ //deklarasi struct
    string nama;
    int umur;
    float ipk;
    Alamat alamat;
};

int main(){
    system("CLS");
    Mahasiswa mhs1; //variabel dengan bentuk Mahasiswa
    // mhs1.alamat.jalan="Jalan Jamin Ginting";
    // mhs1.alamat.kota="Medan";
    // mhs1.alamat.kodePos=20155;

    // cout<<"Alamat: "<<mhs1.alamat.jalan<<" "<<mhs1.alamat.kota<<" "<<mhs1.alamat.kodePos<<endl;

    vector<Mahasiswa> mahasiswa; //vector struct Mahasiswa
    int n;
    cout<<"Masukkan banyak mahasiswa: ";
    cin>>n;

    for (int i=0; i<n; i++){ //input ke mhs1
        cout<<"Mahasiswa "<<i+1<<endl;
        cin.get();
        cout<<"Masukkan nama: ";
        getline(cin, mhs1.nama);
        cout<<"Masukkan umur: ";
        cin>>mhs1.umur;
        cout<<"Masukkan ipk: ";
        cin>>mhs1.ipk;
        mahasiswa.push_back(mhs1); //masukkan data dari mhs1 ke vector mahasiswa
    }

    for (int i=0; i<n; i++){ //output dari mahasiswa
        cout<<"Mahasiswa "<<i+1<<endl;
        cout<<"Nama: "<<mahasiswa[i].nama<<endl;
        cout<<"Umur: "<<mahasiswa[i].umur<<endl;
        cout<<"Ipk: "<<mahasiswa[i].ipk<<endl;
    }
}
