class Report
{
private:
	int rid;
	char rname[];
	char reportStatus[];

	Payment* pay;
	Product* pro;
	Order* odr;
	Customer* cus;

public:
	int calculateTotalSales();
	int calculateFinalStocks();
	void generateListofOrders();

};

