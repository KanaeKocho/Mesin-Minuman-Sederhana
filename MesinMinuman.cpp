#include <iostream>
using namespace std;
int main()
{
    //buat variabel untuk meminta input user
    int a;
    //sajikan menu
    cout << "=======Mesin Minuman======" << endl;
    cout << "Pilih Minuman Anda :"<<endl;
    cout << "1.Coca-Cola"<<endl;
    cout << "2.Fanta"<<endl;
    cout << "3.Teh Kotak"<<endl;
    cout << "4.Pocari Sweat"<<endl;
    cout << "5.Air Putih"<<endl;
    cout << endl;
    cout << "Masukkan Kode Minuman"<<endl;
    cin >> a;
    //buat pengkondisian switch lalu variabel untuk meminta input user yaitu a dimasukkan ke parameter switch
    switch (a)
    {
        //tampilkan output minuman yg dipilih user sesuai angka minuman
    case 1:
        cout << "Minuman Yang Anda Pilih Adalah Coca-Cola" << endl;
        break;
    case 2:
        cout << "Minuman Yang Anda Pilih Adalah Fanta" << endl;
        break;
    case 3:
        cout << "Minuman Yang Anda Pilih Adalah Teh Kotak" << endl;
        break;
    case 4:
        cout << "Minuman Yang Anda Pilih Adalah Pocari Sweat" << endl;
        break;
    case 5:
        cout << "Minuman Yang Anda Pilih Adalah Air Putih" << endl;
        break;
        //beritahu ke user kalau kode minumannya salah
    default:
        cout << "Kode Minuman Yang Anda Masukkan Salah";
        break;
    }
}
