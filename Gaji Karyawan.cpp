#include <iostream>
using namespace std;

int anak,jabatan, gaji[5]={0,3000000,2500000,2000000,1500000};
int tunjangan[5]={0,5000000,3000000,2000000,500000};
string nama,induk;
char jwb;

void hitung();
void data();


int main(){
    fitur:
    cout<<"   Selamat Datang Di Program Penghitung Gaji\n";
    cout<<"   =========================================\n\n";
    cout<<"   Jabatan Perusahaan\n";
    cout<<"   1. Direktur Perusahaan\n";
    cout<<"   2. Senior Manager\n";
    cout<<"   3. Manager Perusahaan\n";
    cout<<"   4. Staf Perusahaan\n";
    cout<<"   Pilih Angka Sesuai Jabatan Anda : ";
    cin>>jabatan;
    switch(jabatan){
        case 1:
            hitung();
            break;
        case 2:
            hitung();
            break;
        case 3:
            hitung();
            break;
        case 4:
            hitung();
            cin.ignore();
            cout<<"\n\n   Tekan Enter untuk kembali ke menu awal";
            cin.get();
            system("cls");
        goto fitur;
            break;
    }
}
void hitung(){
    int gaji_ktr1 = gaji[jabatan]+tunjangan[jabatan];
    int istri1=(0.1)*gaji[jabatan];
    int potongan = 0.05 * gaji[jabatan];
    
    data();
       
    if(jwb=='y'&& anak==1){
        int anak1= 0.05 * gaji[jabatan];
        cout<<"\n   Atas Nama "<<nama<<endl;
        cout<<"   Telah Menikah"<<endl;
        cout<<"   Tanggungan Anak "<<anak<<endl;
        cout<<"   Gaji Kotor "<<gaji_ktr1<<endl;
        cout<<"   Tunjangan "<<istri1+ anak1<<endl;
        cout<<"   Gaji Bersih "<<(gaji_ktr1 + istri1 + anak1) - potongan<<"  dipotong 5% Pajak Penghasilan";
    }else if(jwb=='y'&& anak>1){
        int anak2= 0.1 * gaji[jabatan];
        cout<<"\n   Atas Nama "<<nama<<endl;
        cout<<"   Telah Menikah"<<endl;
        cout<<"   Tanggungan Anak "<<anak<<endl;
        cout<<"   Gaji Kotor "<<gaji_ktr1<<endl;
        cout<<"   Tunjangan "<<istri1+ anak2<<endl;
        cout<<"   Gaji Bersih "<<(gaji_ktr1 + istri1 + anak2) - potongan<<"  dipotong 5% Pajak Penghasilan";      
    }else if(jwb=='y' && anak==0){
        int anakx= 0 * gaji[jabatan];
        cout<<"\n   Atas Nama "<<nama<<endl;
        cout<<"   Telah Menikah"<<endl;
        cout<<"   Tanggungan Anak "<<anakx<<endl;
        cout<<"   Gaji Kotor "<<gaji_ktr1<<endl;
        cout<<"   Total Tunjangan "<<istri1+ anakx<<endl;
        cout<<"   Gaji Bersih "<<(gaji_ktr1 + istri1+ anakx) - potongan<<"  dipotong 5% Pajak Penghasilan";      
    }else if(jwb=='t'&&anak==0){
         int anakx= 0 * gaji[jabatan];
        cout<<"\n   Atas Nama "<<nama<<endl;
        cout<<"   Telah Menikah"<<endl;
        cout<<"   Tanggungan Anak "<<anakx<<endl;
        cout<<"   Gaji Kotor "<<gaji_ktr1<<endl;
        cout<<"   Total Tunjangan "<<(istri1*0)+ anakx<<endl;
        cout<<"   Gaji Bersih "<<(gaji_ktr1 + (istri1*0) + anakx) - potongan<<"  dipotong 5% Pajak Penghasilan";  
    }
        
}
void data(){
    cin.ignore();
    cout<<"\n   Inputkan Nama Anda \t\t\t: ";
    getline(cin,nama);
    cout<<"   Inputkan Nomer Induk Pekerja \t: ";
    getline(cin,induk);
    cout<<"   Status Menikah (y/t) \t\t: ";
    cin>>jwb;
    cout<<"   Jumlah Anak (isi 0 jika tidak ada) \t: ";
    cin>>anak;
}