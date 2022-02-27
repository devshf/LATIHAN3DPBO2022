#include "processor.cpp"
#include "ram.cpp"
#include "disk.cpp"

class PC{
	private:
		// atribut
		Processor processor;
		RAM r;
		Disk d;
		int totalPrice;

	public:
		PC(){ }

		// constructor
		PC(Processor processor, RAM r, Disk d){
			this->processor = processor;
			this->r = r;
			this->d = d;
			this->totalPrice = processor.getPrice() + r.getPrice() + d.getPrice();
		}

		// set dan get
		void setProcessor(Processor processor){
			this->processor = processor;
		}
		Processor getProcessor(){
			return this->processor;
		}

		void setRAM(RAM r){
			this->r = r;
		}
		RAM getRAM(){
			return this->r;
		}

		void setDisk(Disk d){
			this->d = d;
		}
		Disk getDisk(){
			return this->d;
		}

		void setTotalPrice(int price_p, int ramPrice, int diPrice){
			this->totalPrice = price_p + ramPrice + diPrice;
		}
		int getTotalPrice(){
			return this->totalPrice;
		}

		// destructors
		~PC(){ }

};