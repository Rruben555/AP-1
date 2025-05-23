#include<iostream>
#include<string>
#include<array>
using namespace std;

int main(){
    //Array Declaration & Initializatioon, array adalah kumpulan data dengan tipe yang sama
    //2 Cara Membuat Array

    //cara 1: array kosong
    // string nama[5];

    // nama[0]="Alya";
    // nama[1]="Parul";
    // nama[2]="Syukron";
    // nama[3]="Aurick";
    // nama[4]="Dzakwan";

    //cara 2: array yang langsung diisi
    // string nama[5]={"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"};
    // string nama[]={"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"};

    //Ascending Element in Array
    // cout<<nama[0]<<endl;
    // cout<<nama[1]<<endl;
    // cout<<nama[2]<<endl;
    // cout<<nama[3]<<endl;
    // cout<<nama[4]<<endl;

    //Menggunakan Looping
    // for(int i=0; i<5; i++){
    //     cout<<nama[i]<<endl;
    // }
    // for(int i=4; i>=0; i--){
    //     cout<<nama[i]<<endl;
    // }

    //Multidimensional Array, array di dalam array
    //1 3 5
    //2 4 6
    // int matrix[2][3]={{1,3,5}, {2,4,6}};
    // for (int i=0; i<2; i++){
    //     for(int j=0; j<3; j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // int matrix[4][6]={{1,2,3,4,5,6}, {7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24}};
    // for (int i=0; i<4; i++){
    //     for(int j=0; j<6; j++){
    //         cout<<matrix[i][j]<<"\t";
    //     }
    //     cout<<endl;
    // }

    //String (array of characters)
    // string nama="Ruben";
    // cout<<nama[0]<<endl;
    // cout<<nama[2]<<endl;

    // for (int i=0; i<nama.length(); i++){
    //     cout<<nama[i]<<endl;
    // }

    // string s1="Hello";
    // string s2="world";

    //1. s1=s2 //mengubah nilai string
    // s1=s2;
    // cout<<"s1="<<s1<<endl;
    
    //2. s1=s1+s2 //menggabungkan 2 string
    // cout<<"Hasil: "<<s1+s2<<endl;

    //3. s1.length() //mengambil nilai panjang string
    // cout<<s1.length()<<endl;
    // cout<<(s1+s2).length()<<endl;

    //4. s1.substr(n,m) , mengambil bagian string dari index ke n sepanjang m
    // cout<<s1.substr(2,4)<<endl;
    // cout<<(s1+s2).substr(5,3)<<endl;

    //Operator sizeof() //menentukan berapa bit data
    // int angka=10;
    // cout<<sizeof(angka);

    // int nilai[]={10,20,30,40,50};
    // cout<<sizeof(nilai);

    // string s="Ruben";
    // cout<<sizeof(s);
    // cout<<s.length();

    // string nama_karyawan[]={"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"};
    // int n=sizeof(nama_karyawan) / sizeof(string);
    // cout<<n<<endl;
    // cout<<sizeof(nama_karyawan)<<endl;
    // cout<<sizeof(string)<<endl;

    //Array Library
    // array<float,5> nilai={87.2, 90, 100, 95.7, 78.5};//vector array
    // cout<<"Nilai: ";
    // for (int i=0; i<nilai.size(); i++){ //cara 1 output
    //     cout<<nilai[i]<<" ";
    // }

    // for (float n : nilai){ //cara 2 output
    //     cout<<n<<" ";
    // }

}
