#include "CNhanVienVP.h"
#include <iomanip>

CNhanVienVP::CNhanVienVP(string ten, Date ngaysinh, double luong, int songaylam):
    CNhanVien(ten,ngaysinh,luong), SoNgayLamViec(songaylam){}

CNhanVienVP::~CNhanVienVP(){}

double CNhanVienVP::TinhLuong(){
    return SoNgayLamViec*100000;
}

void CNhanVienVP::Nhap(){
    CNhanVien::Nhap();
    cout<< "Nhap so ngay lam viec: ";
    cin>>SoNgayLamViec;
    Luong= TinhLuong(); //Cập nhật lương sau khi nhập đủ thông tin cần có để tính lương
}

void CNhanVienVP::Xuat(){
    cout<< "NVVP: ";
    CNhanVien::Xuat();
    cout<<fixed<<setprecision(0)<<"So ngay lam viec: "<<SoNgayLamViec<<"\t";
    cout<< "Luong: "<<Luong<<" VND\n";
}
