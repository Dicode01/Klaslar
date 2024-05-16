#include <iostream>

using namespace std;
class Talaba{
public:
    int yosh;
    string ism;
    void setManzil(string x){
        manzil=x;
    }
    string getManzil(){
        return manzil;
    }
    void chiqar(){
        cout<<ism<<endl;
        cout<<yosh<<endl;
        cout<<getManzil()<<endl;
    }
private:
    string manzil;
protected:
};
int main()
{
    Talaba talaba1;
    talaba1.ism="Ismoil";
    talaba1.yosh=18;
    talaba1.setManzil("Namangan sh");
    talaba1.chiqar();
    char a='7';
    int x=int(a);
    cout<<x*x;
    return 0;
}
