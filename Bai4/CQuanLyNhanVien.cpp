#include "CQuanLyNhanVien.h"
#include <iomanip>

CQuanLyNhanVien::CQuanLyNhanVien():N(0){
}

CQuanLyNhanVien::~CQuanLyNhanVien(){
    for(CNhanVien* nv: dsNhanVien)
        delete nv;
    dsNhanVien.clear();
}

void CQuanLyNhanVien::Nhap(){
    cout<< "Nhap danh sach nhan vien:\n";
    cout<< "Nhap so luong nhan vien: ";
    cin>>N;

    int loai;
    CNhanVien* nv;
    for(int i=0;i<N;i++){
        cout<< "\nNhap nhan vien thu "<<i+1<<" :\n";
        cout<< "Nhap loai nhan vien (0: Lap trinh vien, 1: Kiem chung vien): ";
        cin>>loai;
        if(loai==0)
            nv= new CLapTrinhVien();
        else
            nv= new CKiemChungVien();
        nv->Nhap(); //Nhập NV tương ứng, gọi hàm Nhap() của lớp con nhờ tính đa hình
        dsNhanVien.push_back(nv);
    }
}

void CQuanLyNhanVien::Xuat(){
    cout<< "\nDanh sach nhan vien:\n";
    for(int i=0;i<N;i++){
        cout<<i+1<<". ";
        dsNhanVien[i]->Xuat(); //Xuất NV tương ứng, gọi hàm Xuat() của lớp con nhờ tính đa hình
    }
}

double CQuanLyNhanVien::TinhLuongTrungBinh(){ //Trả về mức lương trung bình của các NV trong công ty
    double tongLuong=0;
    for(int i=0;i<N;i++)
        tongLuong+=dsNhanVien[i]->TinhLuong();
    return tongLuong/N;
}

//Xuất danh sách các NV có lương thấp hơn mức lương trung bình của các NV trong công ty
void CQuanLyNhanVien::XuatDSLuongThapHonTrungBinh(){  
    double LuongTB= TinhLuongTrungBinh();
    cout<<"\nDanh sach nhan vien co luong thap hon muc luong trung binh ("
    <<fixed<<setprecision(0)<<LuongTB<<" VND):\n";

    int tmp=0;
    for(int i=0;i<N;i++){
        if(dsNhanVien[i]->TinhLuong() < LuongTB){
            cout<<tmp+1<<". ";
            dsNhanVien[i]->Xuat();
            tmp++;
        }
    }
    if(tmp==0)
        cout<< "Khong co nhan vien nao co luong thap hon muc luong trung binh\n";
}

//Trả về con trỏ đến NV có lương cao nhất(đầu tiên nếu trùng lương) trong công ty
CNhanVien* CQuanLyNhanVien::TimNVMaxLuong(){
    CNhanVien* nvMaxLuong= dsNhanVien[0];
    for(int i=1;i<N;i++){
        if(dsNhanVien[i]->TinhLuong() > nvMaxLuong->TinhLuong())
            nvMaxLuong= dsNhanVien[i];
    }
    return nvMaxLuong;
}

//Trả về con trỏ đến NV có lương thấp nhất(đầu tiên nếu trùng lương) trong công ty
CNhanVien* CQuanLyNhanVien::TimNVMinLuong(){
    CNhanVien* nvMinLuong= dsNhanVien[0];
    for(int i=1;i<N;i++){
        if(dsNhanVien[i]->TinhLuong() < nvMinLuong->TinhLuong())
            nvMinLuong= dsNhanVien[i];
    }
    return nvMinLuong;
}

//Trả về con trỏ đến lập trình viên có lương cao nhất(đầu tiên nếu trùng lương) trong công ty
// hoặc nullptr nếu không có lập trình viên nào
CNhanVien* CQuanLyNhanVien::TimLTVMaxLuong(){
    CNhanVien* ltvMaxLuong= nullptr;
    for(int i=0;i<N;i++){
        if(dynamic_cast<CLapTrinhVien*>(dsNhanVien[i]) != nullptr){
            if(ltvMaxLuong==nullptr || dsNhanVien[i]->TinhLuong() > ltvMaxLuong->TinhLuong()){
                ltvMaxLuong= dsNhanVien[i];
            }
        }
    }
    return ltvMaxLuong;
}
        
//Trả về con trỏ đến kiểm chứng viên có lương thấp nhất(đầu tiên nếu trùng lương) trong công ty
// hoặc nullptr nếu không có kiểm chứng viên nào
CNhanVien* CQuanLyNhanVien::TimKCVMinLuong(){
    CNhanVien* kcvMinLuong= nullptr;
    for(int i=0;i<N;i++){
        if(dynamic_cast<CKiemChungVien*>(dsNhanVien[i]) != nullptr){
            if(kcvMinLuong==nullptr || dsNhanVien[i]->TinhLuong() < kcvMinLuong->TinhLuong()){
                kcvMinLuong= dsNhanVien[i];
            }
        }
    }
    return kcvMinLuong;
}



