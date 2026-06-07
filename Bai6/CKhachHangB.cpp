#include "CKhachHangB.h"

CKhachHangB::CKhachHangB(): CKhachHang(), SoNamThanThiet(0){}

void CKhachHangB::NhapTuFile(ifstream& ifs){
    CKhachHang::NhapTuFile(ifs); // Gọi hàm nhập chung từ lớp cha
    ifs>>SoNamThanThiet; // Nhập thêm số năm thân thiết
}

//Phần trăm khuyến mãi = MAX (Số năm thân thiết * 5%, 50%) 
//Số tiền khách hàng trả = (Số lượng hàng * đơn giá hàng) * (100% - Phần trăm khuyến mãi) + Thuế VAT (10%) 
double CKhachHangB::TinhTienPhaiTra(){
    double PhanTramKhuyenMai= max(SoNamThanThiet*0.05, 0.5);
    return ((SoLuong*DonGia) * (1.0-PhanTramKhuyenMai)) * 1.1;
}

