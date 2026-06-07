#include "CLapTrinhVien.h"
#include <iomanip>

CLapTrinhVien::CLapTrinhVien(){}

CLapTrinhVien::~CLapTrinhVien(){}

void CLapTrinhVien::Nhap(){
    CNhanVien::Nhap(); 
    cout<< "Nhap so gio overtime: ";
    cin>>SoGioOvertime;
}

double CLapTrinhVien::TinhLuong(){
    return LuongCoBan + SoGioOvertime*200000;
}

void CLapTrinhVien::Xuat(){
    cout<< "LTV: ";
    CNhanVien::Xuat();
    cout<< "So gio overtime: "<<SoGioOvertime<<"\t";
    cout<<fixed<<setprecision(0)<< "Luong: "<<TinhLuong()<<" VND\n";
}


