class RAM{
	private:
	// atribut
		int capacity;
		int price;

	public:
		RAM(){
		}

		RAM(int capacity, int price){
			this->capacity = capacity;
			this->price = price;
		}

		// set dan get
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
		~RAM(){ }
};