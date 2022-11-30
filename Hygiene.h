
class Hygiene
{
    private:

    int level;

    public:
    Hygiene():level(6){}
    ~Hygiene(){this->level -= 2;}

    void Shower(){this->level += 5;}

    int getHygieneLevel(){return this->level;}
};