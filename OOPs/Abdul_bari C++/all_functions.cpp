class Rectangle{
    private:int length;int breadth;public:
        Rectangle();  
  Rectangle(int l,int b);  
    Rectangle(Rectangle &r);
    int getLength(){returnlength;}
    int getBreadth(){returnbreadth;}
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();    
    ~Rectangle();
    x};