#include "CQuanLyGiaoDich.h"

CQuanLyGiaoDich::CQuanLyGiaoDich(): N(0) {}

CQuanLyGiaoDich::~CQuanLyGiaoDich() {
    for (int i = 0; i < N; i++) {
        delete dsGiaoDich[i]; 
    }
    dsGiaoDich.clear(); 
}

void CQuanLyGiaoDich::Nhap(){
    cout<< "Nhap danh sach giao dich:\n";
    cout<< "Nhap so luong giao dich: ";
    cin>>N;

    int loai;
    for(int i=0;i<N;i++){
        cout<< "\nNhap giao dich thu "<<i+1<<": ";
        cout<< "\nNhap loai giao dich (0: Dat, 1: Nha pho, 2: Can ho chung cu): ";
        cin>>loai;
        CGiaoDich* gd;
        if(loai==0)
            gd= new CGiaoDichDat();
        else if(loai==1)
            gd= new CGiaoDichNhaPho();
        else if(loai==2)
            gd= new CGiaoDichChungCu();
        else {
            cout<< "Loai giao dich khong hop le. Nhap lai\n";
            i--; // Giảm i để nhập lại giao dịch
        }

        gd->Nhap(); //Nhập thông tin giao dịch tương ứng, gọi hàm Nhap() của lớp con nhờ tính đa hình
        dsGiaoDich.push_back(gd); 
    }
}

void CQuanLyGiaoDich::Xuat(){
    cout<< "\nDanh sach giao dich:\n";
    for(int i=0;i<N;i++){
        cout<<i+1<<". ";
        dsGiaoDich[i]->Xuat(); // Xuất thông tin giao dịch tương ứng, gọi hàm Xuat() của lớp con nhờ tính đa hình
    }
}

void CQuanLyGiaoDich::TinhTongSoLuongTungLoai(){
    int dat=0, nhaPho=0, chungCu=0;
    for(int i=0;i<N;i++){
        if(dynamic_cast<CGiaoDichDat*>(dsGiaoDich[i])!=nullptr)
            dat++;
        else if(dynamic_cast<CGiaoDichNhaPho*>(dsGiaoDich[i])!=nullptr)
            nhaPho++;
        else if(dynamic_cast<CGiaoDichChungCu*>(dsGiaoDich[i])!=nullptr)
            chungCu++;
    }
    cout<< "\nTong so luong tung loai giao dich:\n";
    cout<< "Giao dich Dat: "<<dat<<"\n";
    cout<< "Giao dich Nha pho: "<<nhaPho<<"\n";
    cout<< "Giao dich Can ho chung cu: "<<chungCu<<"\n";
}

double CQuanLyGiaoDich::TinhTrungBinhThanhTienChungCu(){
    double sum=0;
    int count=0;
    for(int i=0;i<N;i++){
        if(dynamic_cast<CGiaoDichChungCu*>(dsGiaoDich[i])!=nullptr){
            sum+= dsGiaoDich[i]->getThanhTien();
            count++;
        }
    }
    return (count>0 ? sum/count : 0); //Trả về 0 nếu không có giao dịch chung cư nào, tránh được chia cho 0
}

CGiaoDich* CQuanLyGiaoDich::TimNhaPhoGiaCaoNhat(){
    CGiaoDich* GDNPMaxGia=nullptr;
    for(int i=0;i<N;i++){
        if(dynamic_cast<CGiaoDichNhaPho*>(dsGiaoDich[i])!=nullptr){
            if(GDNPMaxGia==nullptr || dsGiaoDich[i]->getThanhTien() > GDNPMaxGia->getThanhTien())
                GDNPMaxGia= dsGiaoDich[i];
        }
    }
    return GDNPMaxGia;
}

void CQuanLyGiaoDich::XuatDSGiaoDichThang12Nam2024(){
    cout<< "\nDanh sach giao dich thang 12 nam 2024:\n";
    int dem=0;
    for(int i=0;i<N;i++){
        Date d= dsGiaoDich[i]->getNgayGiaoDich();
        if(d.thang==12 && d.nam==2024){
            cout<<dem+1<<". ";
            dsGiaoDich[i]->Xuat();
            dem++;
        }
    }
    if(dem==0)
    cout<< "khong co giao dich nao phat sinh trong thang 12 nam 2024\n";
}