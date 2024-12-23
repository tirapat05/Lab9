#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    int i=1;
    double initial,year,payyear,itr,total; 
	double pos = 1 ;
	cout << "Enter initial loan: ";
    cin>>initial;
	cout << "Enter interest rate per year (%): ";
	cin>>year;
	cout << "Enter amount you can pay per year: ";
	cin>>payyear;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	//cout << fixed << setprecision(2); 
	//cout << setw(13) << left << 1; 
	//cout << setw(13) << left << 1000.0;
	//cout << setw(13) << left << 50.0;
	//cout << setw(13) << left << 1050.0;
	//cout << setw(13) << left << 100.0;
	//cout << setw(13) << left << 950.0;
	//cout << "\n";	
	
	while(pos > 0){
    cout << fixed << setprecision(2); 
    cout << setw(13) << left << i++; 
    cout << setw(13) << left << initial;
    itr = initial*year/100;
    cout << setw(13) << left << itr;
    total = initial + itr;
    cout << setw(13) << left << total;
    if(payyear>total) 
    payyear = total;
    cout << setw(13) << left << payyear;
        pos = total-payyear;
    cout << setw(13) << left << pos;
        initial = pos;
    cout << "\n";

    }
    
    return 0;
}
	
	
	
	
	
	
	
	
	
	