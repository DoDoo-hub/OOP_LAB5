#include "CNhanVien.h"
#include <iomanip>

CNhanVien::CNhanVien(){}

CNhanVien::~CNhanVien(){}

void CNhanVien::Nhap(){
    cout<< "Nhap ma nhan vien: ";
    cin>>MaNV;
    cout<< "Nhap ho ten: ";
    cin.ignore();
    getline(cin,HoTen);
    cout<< "Nhap tuoi: ";
    cin>>Tuoi;
    cout<< "Nhap so dien thoai: ";
    cin>>SDT;
    cout<< "Nhap email: ";
    cin>>email;
    cout<< "Nhap luong co ban: ";
    cin>>LuongCoBan;
}

void CNhanVien::Xuat(){
    cout<< "Ma NV: "<<MaNV<<"\t";
    cout<< "Ten: "<<HoTen<<"\t";
    cout<< "Tuoi: "<<Tuoi<<"\t";
    cout<< "SDT: "<<SDT<<"\t";
    cout<< "Email: "<<email<<"\t";
    cout<<fixed<<setprecision(0)<< "Luong co ban: "<<LuongCoBan<<" VND\t";
}


