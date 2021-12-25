#ifndef POSITION_H
#define POSITION_H


class Position
{
    public:
        int x_coordinate;
        int y_coordinate;
        Position();
        Position(int x, int y);
        bool valid_coordinates();
        ~Position();

    protected:

    private:

};

#endif // POSITION_H
