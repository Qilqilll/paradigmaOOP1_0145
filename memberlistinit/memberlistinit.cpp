#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	const int id;
	string nama;
	float nilai;

public:
	mahasiswa(int pId, string pNama, float pNilai) :id(pId), nama(pNama), nilai(pNilai) {

	}


	~mahasiswa() {
		cout << "id = " << endl;
		cout << "nama = " << endl;
		cout << "kelas = " << endl;
	}
};

int main() {
	mahasiswa mhs(12, "Asroni", 90.5);

	return 0;
}