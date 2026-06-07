#include "CQuanLyNhanVien.h"
#include <iostream>
using namespace std;

int main(){
    CQuanLyNhanVien qlNV;

    //Nhập/Xuất danh sách nhân viên
    qlNV.Nhap();
    qlNV.Xuat();

    //Xuất danh sách các NV có lương thấp hơn mức lương trung bình của các NV trong công ty
    qlNV.XuatDSLuongThapHonTrungBinh();

    //Xuất thông tin NV có lương cao nhất/thấp nhất trong công ty
    CNhanVien* nvMaxLuong = qlNV.TimNVMaxLuong();
    if(nvMaxLuong != nullptr){
        cout << "\nNhan vien co luong cao nhat:\n";
        nvMaxLuong->Xuat();
    }

    CNhanVien* nvMinLuong = qlNV.TimNVMinLuong();
    if(nvMinLuong != nullptr){
        cout << "\nNhan vien co luong thap nhat:\n";
        nvMinLuong->Xuat();
    }

    //Xuất thông tin lập trình viên có lương cao nhất
    CNhanVien* ltvMaxLuong= qlNV.TimLTVMaxLuong();
    if(ltvMaxLuong==nullptr)
        cout<< "\nKhong co lap trinh vien nao de tim luong cao nhat\n";
    else {
        cout<< "\nLap trinh vien co luong cao nhat:\n";
        ltvMaxLuong->Xuat();
    }

    //Xuất thông tin kiểm chứng viên có lương thấp nhất
    CNhanVien* kcvMinLuong= qlNV.TimKCVMinLuong();
    if(kcvMinLuong==nullptr)
        cout<< "\nKhong co kiem chung vien nao de tim luong thap nhat\n";
    else {
        cout<< "\nKiem chung vien co luong thap nhat:\n";
        kcvMinLuong->Xuat();
    }

    return 0;
}