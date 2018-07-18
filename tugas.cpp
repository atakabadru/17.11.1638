#include <iostream>

using namespace std;

class kasir{
private:
    double saldo;
public:
    kasir(){
        saldo=500;
    }
    void nerima(double uang){
        saldo=saldo+uang;
    }

    void ngurangin(double uang){
        saldo=saldo-uang;
    }

    void cetakSaldo(){
        cout<<saldo<<endl;
    }
};

int main(){
    kasir x;
    x.nerima(200);
    x.cetakSaldo();
    x.ngurangin(100);
    x.cetakSaldo();
}
