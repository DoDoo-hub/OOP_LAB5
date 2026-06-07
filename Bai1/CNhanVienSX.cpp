#include "CNhanVienSX.h"
#include <iomanip>

CNhanVienSX::CNhanVienSX(string ten, Date ngaysinh, double luong, double luongcb, int sosp):
     CNhanVien(ten,ngaysinh,luong),LuongCanBan(luongcb), SoSanPham(sosp){}

CNhanVienSX::~CNhanVienSX(){}

double CNhanVienSX::TinhLuong(){
    return LuongCanBan + SoSanPham*5000;
}

void CNhanVienSX::Nhap(){
    CNhanVien::Nhap();
    cout<< "Nhap luong can ban: ";
    cin>>LuongCanBan;
    cout<< "Nhap so san pham: ";
    cin>>SoSanPham;
    Luong= TinhLuong();//Cập nhật lương sau khi nhập đủ thông tin cần có để tính lương
}

void CNhanVienSX::Xuat(){
    cout<< "NVSX: ";
    CNhanVien::Xuat();
    cout<<fixed<<setprecision(0)<<"Luong can ban: "<<LuongCanBan<<" VND\t";
    cout<<"So san pham: "<<SoSanPham<<"\t"<< "Luong: "<<Luong<<" VND\n";
}
