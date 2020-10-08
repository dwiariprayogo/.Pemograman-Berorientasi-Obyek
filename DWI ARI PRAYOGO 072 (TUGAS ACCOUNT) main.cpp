#include<iostream>
#include <string>
using namespace std;


class Account
{
	public:
		Account(int);
	void credit(int);
	void debit(int);
	int getAccountBalance();

 	private:
	int accountBalance;
};

Account::Account( int balance)
{
	if(balance>=0)
		accountBalance=balance;
	else
	{
		accountBalance=0;
		cout<<"Saldo awal tidak valid"<<endl;
	}
}

void Account::credit( int balance) {
	accountBalance = accountBalance + balance;
}
void Account::debit( int balance) {
	if(accountBalance>=balance)
	{
		accountBalance = accountBalance - balance;
	}
	else
	{
		cout<<"Debit amount exceeded account balance."<<endl;
	}
}

int Account::getAccountBalance() {
	return accountBalance;

}
class Mahasiswa {
    public:
    string nama;
    string Nim;
    string Jurusan;


};
int main(int argc, char const *argv [])
{
   Mahasiswa data1;
   data1.nama="dwi ari prayogo";
   data1.Nim="19051397072";
   data1.Jurusan= "Informatika";


     cout<< "Nama    :" << data1.nama <<endl;
     cout<< "Nim     :" << data1.Nim <<endl;
     cout<< "Jurusan :" << data1.Jurusan <<endl<<endl;




{



	Account Account1(20000);
	Account Account2(10000);
	cout << " SALDO AWAL ACCOUNT 1 : Rp. "<< Account1.getAccountBalance() <<",-" <<endl;
	cout << " SALDO AWAL ACCOUNT 2 : Rp. "<< Account2.getAccountBalance() <<",-" <<endl;


	cout << endl;
	Account1.credit(2000);
	Account2.credit(100);
	cout << " CREDIT ACCOUNT 1 : Rp. 1000 ,-" << endl;
	cout << " CREDIT ACCOUNT 2 : Rp. 2000 ,-" << endl;

	cout <<endl << "->  PENGAJUAN CREDIT :" << endl <<endl;
	cout << " SALDO ACCOUNT 1 : Rp. "<< Account1.getAccountBalance() <<",-" <<endl;
	cout << " SALDO ACCOUNT 2 : Rp. "<< Account2.getAccountBalance() <<",-" <<endl<<endl;

	cout << endl;
	Account1.debit(1000);
	Account2.debit(500);
	cout << " DEBIT ACCOUNT 1 : Rp. 500 ,-" << endl;
	cout << " DEBIT ACCOUNT 2 : Rp. 5000 ,-" << endl;

	cout <<endl << "-> SETELAH PENGAJUAN DEBIT :" << endl <<endl;
	cout << " SALDO AKHIR ACCOUNT 1 : Rp. "<< Account1.getAccountBalance() <<",-"<< endl;
	cout << " SALDO AKHIR ACCOUNT 2 : Rp. "<< Account2.getAccountBalance() <<",-"<< endl;

}

}
