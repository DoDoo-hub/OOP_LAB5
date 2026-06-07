#include "CSinhVien.h"
#include <cmath>

CSinhVien::CSinhVien():MSSV("null"), HoTen("null"), DiaChi("null"), TongTinChi(0), DTB(0){}

CSinhVien::~CSinhVien(){}

void CSinhVien::Nhap(){
    cout<< "Nhap ma so sinh vien: ";
    cin>>MSSV;
    cout<< "Nhap ho va ten: ";
    cin.ignore();
    getline(cin,HoTen);
    cout<< "Nhap dia chi: ";
    getline(cin,DiaChi);
    cout<< "Nhap tong so tin chi: ";
    cin>>TongTinChi;
    cout<< "Nhap diem trung binh: ";
    cin>>DTB;
}

void CSinhVien::Xuat(){
    cout<< "MSSV: "; cout<<MSSV<<"\t";
    cout<< "Ho ten: ";cout<<HoTen<<"\t";
    cout<< "Dia chi: ";cout<<DiaChi<<"\t";
    cout<< "Tong tin chi: ";cout<<TongTinChi<<"\t";
    cout<< "DTB: ";cout<<round(DTB*100)/100<<"\t"; // In điểm trung bình làm tròn đến 2 chữ số thập phân
}

double CSinhVien::getDTB(){return DTB;}
