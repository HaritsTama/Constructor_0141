#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
public:
	static long long int nim;
	long long int id;
	string name;

	void setID();
	void printAll();
	mahasiswa(string pnama)
	{
		name = pnama;
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
	cout << "Nama = " << name << endl;
	cout << endl;
}

int main()
{
	mahasiswa mhs1("Lia Kurnia");
	mahasiswa mhs2("Asroni");
	mahasiswa mhs3("Andi Kurniawan");
	mahasiswa mhs4("Joko Purbo");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();
	return 0;
}