#include <iostream>
using namespace std;

int main(){
/*
	int a,b;
	cout << "Enter two numbers" << endl;
	con >> a >> b;
	cout << "Pick a calculator" << endl;
	cout << "1: Addition \n 2: Subtraction \n 3: multiplication \n 4: division";*/
/*
    cout << "Would you like sugar?" << endl;
    char input;
    cin >> input;

    switch (input) {
    case 'Y':
    case 'y':
        cout << "Adding sugar..." << endl;
        break;
    case 'N':
    case 'n':
        cout << "No sugar requested..." << endl;
        break;
    default:
        cout << "That input was not recognized" << endl;
    }*/
/*
  cout << "Wold you like to continue? (Y/N)" << endl;
  char confirm;
  cin >> confirm;

  switch (confirm) {
  	case 'Y':
  	case 'y':
  		cout << "You wished to continue";
  		break;
  	case 'N':
  	case 'n':
  		cout << "You forfeited";
  	break;

  	default:
  		cout << "Please input Y or N";

  }*/
	int month;

cout << "Please input a time of the month (1 to 12, 1 being January, 2 being February, so on and so forth)" << endl;

	cin >> month;

	switch (month){

	case 1:
		cout << "January - 31";
	break;
	
	case 2:
		cout << "February - 28";
	break;
	
	case 3:
		cout << "March - 31";
	break;
	
	case 4:
		cout << "April - 30";
	break;
	
	case 5:
		cout << "May - 31";
	break;
	
	case 6:
		cout << "June - 30";
	break;
	
	case 7:
		cout << "July - 31";
	break;
	
	case 8:
		cout << "August - 31";
	break;
	
	case 9:
		cout << "September - 30";
	break;
	
	case 10:
		cout << "October - 31";
	break;
	
	case 11:
		cout << "November - 30";
	break;
	
	case 12:
		cout << "December - 31";
	break;
	
default:
		cout << "Not on the calendar";
	break;
	
	}
    return 0;
}
	//finish this, use switch cases, else = default
