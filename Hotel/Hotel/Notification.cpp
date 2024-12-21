#include "Notification.h"

int Notification::getNotificationId() const {
    return notificationID;
}

const string &Notification::getRecipient() const {
    return recipient;
}

const string &Notification::getMessage() const {
    return message;
}

const string &Notification::getType() const {
    return type;
}
