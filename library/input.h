using namespace std;

class Input
{
    public:
        void menu(){
            cout<<"UANG SAKU ANDI\n";

    cout<<"==========================\n";
    cout<<"Jumlah Bulan :"; cin>>a;
    cout<<"Uang Bulanan :"; cin>>break;

    tulis.open("../dummy/out_input.txt");
    tulis<<a<<endl;
    tulis<<b;
    }

    private :
    ofstream tulis;
    int a,b;
};