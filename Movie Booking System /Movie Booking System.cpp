#include <iostream>
using namespace std;
void introduction () {
    cout << "----------------------------------------" << endl;
    cout << "WELCOME!!!, Cinephiles!" << endl;
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

void payment (int paymentoption) {
    if (paymentoption == 1) {
        cout<< "CASH RECIEVED, PAYMENT DONE!!!" <<endl;
    }
    if (paymentoption == 2) {
        cout<< "PAYMENT RECIEVED THROUGH UPI, PAYMENT DONE!!!" <<endl;
    }
    else if (paymentoption == 3) {
        cout<< "PAYMENT RECIEVED THROUGH CARD, PAYMENT DONE!!!" <<endl;
    }
}

void totalcost (int nofseat) {
    if (nofseat == 0) {
        return;
    }
    int rateofseat = 200;
    int totalseats = nofseat;
    int grandtotal = totalseats * rateofseat;
    cout<<endl;
    cout<< "Total cost of seat booking is: " << "Rs." << " " << grandtotal <<endl;
    cout<< "-----------------------------------------" <<endl;
    cout<< "How would you like to do payment??" <<endl;
    cout<< "1. Cash" <<endl;
    cout<< "2. UPI" <<endl;
    cout<< "3. Credit or Debit card" <<endl;
    cout<< "Enter payment mode you choose (1/2/3): ";
    int paymentoption;
    cin>>paymentoption;
    payment (paymentoption);
    cout<<endl;
    cout<< "ENJOY YOUR SHOW!!!!" <<endl;
    cout<< "-----------------------------------------" <<endl;
    cout<<endl;
}

void blockingofseat (int selectedseatnumber, int anotherseat) {
    int s1 = selectedseatnumber;
    int s2 = anotherseat;
    if (s2 == 0) {
        while (s1 != s2 || s1 <= 100 || s1 > 0) {
            cout<<endl;
            cout<< "Congrats! Your seat has been booked." <<endl;
            cout<< "Your seat number: " << s1 <<endl;
            break;
        } 
    }
    if (s1 == 0) {
        while (s2 != s1 || s2 <= 100 || s2 > 0) {
            cout<<endl;
            cout<< "Congrats! one more seat has been booked." <<endl;
            cout<< "Another seat number is: " << s2 <<endl;
            break;
        }
    }
    if (s2 == s1) {
        cout<<endl;
        cout<< "Please Select different seat numbers again." <<endl;
    }
}

void cancelseat (int nofseat, int selectedseatnumber, int anotherseat) {
    int cancel = bool (1 && 0);
    cout << "We are confirming your seat booking!!!" <<endl;
    cout << "Are you sure??" <<endl;
    cout << endl;
    cout << "If you want to cancel your seat press 1 otherwise 0: ";
    cin >> cancel;
    if (cancel == 1) {
        nofseat = 0;
        cout << "CANCELLED!" <<endl;
        cout<< "-----------------------------------------" <<endl;
        totalcost (nofseat);
    }
    if (cancel == 0) {
        cout<< "GLAD! Let's continue with payment..." <<endl;
        totalcost (nofseat);
    }
}

void choosingofseat (int nofseat) {
    int selectedseatnumber;
    cout<< "Select seat number (1-100): ";
    cin>> selectedseatnumber;
    
    blockingofseat (selectedseatnumber, 0);
    int anotherseat;
    if (nofseat == 2) {
        int moreseat = bool (1 && 0);
        cout<< "Do really you want to book more seats? (1 if yes || 0 is no): ";
        cin>> moreseat;
        if (moreseat == 1) {
            cout<< "Select another seat number: ";
            cin>> anotherseat;
            blockingofseat (0, anotherseat);
        }
        else if (moreseat == 0) {
            cout<< "No Problem! let us proceed further."<<endl;
        }
    }
    cancelseat (nofseat, selectedseatnumber, anotherseat);
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

void exitop (int option) {
    cout<< ":(" <<endl;
    cout<< "We hope you'll come back" <<endl;
    cout << "----------------------------------------" << endl;
}

void choosing () {
    int option;
    cout << "1. View movie listings" << endl;
    cout << "2. Book a Seat" << endl;
    cout << "3. Exit" << endl;
    cout << endl;
    cout << "Enter your choice (1/2/3): ";
    cin >> option;
    cout<< "--------------------------------------"<<endl;
    if (option == 1) {
        movielisting (option);
    }
    if (option == 2) {
        selectingfilm (option);
    }
    if (option == 3) {
        exitop (option);
    }
}

int main() {
    introduction();
    choosing();
    choosing();
    choosing();
    choosing();
    return 0;
}
