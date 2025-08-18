// Write a program of a load balancing system.
// Mandar Shinde (B24CE1104)
#include <iostream>
using namespace std;

int main() {
    char choice;
    int totalServers, requestID;
    cout << "Enter number of servers: ";
    cin >> totalServers;
		while (choice != 'n' && choice != 'N') {
			cout << "Enter request ID: ";
            cin >> requestID;

            int assignedServer = requestID % totalServers;
            cout << "Request sent to Server #" << assignedServer << "\n";

            cout << "\nContinue? (Press 'n' or 'N' to exit, any other key to continue): ";
            cin >> choice;
        }
    return 0;
}
