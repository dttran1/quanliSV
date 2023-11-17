#include <iostream>
#include <iomanip>
using namespace std;

// Bai 7:

struct diem {
    double toan,ly,anh,tb;
};

int main(){
    int n;
    cout<<"Nhap so luong sinh vien: ";
    cin>>n;
    cout<<setprecision(1)<<fixed;
    diem a[n];
    int b[n];
    for(int i = 0;i<n;i++){
        cin>>a[i].toan>>a[i].ly>>a[i].anh;
        a[i].tb = (a[i].toan+a[i].ly+a[i].anh)/3;
    }
    cout<<"Sap xep theo diem toan : "<<endl;
    cout<<"                   Toan       Ly      Anh"<<endl;
    for(int i = 0;i<n;i++) b[i] = 1;
    double ln = -1;
    int j = 0;
    for(int i = 0;i<n;i++){
        for(int k = 0;k<n;k++){
            if (b[k]==1&&a[k].toan>ln){
                ln = a[k].toan;
                j = k;
            }
        }
        b[j]=0;
        ln = -1;
        cout<<"Sinh vien "<<j+1;
        if(j+1<10){
            if(a[j].toan<10) cout<<"         "<<a[j].toan;
            else             cout<<"        "<<a[j].toan;
            if(a[j].ly<10)   cout<<"      "<<a[j].ly;
            else             cout<<"     "<<a[j].ly;
            if(a[j].anh<10)  cout<<"      "<<a[j].anh<<endl;
            else             cout<<"     "<<a[j].anh<<endl;
        }

        else if(j+1<100){
            if(a[j].toan<10) cout<<"        "<<a[j].toan;
            else             cout<<"       "<<a[j].toan;
            if(a[j].ly<10)   cout<<"      "<<a[j].ly;
            else             cout<<"     "<<a[j].ly;
            if(a[j].anh<10)  cout<<"      "<<a[j].anh<<endl;
            else             cout<<"     "<<a[j].anh<<endl;
        }
    }
    cout<<"Sap xep theo diem anh : "<<endl;
    cout<<"                   Toan       Ly      Anh"<<endl;
    for(int i = 0;i<n;i++) b[i] = 1;
    ln = -1;
    j = 0;
    for(int i = 0;i<n;i++){
        for(int k = 0;k<n;k++){
            if (b[k]==1&&a[k].anh>ln){
                ln = a[k].anh;
                j = k;
            }
        }
        b[j]=0;
        ln = -1;
        cout<<"Sinh vien "<<j+1;
        if(j+1<10){
            if(a[j].toan<10) cout<<"         "<<a[j].toan;
            else             cout<<"        "<<a[j].toan;
            if(a[j].ly<10)   cout<<"      "<<a[j].ly;
            else             cout<<"     "<<a[j].ly;
            if(a[j].anh<10)  cout<<"      "<<a[j].anh<<endl;
            else             cout<<"     "<<a[j].anh<<endl;
        }

        else if(j+1<100){
            if(a[j].toan<10) cout<<"        "<<a[j].toan;
            else             cout<<"       "<<a[j].toan;
            if(a[j].ly<10)   cout<<"      "<<a[j].ly;
            else             cout<<"     "<<a[j].ly;
            if(a[j].anh<10)  cout<<"      "<<a[j].anh<<endl;
            else             cout<<"     "<<a[j].anh<<endl;
        }
    }
    cout<<"Sap xep theo diem trung binh : "<<endl;
    cout<<"                     TB     Toan       Ly      Anh"<<endl;
    for(int i = 0;i<n;i++) b[i] = 1;
    ln = -1;
    j = 0;
    for(int i = 0;i<n;i++){
        for(int k = 0;k<n;k++){
            if (b[k]==1&&a[k].tb>ln){
                ln = a[k].tb;
                j = k;
            }
        }
        b[j]=0;
        ln = -1;
        cout<<"Sinh vien "<<j+1;
        if(j+1<10){
            if(a[j].tb<10)   cout<<"         "<<a[j].tb;
            else             cout<<"        "<<a[j].tb;
            if(a[j].toan<10) cout<<"      "<<a[j].toan;
            else             cout<<"     "<<a[j].toan;
            if(a[j].ly<10)   cout<<"      "<<a[j].ly;
            else             cout<<"     "<<a[j].ly;
            if(a[j].anh<10)  cout<<"      "<<a[j].anh<<endl;
            else             cout<<"     "<<a[j].anh<<endl;
        }

        else if(j+1<100){
            if(a[j].tb<10)   cout<<"        "<<a[j].tb;
            else             cout<<"       "<<a[j].tb;
            if(a[j].toan<10) cout<<"      "<<a[j].toan;
            else             cout<<"     "<<a[j].toan;
            if(a[j].ly<10)   cout<<"      "<<a[j].ly;
            else             cout<<"     "<<a[j].ly;
            if(a[j].anh<10)  cout<<"      "<<a[j].anh<<endl;
            else             cout<<"     "<<a[j].anh<<endl;
        }
    }
    return 0;
}



