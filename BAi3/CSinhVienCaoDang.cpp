#include "CSinhVienCaoDang.h"

CSinhVienCaoDang::CSinhVienCaoDang():CSinhVien(), DiemThiTotNghiep(0){}

CSinhVienCaoDang::~CSinhVienCaoDang(){}

void CSinhVienCaoDang::Nhap(){
    CSinhVien::Nhap();
    cout<< "Nhap diem thi tot nghiep: ";
    cin>>DiemThiTotNghiep;
}

void CSinhVienCaoDang::Xuat(){
    cout<< "SVCD: ";
    CSinhVien::Xuat();
    cout<< "Diem thi tot nghiep: "<<DiemThiTotNghiep<<"\n";
}

bool CSinhVienCaoDang::XetTotNghiep(){
    return (TongTinChi>=120 && DTB>=5.0 && DiemThiTotNghiep>=5.0);
}
