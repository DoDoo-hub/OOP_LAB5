#include "CQuanLySinhVien.h"
#include <iostream>
using namespace std;

int main(){
    CQuanLySinhVien qlSV;

    //Nhập/Xuất danh sách sinh viên
    qlSV.Nhap();
    qlSV.Xuat();

    //Xuất danh sách SV đủ/không đủ điều kiện tốt nghiệp
    qlSV.dsSinhVienDuDieuKienTotNghiep();
    qlSV.dsSinhVienKhongDuDieuKienTotNghiep();

    //Tìm SV đại học/cao đẳng có DTB cao nhất
    CSinhVien* DTBCaoNhatDH= qlSV.SinhVienDaiHocDTBCaoNhat();
    CSinhVien* DTBCaoNhatCD= qlSV.SinhVienCaoDangDTBCaoNhat();
    if(DTBCaoNhatDH==nullptr)
        cout<< "\nKhong co sinh vien dai hoc nao de tim DTB cao nhat\n";
    else {
        cout<< "\nSinh vien dai hoc co DTB cao nhat:\n";
        DTBCaoNhatDH->Xuat();
    }
    if(DTBCaoNhatCD==nullptr)
        cout<< "\nKhong co sinh vien cao dang nao de tim DTB cao nhat\n";
    else {
        cout<< "\nSinh vien cao dang co DTB cao nhat:\n";
        DTBCaoNhatCD->Xuat();
    }


    //Với mỗi loại, cho biết số lượng SV không đủ điều kiện tốt nghiệp
    pair<int,int> KDDKTN= qlSV.DemSVKhongDuDieuKienTotNghiepMoiLoai();
    cout<< "\nSo luong sinh vien cao dang khong du dieu kien tot nghiep: "<<KDDKTN.first;
    cout<< "\nSo luong sinh vien dai hoc khong du dieu kien tot nghiep: "<<KDDKTN.second;

    return 0;
}
