#include "CCongTy.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    CCongTy CT;
    CT.Nhap();
    CT.Xuat();
    cout<<fixed<<setprecision(0)<<"\nTong luong cong ty phai tra: "<<CT.TinhTongLuong()<<" VND\n";
    
    CNhanVien* NVSXMinLuong= CT.TimNVSXLuongThapNhat();
    if(NVSXMinLuong!=nullptr){
        cout<< "\nNhan vien san xuat co luong thap nhat: \n";
        NVSXMinLuong->Xuat();
    }
    else{
        cout<< "\nKhong co nhan vien san xuat nao trong danh sach\n";
    }
    
    CNhanVien* NVVPMaxTuoi= CT.TimNVVPTuoiCaoNhat();
    if(NVVPMaxTuoi!=nullptr){
        cout<< "\nNhan vien van phong co tuoi cao nhat: \n";
        NVVPMaxTuoi->Xuat();
    }
    else{
        cout<< "\nKhong co nhan vien van phong nao trong danh sach\n";
    }
    
    return 0;
}