#ifndef HOTEL_NOTIFICATION_H
#define HOTEL_NOTIFICATION_H

#include <string>
#include <iostream>
using namespace std;

class Notification {
private:
    int notificationID;
    string recipient;
    string message;
    string type;
public:
    Notification(int id, string rec, string msg, string notifType)
            : notificationID(id), recipient(rec), message(msg), type(notifType) {}

    int getNotificationId() const;

    const string &getRecipient() const;

    const string &getMessage() const;

    const string &getType() const;


};


#endif