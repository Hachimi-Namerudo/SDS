#ifndef QUESTION_H
#define QUESTION_H
#include <QString>

class Question
{
public:
    Question();

    int score;
    bool isReversed;
    QString description;
};

#endif // QUESTION_H
