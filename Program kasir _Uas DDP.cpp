#include <iostream>

using namespace std;

int main()
{
    int p,b,k,j_m,j_d,harga_m,harga_d,diskon,total_pembayaran,d,harga_n;
    
    cout<<"=======>KASIR RUMAH MAKAN PASTI KENYANG<======="<<"\n\n";
    cout<<"\t----MENU----"<<"\n";
    cout<<"Makanan                  Harha"<<"\n\n";
    cout<<"1. Bakso biasa           = 10.000\n";
    cout<<"2. Bakso telur           = 15.000\n";
    cout<<"3. Bakso urat            = 20.000\n";
    cout<<"4. Bakso lava            = 25.000\n";
    cout<<"5. Soto Ayam             = 10.000\n";
    cout<<"6. Nasi goreng           = 13.000\n";
    cout<<"7. Nasi goreng seafood   = 20.000\n";
    cout<<"8. Ayam geprek           = 15.000\n";
    cout<<"9. Nasi ayam goreng      = 17.000\n";
    cout<<"10. Mie setan            = 10.000\n\n";
    cout<<"Minuman                  Harga\n\n";
    cout<<"1. Teh panas/dingin      = 5.000\n";
    cout<<"2. Kopi panas/dingin     = 7.000\n";
    cout<<"3. Es jeruk              = 6.000\n";
    cout<<"4. Soda                  = 8.000\n";
    cout<<"5. Air putih             = 3.000\n";
    cout<<"6. Aneka jus             = 7.000\n\n";
    cout<<"Pilih nomor makanan      : ";
    cin>>p;
    cout<<"Pilih nomor minuman      : ";
    cin>>d;
    cout<<endl;
    switch(p){
    case 1 :
        harga_m=10000;
        cout<<"Masukan jumlah makanan : ";
        cin>>j_m;
        break;
    case 2 :
        harga_m=15000;
        cout<<"Masukan jumlah makanan : ";
        cin>>j_m;
        break;
    case 3 :
        harga_m=20000;
        cout<<"Masukan jumlah makanan : ";
        cin>>j_m;
        break;
    case 4 :
        harga_m=25000;
        cout<<"Masukan jumlah makanan : ";
        cin>>j_m;
        break;
    case 5 :
        harga_m=10000;
        cout<<"Masukan jumlah makanan : ";
        cin>>j_m;
        break;
    case 6 :
        harga_m=13000;
        cout<<"Masukan jumlah makanan : ";
        cin>>j_m;
        break;
    case 7 :
        harga_m=20000;
        cout<<"Masukan jumlah makanan : ";
        cin>>j_m;
        break;
    case 8 :
        harga_m=15000;
        cout<<"Masukan jumlah makanan : ";
        cin>>j_m;
        break;
    case 9 :
        harga_m=17000;
        cout<<"Masukan jumlah makanan : ";
        cin>>j_m;
        break;
    case 10 :
        harga_m=10000;
        cout<<"Masukan jumlah makanan : ";
        cin>>j_m;
        break;
    
    }
    switch(d){
    case 1 :
        harga_d=5000;
        cout<<"masukan jumlah minuman : ";
        cin>>j_d;
        break;
    case 2 :
        harga_d=7000;
        cout<<"masukan jumlah minuman : ";
        cin>>j_d;
        break;
    case 3 :
        harga_d=6000;
        cout<<"masukan jumlah minuman : ";
        cin>>j_d;
        break;
    case 4 :
        harga_d=8000;
        cout<<"masukan jumlah minuman : ";
        cin>>j_d;
        break;
    case 5 :
        harga_d=3000;
        cout<<"masukan jumlah minuman : ";
        cin>>j_d;
        break;
     case 6 :
        harga_d=7000;
        cout<<"masukan jumlah minuman : ";
        cin>>j_d;
        break;
    }
    cout<<endl;
    harga_n=harga_m*j_m+harga_d*j_d;
   if(harga_n>=50000){
       diskon=harga_n*10/100;
       cout<<"Anda mendapatkan diskon sebanyak 10%\n";
   }
   else if (harga_n<50000){
       diskon=harga_n*0;
   }
    total_pembayaran=harga_n-diskon;
        cout<<"Harga total : Rp."<<total_pembayaran<<"\n";
        cout<<"Jumlah uang : Rp.";
        cin>>b;
        k=b-total_pembayaran;
        cout<<"\nKembalian : Rp."<<k<<"\n\n";
    
    cout<<"=======================================================\n";
    cout<<"\tRUMAH MAKAN PASTI KEYANG\n";
    cout<<"\tSTRUK PEMBAYARAN\n";
    cout<<"=======================================================\n";
    cout<<"Nomor makanan                : "<<p<<endl;
    cout<<"Jumlah makanan               : "<<j_m<<endl;
    cout<<"Nomor minuman                : "<<d<<endl;
    cout<<"Jumlah Minuman               : "<<j_d<<endl;
    cout<<"                             ---------------------------\n";
    cout<<"Harga jual                   : "<<harga_n<<endl;
    if(harga_n>=50000){
       diskon=harga_n*10/100;
    cout<<"Potongan harg sebanyak 10%   : "<<diskon<<endl;
    }
    cout<<"                             ---------------------------\n";
    cout<<"Total                        : "<<total_pembayaran<<endl;
    cout<<"Jumlah uang pembayaran       : "<<b<<endl;
    cout<<"Jumlah kembalian             : "<<k<<endl;
    
        
    cout<<"\nTERIMAKASIH TELAH BERKUNJUNG KE RUMAH MAKAN PASTI KENYANG\n";
    cout<<"   SILAHKAN BERKUNJUNG KEMBALI JIKA ANDA BERKENAN :)";
}
  
