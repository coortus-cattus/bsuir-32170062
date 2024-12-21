#include <gtest/gtest.h>
#include "../Hotel/Review.h"

// Тест для конструктора и геттеров
TEST(ReviewTest, ConstructorAndGettersTest) {
    Review review(1, "John Doe", "Great stay, everything was perfect!", 5);

    EXPECT_EQ(review.getReviewId(), 1);
    EXPECT_EQ(review.getAuthor(), "John Doe");
    EXPECT_EQ(review.getText(), "Great stay, everything was perfect!");
    EXPECT_EQ(review.getRating(), 5);
}

// Тест для сеттера setText
TEST(ReviewTest, SetTextTest) {
    Review review(2, "Jane Doe", "Good experience, but room was noisy.", 4);

    review.setText("Good experience, but room could be cleaner.");

    EXPECT_EQ(review.getText(), "Good experience, but room could be cleaner.");
}

// Тест для сеттера setRating
TEST(ReviewTest, SetRatingTest) {
    Review review(3, "Alice", "Nice place, but the service could improve.", 3);

    review.setRating(4);

    EXPECT_EQ(review.getRating(), 4);
}
