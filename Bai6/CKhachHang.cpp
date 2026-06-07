#include "CKhachHang.h"

CKhachHang::CKhachHang(): HoTen(""), SoLuong(0), DonGia(0.0) {}

CKhachHang::~CKhachHang(){}

void CKhachHang::NhapTuFile(ifstream& ifs){
    ifs.ignore(); 
    getline(ifs, HoTen);
    ifs>>SoLuong>>DonGia;
}


string CKhachHang::GetHoTen() const {
    return HoTen;
}