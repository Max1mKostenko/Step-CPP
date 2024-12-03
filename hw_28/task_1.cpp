#include <iostream>
using namespace std;

class Apartment {
private:
    int number_;
    int residents_;
public:
    Apartment() : number_(0), residents_(0) {}
    Apartment(int number, int residents) : number_(number), residents_(residents) {}
    Apartment(const Apartment& other) : number_(other.number_), residents_(other.residents_) {}

    void show_info() {
        cout << "Apartment Number: " << number_ << ", Residents: " << residents_ << endl;
    }

    void set_info(int number, int residents) {
        number_ = number;
        residents_ = residents;
    }

    int get_residents() const {
        return residents_;
    }
};

class House {
private:
    Apartment* apartments_;
    int total_apartments_;
public:
    House() : apartments_(0), total_apartments_(0) {}
    House(int total_apartments) : total_apartments_(total_apartments) {
        apartments_ = new Apartment[total_apartments_];
    }

    House(const House& other) : total_apartments_(other.total_apartments_) {
        apartments_ = new Apartment[total_apartments_];
        for (int i = 0; i < total_apartments_; ++i) {
            apartments_[i] = other.apartments_[i];
        }
    }

    ~House() {
        delete[] apartments_;
    }

    void set_apartment(int index, int number, int residents) {
        if (index >= 0 && index < total_apartments_) {
            apartments_[index].set_info(number, residents);
        }
    }

    void show_info() {
        cout << "House with " << total_apartments_ << " apartments:" << endl;
        for (int i = 0; i < total_apartments_; ++i) {
            apartments_[i].show_info();
        }
    }
};

int main() {
    House my_house(3);
    my_house.set_apartment(0, 101, 3);
    my_house.set_apartment(1, 102, 4);
    my_house.set_apartment(2, 103, 2);
    my_house.show_info();

    House copied_house = my_house;
    cout << "\nCopied House Info:" << endl;
    copied_house.show_info();
}
