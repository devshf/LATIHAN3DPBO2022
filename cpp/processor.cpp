#include <string>
using namespace std;

class Processor{
	private:
		// atribut
		string name;
		int price;

	public:
		// konstruktor
		Processor(){ }
		Processor(string name, int price){
			this->name = name;
			this->price = price;
		}

		// setter getter
		void setName(string name){
			this->name = name;
		}

		void setPrice(int price){
			this->price = price;
		}

		string getName(){ return this->name; }
		int getPrice(){ return this->price; }

	
		// destruktor
		~Processor(){
		}
};