#include <iostream>

using namespace std;

struct MOTOR {
string merk;
string tahun;
string nopolisi;
string warna;
};
MOTOR m;

void SetMotor(){
    cout<<"Merk : ";
    getline(cin,m.merk);
    cout<<"Tahun : ";
    getline(cin,m.tahun);
    cout<<"Nomor Polisi : ";
    getline(cin,m.nopolisi);
    cout<<"Warna : ";
    cin>>m.warna;
    }

void ShowIndoMotor(){
    cout<<endl<<"Merk : "<<m.merk<<endl;
    cout<<"Tahun : "<<m.tahun<<endl;
    cout<<"No Polisi : "<<m.nopolisi<<endl;
    cout<<"Warna : "<<m.warna<<endl;
    }

int main(){
SetMotor();
ShowIndoMotor();
}

