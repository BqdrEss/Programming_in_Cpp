class Box {
    private: //
        double height;
        double width;
        double depth;
    public:
        //constructors
        Box();
        Box(double,double,double);
        // Copy constructor
        Box(const Box& b);
        //destructor
        ~Box();
        //setter
        void setHeight(double newHeight);
        void setWidth(double newWidth);
        void setDepth(double newDepth);
        //getter methods
        double getHeight();
        double getWidth();
        double getDepth();
};
