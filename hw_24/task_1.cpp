#include <iostream>
using namespace std;

class Elevator {
private:
    int lower_floor;
    int upper_floor;
    int current_floor;
    bool is_on;

public:
    void configure(int lower, int upper, int start_floor) {
        if (lower >= upper) {
            cout << "Error: Lower floor must be less than upper floor." << endl;
            return;
        }
        if (start_floor < lower || start_floor > upper) {
            cout << "Error: Start floor must be within the range of lower and upper floors." << endl;
            return;
        }
        lower_floor = lower;
        upper_floor = upper;
        current_floor = start_floor;
        is_on = false;
    }

    void turn_on() {
        if (!is_on) {
            is_on = true;
            cout << "Elevator is now on." << endl;
        }
        else {
            cout << "Elevator is already on." << endl;
        }
    }

    void turn_off() {
        if (is_on) {
            is_on = false;
            cout << "Elevator is now off." << endl;
        }
        else {
            cout << "Elevator is already off." << endl;
        }
    }

    bool get_status() {
        return is_on;
    }

    int get_current_floor() {
        return current_floor;
    }

    void call_elevator(int floor) {
        if (!is_on) {
            cout << "The elevator is off and cannot move." << endl;
            return;
        }
        if (floor < lower_floor || floor > upper_floor) {
            cout << "The specified floor is out of range." << endl;
            return;
        }
        if (floor == current_floor) {
            cout << "Elevator is already on floor " << floor << "." << endl;
            return;
        }

        cout << "Elevator is moving from floor " << current_floor << " to floor " << floor << "." << endl;
        current_floor = floor;
    }
};

int main() {
    Elevator elevator;

    elevator.configure(-2, 9, 0);

    elevator.turn_on();
    cout << "Elevator status: " << (elevator.get_status() ? "working" : "not working") << endl;

    elevator.call_elevator(5);
    cout << "Current floor: " << elevator.get_current_floor() << endl;

    elevator.turn_off();
    elevator.call_elevator(3);
    cout << "Elevator status: " << (elevator.get_status() ? "working" : "not working") << endl;

    elevator.turn_on();
    cout << "Elevator status: " << (elevator.get_status() ? "working" : "not working") << endl;

    elevator.call_elevator(-2);
    cout << "Current floor: " << elevator.get_current_floor() << endl;

    elevator.call_elevator(-2);

    elevator.turn_off();
    elevator.turn_off();
    elevator.turn_on();
    elevator.turn_on();
}
