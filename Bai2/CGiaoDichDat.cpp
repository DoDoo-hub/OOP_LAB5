#include "CGiaoDichDat.h"
#include <iomanip>

CGiaoDichDat::CGiaoDichDat(){}

CGiaoDichDat::~CGiaoDichDat(){}

double CGiaoDichDat::TinhThanhTien(){ 
    if(LoaiDat=='A')
        ThanhTien= DienTich*DonGia*1.5;
    else //Loại B hoặc C
        ThanhTien= DienTich*DonGia;
    return ThanhTien; 
} //Vừa tính vừa cập nhật thuộc tính thành tiền cho đối tượng

void CGiaoDichDat::Nhap(){
    CGiaoDich::Nhap(); 
    cout<< "Nhap loai dat (A, B, C): "; 
    cin>>LoaiDat;
    ThanhTien=TinhThanhTien();
}

void CGiaoDichDat::Xuat(){
    cout<< "GDD:  ";
    CGiaoDich::Xuat();
    cout<< "Loai dat: "<<LoaiDat<<"\t";
    cout<<fixed<<setprecision(0)<<"Thanh tien: "<<TinhThanhTien()<<" VND\n";
}