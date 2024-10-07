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

    
    cout << "����: " << bank.getName() << endl;
    cout << "����� �������: " << bank.getNumOfDeposits() << endl;
    cout << "������ ������: " << bank.getDepositSize() << endl;
    cout << "���������� ������: " << bank.getInterestRate() << "%" << endl;

    
    cout << "������ ����� �������: " << bank.calculateTotalInterest() << endl;

    return 0;
}
