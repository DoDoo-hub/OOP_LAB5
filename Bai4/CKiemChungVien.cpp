#include "CKiemChungVien.h"
#include <iomanip>

CKiemChungVien::CKiemChungVien(){}

CKiemChungVien::~CKiemChungVien(){}

void CKiemChungVien::Nhap(){
    CNhanVien::Nhap();
    cout<< "Nhap so loi phat hien duoc: ";
    cin>>SoLoiPhatHien;
}

double CKiemChungVien::TinhLuong(){
    return LuongCoBan + SoLoiPhatHien*50000;
}

void CKiemChungVien::Xuat(){
    cout<< "KCV: ";
    CNhanVien::Xuat();
    cout<< "So loi phat hien duoc: "<<SoLoiPhatHien<<"\t";
    cout<<fixed<<setprecision(0)<< "Luong: "<<TinhLuong()<<" VND\n";
}

