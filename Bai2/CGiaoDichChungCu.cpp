#include "CGiaoDichChungCu.h"
#include <iomanip>

CGiaoDichChungCu::CGiaoDichChungCu(){}

CGiaoDichChungCu::~CGiaoDichChungCu(){}

double CGiaoDichChungCu::TinhThanhTien(){
    if(ViTriTang==1)
        ThanhTien= DienTich*DonGia*2;
    else if(ViTriTang>=15)
        ThanhTien= DienTich*DonGia*1.2;
    else //Các vị trí tầng còn lại(2-14)
        ThanhTien= DienTich*DonGia;
    return ThanhTien;
} //Vừa tính vừa cập nhật thuộc tính thành tiền cho đối tượng

void CGiaoDichChungCu::Nhap(){
    CGiaoDich::Nhap();
    cout<< "Nhap ma can: ";
    cin>>MaCan;
    cout<< "Nhap vi tri tang: ";
    cin>>ViTriTang; 
    ThanhTien=TinhThanhTien();
}

void CGiaoDichChungCu::Xuat(){
    cout<< "GDCC: ";
    CGiaoDich::Xuat();
    cout<<"Ma can: "<<MaCan<<"\t";
    cout<<"Vi tri tang: "<<ViTriTang<<"\t";
    cout<<fixed<<setprecision(0)<<"Thanh tien: "<<TinhThanhTien()<<" VND\n";
}