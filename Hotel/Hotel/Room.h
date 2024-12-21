#ifndef HOTEL_ROOM_H
#define HOTEL_ROOM_H

#include <string>

using namespace std;

class Room {
private:
    int number;
    string type;
    int price;
    string status;
public:
    Room(int num, string t, int p) : number(num), type(t), price((int) p), status("Available") {}
    void changeStatus(string newStatus);
    int getNumber() const;
    string getStatus() const;
    int getPrice() const;
    string getType() const;
    void setPrice(int newPrice);

};


#endif
