#include "CSinhVienDaiHoc.h"
#include <cmath>

CSinhVienDaiHoc::CSinhVienDaiHoc(): CSinhVien(), TenLoanVan("null"), DiemLoanVan(0){}

CSinhVienDaiHoc::~CSinhVienDaiHoc(){}

void CSinhVienDaiHoc::Nhap(){
    CSinhVien::Nhap();
    cout<< "Nhap ten luan van: ";
    cin.ignore();
    getline(cin,TenLoanVan);
    cout<< "Nhap diem luan van: ";
    cin>>DiemLoanVan;
}

void CSinhVienDaiHoc::Xuat(){
    cout<< "SVDH: ";
    CSinhVien::Xuat();
    cout<< "Ten loan van: "<<TenLoanVan<<"\t";
    cout<< "Diem luan van: "<<round(DiemLoanVan*100)/100<<"\n";
}

bool CSinhVienDaiHoc::XetTotNghiep(){
    return (TongTinChi>=170 && DTB>=5.0 && DiemLoanVan>=5.0);
}
