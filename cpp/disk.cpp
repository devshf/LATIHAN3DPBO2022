#include <string>
using namespace std;

class Disk{
	private:
	// atribut
		string type;
		int capacity;
		int price;

	public:
		Disk(){ }
		// constructor
		Disk(string type, int capacity, int price){
			this->type = type;
			this->capacity = capacity;
			this->price = price;
		};

		// set dan get
		void setType(string type){
			this->type = type;
		}
		string getType(){
			return this->type;
		}

		void setCapacity(int capacity){
			this->capacity = capacity;
		}
		int getCapacity(){
			return this->capacity;
		}

		void setPrice(int price){
			this->price = price;
		}
		int getPrice(){
			return this->price;
		}

		// destruktor
		~Disk(){ }

};