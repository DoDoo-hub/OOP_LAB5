#include "CGiaoDich.h"
#include <iomanip>

CGiaoDich::CGiaoDich(){}

CGiaoDich::~CGiaoDich(){}

void CGiaoDich::Nhap(){
    cout<< "Nhap ma giao dich: ";
    cin>>MaGiaoDich;
    char slash; // Biến tạm để đọc dấu '/' trong định dạng dd/mm/yyyy
    cout<< "Nhap ngay giao dich: "; // Nhập theo định dạng dd/mm/yyyy
    cin>>NgayGiaoDich.ngay>>slash>>NgayGiaoDich.thang>>slash>>NgayGiaoDich.nam;
    cout<< "Nhap don gia: ";
    cin>>DonGia;
    cout<< "Nhap dien tich: ";
    cin>>DienTich;
}

void CGiaoDich::Xuat(){
    cout<<"Ma giao dich: "<<MaGiaoDich<<"\t";
    cout<< "Ngay giao dich: ";
    cout<<setfill('0')<<setw(2)<<NgayGiaoDich.ngay<<"/";
    cout<<setfill('0')<<setw(2)<<NgayGiaoDich.thang<<"/";
    cout<<setfill('0')<<setw(4)<<NgayGiaoDich.nam<<"\t";
    cout<<fixed<<setprecision(0)<<"Don gia: "<<DonGia<<"\t";
    cout<< "Dien tich: "<<DienTich<<"\t";
}

Date CGiaoDich::getNgayGiaoDich(){return NgayGiaoDich;}

double CGiaoDich::getThanhTien(){return ThanhTien;}