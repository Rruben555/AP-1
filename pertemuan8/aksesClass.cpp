#include<iostream>
using namespace std;

class ContohAkses{ //class adalah sebuah wadah yang mengelompokkan data dan fungsi dalam satu struktur
    private:
        int privateVar; //hanya dapat diakses oleh anggota class yang sama
    protected:
        int protectedVar; //dapat diakses oleh anggota dalam class dan dari class lainnya seperti class turunan
    public:
        int publicVar; //dapat diakses oleh anggota dari berbagai class
    
    //Constructor
    ContohAkses(){
        privateVar=1;
        protectedVar=2;
        publicVar=3;
    }

    void tampilkanSemua(){
        cout<<"Akses dari dalam class: "<<endl;
        cout<<privateVar<<endl;
        cout<<protectedVar<<endl;
        cout<<publicVar<<endl;
    }
};

class Turunan: public ContohAkses{
    public: 
        void aksesProtected(){
            cout<<protectedVar<<endl; // dapat diakses
            cout<<publicVar<<endl;
            // cout<<privateVar<<endl; //error
        }
};


int main(){
    ContohAkses obj;
    obj.tampilkanSemua();//menjalankan fungsi dalam class
    
    cout<<"\nAkses dari luar class: "<<endl;
    // cout<<obj.privateVar<<endl; //error  
    // cout<<obj.protectedVar<<endl; //error
    cout<<obj.publicVar<<endl;

    cout<<"Akses dari class turunan"<<endl;
    Turunan tur;
    tur.aksesProtected();
}
