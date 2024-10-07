import sys
import io


sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf-8')

class Bank:
    def __init__(self, name, num_of_deposits, deposit_size, interest_rate):
        self.name = name                  
        self.num_of_deposits = num_of_deposits  
        self.deposit_size = deposit_size  
        self.interest_rate = interest_rate  
    def calculate_total_interest(self):
        return self.num_of_deposits * self.deposit_size * (self.interest_rate / 100)

    def bank_info(self):
        print(f"Банк: {self.name}")
        print(f"Число вкладов: {self.num_of_deposits}")
        print(f"Размер вклада: {self.deposit_size}")
        print(f"Процентная ставка: {self.interest_rate}%")
        print(f"Размер общей выплаты по процентам: {self.calculate_total_interest()}")



bank = Bank("Сбербанк", 5, 10000, 5.0)


bank.bank_info()
