#include <iostream>
using namespace std;

class Room {
private:
    string name;
    double length, width, height;
    bool wallpaper_ceiling;

public:
    Room() : name(""), length(0), width(0), height(0), wallpaper_ceiling(false) {}

    void input_room_data() {
        cout << "Enter room name: ";
        cin >> name;
        cout << "Enter room length (m): ";
        cin >> length;
        cout << "Enter room width (m): ";
        cin >> width;
        cout << "Enter room height (m): ";
        cin >> height;
        cout << "Wallpaper ceiling? (1 - yes, 0 - no): ";
        cin >> wallpaper_ceiling;
    }

    double calculate_wallpaper_area() const {
        double wall_area = 2 * height * (length + width);
        double ceiling_area = wallpaper_ceiling ? length * width : 0;
        return wall_area + ceiling_area;
    }
};

class WallpaperRoll {
private:
    string name;
    double roll_length, roll_width, price;

public:
    WallpaperRoll() : name(""), roll_length(0), roll_width(0), price(0) {}

    void input_roll_data() {
        cout << "Enter wallpaper name: ";
        cin >> name;
        cout << "Enter roll length (m): ";
        cin >> roll_length;
        cout << "Enter roll width (m): ";
        cin >> roll_width;
        cout << "Enter roll price: ";
        cin >> price;
    }

    double calculate_roll_coverage() const {
        return roll_length * roll_width;
    }

    double get_price() const {
        return price;
    }

    string get_name() const {
        return name;
    }
};

class Apartment {
private:
    Room rooms[10];
    int room_count;

public:
    Apartment() : room_count(0) {}

    void input_apartment_data() {
        cout << "Enter number of rooms: ";
        cin >> room_count;
        for (int i = 0; i < room_count; ++i) {
            cout << "\nRoom #" << i + 1 << ":\n";
            rooms[i].input_room_data();
        }
    }

    void calculate_wallpaper_usage(const WallpaperRoll& roll) const {
        double total_area = 0;
        for (int i = 0; i < room_count; ++i) {
            total_area += rooms[i].calculate_wallpaper_area();
        }

        double roll_coverage = roll.calculate_roll_coverage();
        int rolls_needed = total_area / roll_coverage;
        if (total_area > rolls_needed * roll_coverage) {
            rolls_needed++;
        }

        cout << "\nFor wallpaper \"" << roll.get_name() << "\":\n";
        cout << "Rolls needed: " << rolls_needed << "\n";
        cout << "Total cost: " << rolls_needed * roll.get_price() << " units\n";
    }
};

int main() {
    Apartment apartment;
    WallpaperRoll wallpaper;

    cout << "Apartment data input:\n";
    apartment.input_apartment_data();

    cout << "\nWallpaper roll data input:\n";
    wallpaper.input_roll_data();

    cout << "\nCalculation result:\n";
    apartment.calculate_wallpaper_usage(wallpaper);
}
