#include <iostream> //header utk c++
#include <conio.h>//header utk getche(), getch()
using namespace std;
int main(){
    /*komentar utk bbbrp baris*/
    string nama;
    char kom, jeniskelamin;
    int nim;
    float ip;
    cout<<"Hello World!"<<endl;
    cout<<"Masukkan nama ";

    //cin>>nama; ga baca spasi
    getline(cin,nama); //baca spasi

    cout<<"Masukkan kom ";
    cin>>kom;
    cout<<"Masukkan nim ";
    cin>>nim;
    cout<<"Masukkan ip ";
    cin>>ip;
    
    cout<<"Masukkan jenis kelamin (L/P): ";
    jeniskelamin = getche();//agar karakter langsung tampil, ga perlu tekan enter
    cout<<endl;
    cout<<nama<<endl; 
    cout<<kom<<endl; 
    cout<<nim<<endl; 
    cout<<ip<<endl; 
    putchar(jeniskelamin);//menampilkan karakter jenis kelamin
    cout<<endl;
    getch();//karakter yang diketik tdk akan ditampilkan
}