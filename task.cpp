#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Animals
{
public:
    string name;
    int feets;
    bool hasPaws;
    Animals(string n, int f, bool p) : name(n), feets(f), hasPaws(p)
    {
    }
};

class Monster : public Animals
{
public:
    string abilities;
    Monster(string n, int f, bool p, string a) : Animals(n, f, p), abilities(a)
    {
    }
};

class Legend
{
public:
    string myth;
    Legend(string m) : myth(m) {}
};

class Mythical : public Monster, Legend
{
public:
    string story;
    Mythical(string n, int f, bool p, string a, string s, string m) : Monster(n, f, p, a), story(s), Legend(m)
    {
        cout << "Mythical Dragon created: \n"
             << name << "has " << feets << " feets. \n"
             << (hasPaws ? "Dragon Has paws" : "Doesn't have paws") << "\n"
             << "Dragon Has this Abilities: \n" << abilities << "\n"
             << "Story: " << story << "\n"
             << "Myth: " << myth << endl;
    }
};
int main()
{
    Mythical dragon("Baloo", 2, true, "- Fire Breath \n- Ice Smoke", "A dragon that is said to possess the ability to control fire", "The legend of Baloo");

    return 0;
}
