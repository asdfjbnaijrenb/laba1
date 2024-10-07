#include <iostream>
#include <string>
using namespace std;

class Bank {
private:
    string name;        
    int numOfDeposits;   
    double depositSize;  
    double interestRate; 

public:
    
    Bank(string bankName, int deposits, double size, double rate) {
        name = bankName;
        numOfDeposits = deposits;
        depositSize = size;
        interestRate = rate;
    }

   
    string getName() const {
        return name;
    }

    int getNumOfDeposits() const {
        return numOfDeposits;
    }

    double getDepositSize() const {
        return depositSize;
    }

    double getInterestRate() const {
        return interestRate;
    }

   

    double calculateTotalInterest() const {
        return numOfDeposits * depositSize * (interestRate / 100);
    }
};

int main() {
    setlocale(LC_ALL, "Ru");

   
    Bank bank("Sberbank", 5, 10000.0, 5.0);

    
    cout << "Банк: " << bank.getName() << endl;
    cout << "Число вкладов: " << bank.getNumOfDeposits() << endl;
    cout << "Размер вклада: " << bank.getDepositSize() << endl;
    cout << "Процентная ставка: " << bank.getInterestRate() << "%" << endl;

    
    cout << "Размер общей выплаты: " << bank.calculateTotalInterest() << endl;

    return 0;
}
