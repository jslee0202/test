/*
class ConcreteTurtle
{
public:
	int walk() {return 1;}
	int run() {return 10;}
};
*/




class Turtle
{
  public:
    virtual ~Turtle() {}
    virtual void PenUp() = 0;
    virtual void PenDown() = 0;
    virtual void Forward_(int distance) = 0;
    virtual void Turn(int degrees) = 0;
    virtual void GoTo(int x, int y) = 0;
    int GetX() const {return 10;}
    int GetY() const { return 1;}
//    virtual void DeleteMethod() = 0;
    virtual void NewMethod() = 0;
};

class Painter
{
    Turtle *turtle;
    int a;

  public:
    Painter(Turtle *turtle) : turtle(turtle) {}
    bool DrawCircle_(int, int, int)
    {
        turtle->PenDown();
        turtle->PenUp();
        turtle->Forward_(100);
        turtle->GetX();
        turtle->GetY();
        return true;
    }
};

int main_(){
	return 0;
}
