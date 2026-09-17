#include <iostream>
using namespace std;
class ConNguoi
{
protected:
    string ten;
    int tuoi;

public:
    ConNguoi(string tenBanDau, int tuoiBanDau)
    {
        ten = tenBanDau;
        tuoi = tuoiBanDau;
        cout << "[ConNguoi] Constructor chay, khoi tao ten: " << ten << endl;
    }
    void gioiThieu()
    {
        cout << "Ten la " << ten << ", " << tuoi << " tuoi" << endl;
    }
};
class NhanVien : public ConNguoi
{
public:
    double luong;
    NhanVien(string tenBanDau, int tuoiBanDau, double luongBanDau) : ConNguoi(tenBanDau, tuoiBanDau)
    {
        luong = luongBanDau;
        cout << "[NhanVien] Constructor chay, khoi tao luong: " << luong << endl;
    }
    void lamViec()
    {
        cout << ten << " dang lam viec, luong thang: " << luong << endl;
    }
};
    class QuanLy : public NhanVien
    {
    public:
        int soNhanVienQuanLy;
        QuanLy(string tenBanDau, int tuoiBanDau, double luongBanDau, int soNhanVienBanDau) : NhanVien(tenBanDau, tuoiBanDau, luongBanDau)
        {
            soNhanVienQuanLy = soNhanVienBanDau;
            cout << "[QuanLy] Constructor chay, khoi tao so nhan vien: " << soNhanVienQuanLy << endl;
        }
        void quanLyNhom()
        {
            cout << ten << " dang quan ly " << soNhanVienQuanLy << " nhan vien, luong quan ly: " << luong << endl;
        }
    };

int main()
{
    cout << "Bat dau tao doi tuong QuanLy:" << endl;
    QuanLy ql("Nguyen Chi Huy", 19, 10000000, 8);
    cout << "\n----Su dung doi tuong ----" << endl;
    ql.gioiThieu();
    ql.lamViec();
    ql.quanLyNhom();
    return 0;
}