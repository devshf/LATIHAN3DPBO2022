#include <iostream>
#include "pc.cpp"
using namespace std;

int main(){

	PC pc;

	Processor processor;
	processor.setName("INTWL");
	processor.setPrice(400000);

	RAM r;
	r.setCapacity(4);
	r.setPrice(200000);

	Disk d;
	d.setType("HDD");
	d.setCapacity(216);
	d.setPrice(50000);

	pc.setDisk(d);
	pc.setProcessor(processor);
	pc.setRAM(r);
	pc.setTotalPrice(processor.getPrice(), r.getPrice(), d.getPrice());

	// output
	cout << "List Harga & Spek PC" << endl;
	cout << "====================\n" << endl;
	cout << 1 << endl;
	cout << "Nama Processor          : " << pc.getProcessor().getName() << endl;
	cout << "Harga Processor 	: " << pc.getProcessor().getPrice() << endl;
	cout << "Kapasitas RAM 		: " << pc.getRAM().getCapacity() << endl;
	cout << "Harga RAM          	: " << pc.getRAM().getPrice() << endl;
	cout << "Tipe Disk          	: " << pc.getDisk().getType() << endl;
	cout << "Kapasitas Disk     	: " << pc.getDisk().getCapacity() << endl;
	cout << "Harga Disk 		: " << pc.getDisk().getPrice() << endl;
	cout << "Total Harga 		: " << pc.getTotalPrice() << endl;


}