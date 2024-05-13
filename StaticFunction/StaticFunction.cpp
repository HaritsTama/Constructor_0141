#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
	static long long int nim;
public:
	long long int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(long long int pNim) { nim = pNim; }
	static int getNim() { return nim; }

	mahasiswa(string pnama)//mahasiswa(string pnama) : nama(pnama) { setID(); }
	{
		nama = pnama;
		setID();
	}
};

long long int mahasiswa::nim = 20230140141;

void mahasiswa::setID()
{
	id = ++nim;
}

void mahasiswa::printAll()
{
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main()
{
	mahasiswa mhs1("Nayo");
	mahasiswa mhs2("Agung");
	mahasiswa::setNim(20230140111); // mengakses nim melalui static member function "setNim"
	mahasiswa mhs3("Bagus");
	mahasiswa mhs4("Penyun");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl; //

	return 0;
}
