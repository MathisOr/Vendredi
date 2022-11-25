class point
{
    private:
        int x;
        int y;
    public:
        int getx()
        {
            return x;
        }
        int gety()
        {
            return y;
        }
        point(int x2, int y2)
            :x{x2}, y{y2}
        {

        }
};