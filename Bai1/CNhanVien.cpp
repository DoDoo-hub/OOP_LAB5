#include "CNhanVien.h"
#include <iomanip>
#include <iostream>
using namespace std;

CNhanVien::CNhanVien(string ten, Date ngaysinh, double luong):
    HoTen(ten), NgaySinh(ngaysinh), Luong(luong){}

CNhanVien::~CNhanVien(){}

double CNhanVien::getLuong(){return Luong;}

Date CNhanVien::getNgaySinh(){return NgaySinh;}

void CNhanVien::Nhap(){
    char slash= '/';
    cout<< "Nhap ho ten: ";
    cin.ignore();
    getline(cin,HoTen);
    cout<< "Nhap ngay sinh: ";
    cin>>NgaySinh.ngay>>slash>>NgaySinh.thang>>slash>>NgaySinh.nam;
}

void CNhanVien::Xuat(){
    cout<<"Ten: "<<HoTen<<"\t\t"<< "Ngay sinh: ";
    cout<<setfill('0')<<setw(2)<<NgaySinh.ngay<<"/";
    cout<<setfill('0')<<setw(2)<<NgaySinh.thang<<"/";
    cout<<setfill('0')<<setw(4)<<NgaySinh.nam<<"\t";
}
