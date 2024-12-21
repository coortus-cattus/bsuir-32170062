#ifndef HOTEL_REVIEW_H
#define HOTEL_REVIEW_H

#include <iostream>
#include <string>
using namespace std;

class Review {
private:
    int reviewID;
    string author;
    string text;
    int rating;

public:
    Review(int id, string authorName, string reviewText, int reviewRating)
            : reviewID(id), author(authorName), text(reviewText), rating(reviewRating) {}

    int getReviewId() const;

    const string &getAuthor() const;

    const string &getText() const;

    int getRating() const;

    void setText(const string &text);

    void setRating(int rating);

};


#endif