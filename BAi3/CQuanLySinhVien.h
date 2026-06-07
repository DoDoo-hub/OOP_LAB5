#ifndef CQUANLYSINHVIEN_H
#define CQUANLYSINHVIEN_H
#include "CSinhVienCaoDang.h"
#include "CSinhVienDaiHoc.h"
#include <vector>
#include <iostream>
using namespace std;

class CQuanLySinhVien
{
    private:
        int N; // Số lượng sinh viên
        vector<CSinhVien*> dsSinhVien;

    public:
        CQuanLySinhVien();
        ~CQuanLySinhVien();

        void Nhap();
        void Xuat();

        void dsSinhVienDuDieuKienTotNghiep(); //Xuất danh sách sinh viên đủ điều kiện tốt nghiệp
        void dsSinhVienKhongDuDieuKienTotNghiep();//Xuất danh sách sinh viên không đủ điều kiện tốt nghiệp

        //Trả về con trỏ đến sinh viên đại học(đầu tiên nếu trùng điểm) có DTB cao nhất
        //hoặc nullptr nếu không có sinh viên đại học nào
        CSinhVien* SinhVienDaiHocDTBCaoNhat();

        //Trả về con trỏ đến sinh viên cao đẳng(đầu tiên nếu trùng điểm) có DTB cao nhất
        //nullptr nếu không có sinh viên cao đẳng nào
        CSinhVien* SinhVienCaoDangDTBCaoNhat();

        //Trả về cặp số lượng SV cao đẳng và đại học không đủ điều kiện tốt nghiệp
        pair<int,int> DemSVKhongDuDieuKienTotNghiepMoiLoai();
};

#endif // CQUANLYSINHVIEN_H;


