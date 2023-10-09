#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct Flight {
    string flightNumber;
    int departureTime;
    double ticketPrice;

    bool operator>(const Flight& other) const {
        if (departureTime == other.departureTime) {
            return ticketPrice > other.ticketPrice;
        }
        return departureTime > other.departureTime;
    }
};

int main() {
    priority_queue<Flight, vector<Flight>, greater<Flight>> flightQueue;

    while (true) {
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
            {
                string flightNumber;
                int departureTime;
                double ticketPrice;

                cin >> flightNumber >> departureTime >> ticketPrice;
                Flight newFlight = {flightNumber, departureTime, ticketPrice};
                flightQueue.push(newFlight);

                cout << "Flight added to the system." << endl;
                break;
            }
            case 2:
                if (!flightQueue.empty()) {
                    cout << "Booked ticket for flight: " << flightQueue.top().flightNumber << endl;
                    flightQueue.pop();
                } else {
                    cout << "No flights available." << endl;
                }
                break;
            case 3:
                if (!flightQueue.empty()) {
                    cout << "Next available flight: " << flightQueue.top().flightNumber << endl;
                } else {
                    cout << "No flights available." << endl;
                }
                break;
            case 4:
                cout << "Exiting the application." << endl;
                return 0;
            default:
                cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
