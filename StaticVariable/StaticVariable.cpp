#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
public:
	static int nim;
	int id;
	string name;

	void setID();
	void printAll();
	mahasiswa(string pnama)
	{
		nama = pnama;
		setID();
	}
};