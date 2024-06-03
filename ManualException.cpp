#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "selamat Belajar di Prodi TI UMY" << endl;
        //throw 0,5; //melemparkan sebuah integer maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch (int a) {
        //blok ini akan dieksekusi
        cout << "Pengecualiann akan di eksekusi" << endl;
    }
    catch (...) {
        /*jika selain integer maka block ini akan diesekusi*/
        cout << "default pengecualian diexsekusi" << endl;
    }
    return 0;
}