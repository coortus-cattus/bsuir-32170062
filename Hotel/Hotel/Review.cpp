#include "Review.h"

int Review::getReviewId() const {
    return reviewID;
}

const string &Review::getAuthor() const {
    return author;
}

const string &Review::getText() const {
    return text;
}

int Review::getRating() const {
    return rating;
}

void Review::setText(const string &text) {
    Review::text = text;
}

void Review::setRating(int rating) {
    Review::rating = rating;
}
