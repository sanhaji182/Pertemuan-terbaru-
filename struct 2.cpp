#include <iostream>
#include <stdlib.h>
using namespace std;

struct mahasiswa
{
    int nim;
    string nama;
    int notelp;
    int tugas;
    int uts;
    int uas;
    int quiz;
    double akhir;
};
mahasiswa m;

void input()
{
    cout<<"Nim : ";
    cin>>m.nim;
    cout<<"Nama : ";
    cin>>m.nama;
    cout<<"No Telepon : ";
    cin>>m.notelp;
    cout<<"Nilai Tugas : ";
    cin>>m.tugas;
    cout<<"Nilai UTS : ";
    cin>>m.uts;
    cout<<"Nilai UAS : ";
    cin>>m.uas;
    cout<<"Nilai Quiz : ";
    cin>>m.quiz;
    m.akhir=0.25*m.uas+0.25*m.uts+0.3*m.tugas+0.2*m.quiz;
    system("cls");
}

void tampil()
{
    cout<<"Hasilnya nilai anda adalah"<<endl;
    cout<<"Nim : "<<m.nim<<endl;
    cout<<"Nama : "<<m.nama<<endl;
    cout<<"No Telepon : "<<m.notelp<<endl;
    cout<<"Nilai Tugas : "<<m.tugas<<endl;
    cout<<"Nilai UTS : "<<m.uts<<endl;
    cout<<"Nilai UAS : "<<m.uas<<endl;
    cout<<"Nilai Quiz : "<<m.quiz<<endl;
    cout<<"Nilai Akhir : "<<m.akhir;
}

int main()
{
    input();
    tampil();
}
