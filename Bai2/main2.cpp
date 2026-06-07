#include <iostream>
#include "CQuanLyGiaoDich.h"
using namespace std;

int main(){
    CQuanLyGiaoDich ql;
    // Nhập, xuất danh sách giao dịch
    ql.Nhap();
    ql.Xuat();

    // Tính tổng số lượng cho từng loại giao dich
    ql.TinhTongSoLuongTungLoai();

    // Tính trung bình thành tiền của giao dịch Căn hộ chung cư 
    double tbThanhTienChungCu= ql.TinhTrungBinhThanhTienChungCu();
    if(tbThanhTienChungCu==0)
    cout<< "\nKhong co giao dich chung cu nao de tinh trung binh thanh tien\n";
    else 
    cout<< "\nTrung binh thanh tien cua giao dich Can ho chung cu: "<<tbThanhTienChungCu<<"\n";

    // Cho biết Giao dịch Nhà phố có trị giá cao nhất 
    CGiaoDich* gdNhaPhoGiaCaoNhat= ql.TimNhaPhoGiaCaoNhat();
    if(gdNhaPhoGiaCaoNhat==nullptr)
        cout<< "\nKhong co giao dich nha pho nao de tim gia cao nhat\n";
    else {
        cout<< "\nGiao dich nha pho co tri gia cao nhat:\n";
        gdNhaPhoGiaCaoNhat->Xuat();
    }

    //Xuất ra danh sách các giao dịch của tháng 12 năm 2024
    ql.XuatDSGiaoDichThang12Nam2024();

    return 0;
}
