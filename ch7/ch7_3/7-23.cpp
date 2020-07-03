#include <string>
using namespace std;

class Screen
{
private:
    unsigned height = 0, width = 0;
    unsigned cursor = 0;
    string contents;

public:
    Screen() = default;
    Screen(unsigned ht, unsigned wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
    Screen(unsigned ht, unsigned wd, char c)
        : height(ht), width(wd) { contents = string(ht * wd, c); }
    Screen &move(unsigned r, unsigned col);
    Screen &set(char c)
    {
        contents[cursor] = c;
        return *this;
    }
    const Screen &display(ostream &os) const;
};
inline Screen &Screen::move(unsigned r, unsigned col)
{
    cursor = r * width + col;
    return *this;
}
inline const Screen &Screen::display(ostream &os) const
{
    os << contents;
    return *this;
}