#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double loan = 0, rate = 0, pay = 0, balance = 0, inte = 0,tot = 0;
	cout << "Enter initial loan: ";
	cin >> loan;
	balance = loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	for (int i = 1; balance > 0; i++) {
		cout << fixed << setprecision(2);
		cout << setw(13) << left << i; 
		cout << setw(13) << left << balance;
		inte = rate/100*balance;
		cout << setw(13) << left << inte;
		tot = balance+inte;
		cout << setw(13) << left << tot;
		if (tot < pay)
			pay = tot;
		cout << setw(13) << left << pay;
		balance = tot-pay;
		cout << setw(13) << left << balance;
		cout << "\n";
	}
	
	return 0;
}
