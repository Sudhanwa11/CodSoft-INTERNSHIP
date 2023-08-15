#include <iostream>
#include <string>
using namespace std;

const int rows = 10;
const int col = 10;

void introduction () {
    cout << "----------------------------------------" << endl;
    cout << "WELCOME, Cinephiles!" << endl;
    cout << "Hope you're doing great" << endl;
    cout << "----------------------------------------" << endl;
}
void movielisting (int option) {
    cout<< "Currently showing movies are: " <<endl;
    cout<< "1. Jawan" <<endl;
    cout<< "2. Jailer" <<endl;
    cout<< "3. Salaar" <<endl;
    cout<< "4. Tiger 3" <<endl;
    cout<< "5. Blue Beetle" <<endl;
    cout << "----------------------------------------" << endl;
    cout<<endl;
}

void choosingofseat (int nofseat) {
    int selectedseatnumber;
    cout<< "Select seat number (1-100): ";
    cin>> selectedseatnumber;
    cout<<endl;
    
    if (nofseat == 2) {
        int moreseat = bool (1 && 0);
        int anotherseat;
        cout<< "Do you want to book more seats? (1 if yes || 0 is no): ";
        cin>> moreseat;
        if (moreseat == 1) {
            cout<< "Select another seat number: ";
            cin>> anotherseat;
        }
        else if (moreseat == 0) {
            cout<< "No Problem! let us process further"<<endl;
        }
    }
}

void selectingseat () {
    int rows = 10;
    int col = 10;
    int totalseat = 1;
    string seats [rows][col];
    for (int i=0; i<rows; i++) {
        for (int j=0; j<col; j++) {
            while (totalseat <= 100) {
                cout<< totalseat<< " ";
                totalseat++;
                break;
            }
            cout<< "|__|" << " ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<< "_______________________________SCREEN_THIS_SIDE________________________________" <<endl;
    cout<<endl;
    
    int nofseat;
    cout<< "NOTE:- Maximum 2 Seats allowed at a time."<<endl;
    cout<< "How many seat you want to book?: ";
    cin>> nofseat;
    cout<<endl;
    choosingofseat (nofseat);
}

void selectingfilm (int option) {
    cout<< "Select which film you want to watch (1/2/3/4/5): ";
    int movienumber;
    cin >> movienumber;
    cout<<endl;
    if (movienumber == 1) {
        cout<< "Great Choice!"<<endl;
        cout<< "Show Timing: " << "JAWAN | 12:00 PM" <<endl;
        cout<<endl;
        cout<< "Select choice of seats for 'Jawan':- "<<endl;
        selectingseat();
    }
    if (movienumber == 2) {
        cout<< "Great Choice!"<<endl;
        cout<< "Show Timing: " << "Jailer | 12:00 PM" <<endl;
        cout<<endl;
        cout<< "Select choice of seats for 'Jailer':- "<<endl;
        selectingseat();
    }  
    if (movienumber == 3) {
        cout<< "Great Choice!"<<endl;
        cout<< "Show Timing: " << "Salaar | 12:00 PM" <<endl;
        cout<<endl;
        cout<< "Select choice of seats for 'Salaar':- "<<endl;
        selectingseat();
    }
    if (movienumber == 4) {
        cout<< "Great Choice!"<<endl;
        cout<< "Show Timing: " << "Tiger 3 | 12:00 PM" <<endl;
        cout<<endl;
        cout<< "Select choice of seats for 'Tiger 3':- "<<endl;
        selectingseat();
    }
    if (movienumber == 5) {
        cout<< "Great Choice!"<<endl;
        cout<< "Show Timing: " << "Blue Beetle | 12:00 PM" <<endl;
        cout<<endl;
        cout<< "Select choice of seats for 'Blue Beetle':- "<<endl;
        selectingseat();
    }        
}

void choosing () {
    int option;
    cout << "1. View movie listings" << endl;
    cout << "2. Book a Seat" << endl;
    cout << "3. Cancel booking" << endl;
    cout << "4. Calculate total cost" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice (1/2/3/4/5): ";
    cin >> option;
    cout<< "--------------------------------------"<<endl;
    if (option == 1) {
        movielisting (option);
    }
    if (option == 2) {
        selectingfilm (option);
    }
}
int main() {
    introduction();
    choosing();
    choosing();

    return 0;
}
