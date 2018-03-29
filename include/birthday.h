#ifndef BIRTHDAY_H
#define BIRTHDAY_H


class birthday
{
    public:
        birthday(int m,int d,int y);
        void printDate();
        ~birthday();

    protected:

    private:
        int month;
        int day;
        int year;
};

#endif // BIRTHDAY_H
