#include <stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int Nilai;
    char Nama[30];
    char Nim[12];
    char indeks;
    cout<<"---Input Data Mahasiswa Pelita Bangsa----\n";
    cout<<"Masukan Nama :";
    cin>>Nama;
    cout<<"Masukan Nim : ";
    cin>>Nim;
    cout<<"Masukan Nilai : ";
    cin>>Nilai;
    if(Nilai>=80&&Nilai<=100)
    {
      cout<<"\nA";
    }
    else if(Nilai>=60&&Nilai<=70)
    {
    cout<<"\nB";
    }
    else if(Nilai>=40&&Nilai<=50)
    {
        cout<<"\nC";
    }
    else if(Nilai>=20&&Nilai<=30)
    {
      cout<<"\nD";
    }
    else if(Nilai>=0&&Nilai<=10)
    {
       cout<<"\nE";
    }
    else
    {
        cout<<" Maaf Nilai Antara 0-100 ";
    }
    return 0;


}
