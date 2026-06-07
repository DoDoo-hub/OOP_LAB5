#include "CGiaoDichNhaPho.h"
#include <iomanip>

CGiaoDichNhaPho::CGiaoDichNhaPho(){}

CGiaoDichNhaPho::~CGiaoDichNhaPho(){}

double CGiaoDichNhaPho::TinhThanhTien(){
    if(LoaiNha=="cao cap")
        ThanhTien= DienTich*DonGia;
    else //Loại "thuong"
        ThanhTien= DienTich*DonGia*0.9; 
    return ThanhTien;
} //Vừa tính vừa cập nhật thuộc tính thành tiền cho đối tượng

void CGiaoDichNhaPho::Nhap(){
    CGiaoDich::Nhap();
    cout<< "Nhap loai nha (cao cap, thuong): ";
    cin.ignore();
    getline(cin,LoaiNha);
    cout<< "Nhap dia chi: ";
    getline(cin,DiaChi);
    ThanhTien=TinhThanhTien();
}

void CGiaoDichNhaPho::Xuat(){
    cout<< "GDNP: ";
    CGiaoDich::Xuat();
    cout<<"Loai nha: "<<LoaiNha<<"\t";
    cout<<"Dia chi: "<<DiaChi<<"\t";
    cout<<fixed<<setprecision(0)<<"Thanh tien: "<<TinhThanhTien()<<" VND\n";
}