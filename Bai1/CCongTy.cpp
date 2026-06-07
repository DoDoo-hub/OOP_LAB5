#include "CCongTy.h"

CCongTy::CCongTy(){}

CCongTy::~CCongTy()
{
    for(int i=0;i<dsNhanVien.size();i++)
    {
        delete dsNhanVien[i];
    }
    dsNhanVien.clear();
}

void CCongTy::Nhap(){ 
    cout<< "Nhap danh sach nhan vien cua cong ty: \n";
    cout<< "Nhap so luong nhan vien: ";
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int loai;
        cout<< "\nNhap nhan vien thu "<<i+1<<" :";
        cout<< "\nNhap loai nhan vien (0: Nhan vien san xuat, 1: Nhan vien van phong): ";
        cin>>loai;
        CNhanVien* nv;
        if(loai==0)
            nv= new CNhanVienSX(); 
        else
            nv= new CNhanVienVP();
        nv->Nhap(); //Nhập thông tin NV tương ứng, gọi hàm Nhap() của lớp con nhờ tính đa hình
        dsNhanVien.push_back(nv);
    }
}

void CCongTy::Xuat(){
    cout<< "\nDanh sach nhan vien: "<<endl;
    for(int i=0;i<dsNhanVien.size();i++)
    {
        cout<<i+1<<". ";
        dsNhanVien[i]->Xuat(); //Xuất thông tin NV tương ứng, gọi hàm Xuat() của lớp con nhờ tính đa hình
    }
}

double CCongTy::TinhTongLuong(){
    double Sum=0;
    for(int i=0;i<dsNhanVien.size();i++)
    {
        Sum+= dsNhanVien[i]->TinhLuong();  
    }
    return Sum;
}

// Tìm NVSX lương thấp nhất(ưu tiên người lương thấp nhất đầu tiên)
CNhanVien* CCongTy::TimNVSXLuongThapNhat(){
    CNhanVien* NVSXMinLuong= nullptr;
    for(int i=0;i<dsNhanVien.size();i++){
        if(dynamic_cast<CNhanVienSX*>(dsNhanVien[i]) != nullptr){
            if(NVSXMinLuong==nullptr || dsNhanVien[i]->TinhLuong() < NVSXMinLuong->TinhLuong()){
                NVSXMinLuong = dsNhanVien[i];
            }
        }
    }
    return NVSXMinLuong;// Trả về con trỏ đến NVSX lương thấp nhất, hoặc nullptr nếu không có NVSX nào
}

// Tìm NVVP tuổi cao nhất(ưu tiên người lớn tuổi nhất đầu tiên)
//bằng cách so sánh ngày sinh bằng toán tử < nạp chồng trong Date
// NgaySinh nhỏ hơn nghĩa là lớn tuổi hơn
CNhanVien* CCongTy::TimNVVPTuoiCaoNhat(){
    CNhanVien* NVVPMaxTuoi= nullptr;
    for(int i=0;i<dsNhanVien.size();i++){
        if(dynamic_cast<CNhanVienVP*>(dsNhanVien[i]) != nullptr){
            if(NVVPMaxTuoi==nullptr || dsNhanVien[i]->getNgaySinh() < NVVPMaxTuoi->getNgaySinh()){ 
                NVVPMaxTuoi = dsNhanVien[i];
            }
        }
    }
    return NVVPMaxTuoi;// Trả về con trỏ đến NVVP tuổi cao nhất, hoặc nullptr nếu không có NVVP nào
}