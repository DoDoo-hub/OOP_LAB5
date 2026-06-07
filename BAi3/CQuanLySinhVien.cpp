#include "CQuanLySinhVien.h"

CQuanLySinhVien::CQuanLySinhVien():N(0){}

CQuanLySinhVien::~CQuanLySinhVien(){
    for(CSinhVien* sv: dsSinhVien){
        delete sv;
    }
    dsSinhVien.clear();
}

void CQuanLySinhVien::Nhap(){
    cout<< "Nhap danh sach sinh vien:\n";
    cout<< "Nhap so luong sinh vien: ";
    cin>>N;

    int loai;
    CSinhVien* sv;
    for(int i=0;i<N;i++){
        cout<< "\nNhap sinh vien thu "<<i+1<<" :\n";
        cout<< "Nhap loai sinh vien (0: Cao dang, 1: Dai hoc): ";
        cin>>loai;
        if(loai==0)
            sv= new CSinhVienCaoDang();
        else
            sv= new CSinhVienDaiHoc();
        sv->Nhap(); //Nhập SV tương ứng, gọi hàm Nhap() của lớp con nhờ tính đa hình
        dsSinhVien.push_back(sv);
    }
}

void CQuanLySinhVien::Xuat(){
    cout<< "\nDanh sach sinh vien:\n";
    for(int i=0;i<N;i++){
        cout<<i+1<<". ";
        dsSinhVien[i]->Xuat(); //Xuất SV tương ứng, gọi hàm Xuat() của lớp con nhờ tính đa hình
    }
}

//Xuất danh sách sinh viên đủ điều kiện tốt nghiệp
void CQuanLySinhVien::dsSinhVienDuDieuKienTotNghiep(){
    cout<<"\nDanh sach sinh vien du dieu kien tot nghiep:\n";
    int tmp=0;
    for(int i=0;i<N;i++){
        if(dsSinhVien[i]->XetTotNghiep() == true){
            cout<<tmp+1<<". ";
            dsSinhVien[i]->Xuat();
            tmp++;
        }
    }
    if(tmp==0)
        cout<< "Khong co sinh vien nao du dieu kien tot nghiep\n";
}

//Xuất danh sách sinh viên không đủ điều kiện tốt nghiệp
void CQuanLySinhVien::dsSinhVienKhongDuDieuKienTotNghiep(){
    cout<<"\nDanh sach sinh vien khong du dieu kien tot nghiep:\n";
    int tmp=0;
    for(int i=0;i<N;i++){
        if(dsSinhVien[i]->XetTotNghiep() == false){
            cout<<tmp+1<<". ";
            dsSinhVien[i]->Xuat();
            tmp++;
        }
    }
    if(tmp==0)
        cout<< "Khong co sinh vien nao khong du dieu kien tot nghiep\n";
}

//Trả về con trỏ đến sinh viên đại học(đầu tiên nếu trùng điểm) có DTB cao nhất
//hoặc nullptr nếu không có sinh viên đại học nào
CSinhVien* CQuanLySinhVien::SinhVienDaiHocDTBCaoNhat(){
    CSinhVien* SVMaxDTB= nullptr;
    for(int i=0;i<N;i++){
        if(dynamic_cast<CSinhVienDaiHoc*>(dsSinhVien[i]) != nullptr){
            if(SVMaxDTB==nullptr || dsSinhVien[i]->getDTB() > SVMaxDTB->getDTB())
                SVMaxDTB= dsSinhVien[i];
        }
    }
    return SVMaxDTB;
}

//Trả về con trỏ đến sinh viên cao đẳng(đầu tiên nếu trùng điểm) có DTB cao nhất
//hoặc nullptr nếu không có sinh viên cao đẳng nào
CSinhVien* CQuanLySinhVien::SinhVienCaoDangDTBCaoNhat(){
    CSinhVien* SVMaxDTB= nullptr;
    for(int i=0;i<N;i++){
        if(dynamic_cast<CSinhVienCaoDang*>(dsSinhVien[i]) != nullptr){
            if(SVMaxDTB==nullptr || dsSinhVien[i]->getDTB() > SVMaxDTB->getDTB())
                SVMaxDTB= dsSinhVien[i];
        }
    }
    return SVMaxDTB;
}

//Trả về cặp số lượng SV cao đẳng và đại học không đủ điều kiện tốt nghiệp
//first: số lượng SV cao đẳng không đủ điều kiện tốt nghiệp,
//second: số lượng SV đại học không đủ điều kiện tốt nghiệp
pair<int,int> CQuanLySinhVien::DemSVKhongDuDieuKienTotNghiepMoiLoai(){
    int countCD=0, countDH=0;
    for(int i=0;i<N;i++){
        if(dsSinhVien[i]->XetTotNghiep()==false){
            if(dynamic_cast<CSinhVienCaoDang*>(dsSinhVien[i]) != nullptr)
                countCD++;
            else if(dynamic_cast<CSinhVienDaiHoc*>(dsSinhVien[i]) != nullptr)
                countDH++;
        }
    }
    pair<int,int> kq = {countCD,countDH};
    return kq;
}

