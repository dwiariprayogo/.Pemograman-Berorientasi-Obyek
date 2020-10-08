#include<iostream>
#include <string>
using namespace std;

class Employee
{
	public:
		Employee(string, string, int);
	void setFirstName(string);
		string getFirstName();
	void setLastName(string);
		string getLastName();

	void setMonthlySalary(int);
	int getMonthlySalary();

	private:
		string firstName;
		string lastName;
	int monthlySalary;
};

Employee::Employee( string first, string last, int salary)
{
	firstName=first;
	lastName=last;
	if(salary>0)
		monthlySalary=salary;
	else
	{
		monthlySalary=0;
		cout<<"Initial salary was invalid."<<endl;
	}
}

void Employee::setFirstName( string first)
{
	if ( first.length() <= 45 )
		firstName = first;
	if ( first.length() > 16 )
	{
		firstName = first.substr( 0, 18 );
		cout << "NAMA \"" << first << endl;
	}
}

void Employee::setLastName(string last )
{
	if ( last.length() <= 20 )
		lastName = last;
	if ( last.length() > 28 )
	{
		lastName = last.substr( 0, 15 );
		cout << "NAMA \"" << last << endl;
	}
}

void Employee::setMonthlySalary(int salary )
{
	if(salary>0)
		monthlySalary=salary;
	else
	{
		monthlySalary=0;
		cout<<"Initial salary was invalid."<<endl;
	}
}

string Employee::getFirstName() {
	return firstName;
}
string Employee::getLastName() {
	return lastName;
}
int Employee::getMonthlySalary() {
	return monthlySalary;
}

int main()
{
	cout << " Nama	: DWI ARI PRAYOGO"<<endl;
	cout << " NIM	: 19051397072"<<endl;
	cout << " Prodi	: D4 RPL 2019"<<endl<<endl;

	cout << "   Upah yang di terima kariawan Perbulan Dan Pertahun" <<endl;
	cout << "" <<endl<<endl;
	Employee Employee1("Dwi", "Ari Prayogo",200000);
	Employee Employee2("Deni", "Eka Aji",55000000);
	cout << " PEGAWAI 1	: "<< Employee1.getFirstName()<<" "<< Employee1.getLastName()<<endl;
	cout << " Gaji Bulanan	: "<< Employee1.getMonthlySalary()<<endl;
	cout << " Gaji TAhunan	: "<< Employee1.getMonthlySalary()*12<< endl<<endl;
	cout << "  SETELAH KENAIKAN 60%  "<<endl;

	int incrementedSalary1=Employee1.getMonthlySalary();
	incrementedSalary1=incrementedSalary1+(incrementedSalary1*0.1);
	Employee1.setMonthlySalary(incrementedSalary1);

	cout<< " Upah Kerja BULANAN PEGAWAI  1 : "<< Employee1.getMonthlySalary()<<endl;
	cout<< " gaji  Kerja TAHUNAN PEGAWAI  1 : "<< Employee1.getMonthlySalary()*12 <<endl<<endl;


	cout << " PEGAWAI 2	: "<< Employee2.getFirstName()<<" "<< Employee2.getLastName()<<endl;
	cout << " Upah  Bulanan	: "<< Employee2.getMonthlySalary() <<endl;
	cout << " Gaji Tahunan	: "<< Employee2.getMonthlySalary()*12 <<endl<<endl;
	cout << "   SETELAH KENAIKAN 70% "<<endl;

	int incrementedSalary2=Employee2.getMonthlySalary();
	incrementedSalary2=incrementedSalary2+(incrementedSalary2*0.1);
	Employee2.setMonthlySalary(incrementedSalary2);

	cout<< " GAJI BULANAN PEGAWAI  2 : "<< Employee2.getMonthlySalary() << endl;
	cout<< " GAJI TAHUNAN PEGAWAI  2 : "<< Employee2.getMonthlySalary()*12<< endl;
}

