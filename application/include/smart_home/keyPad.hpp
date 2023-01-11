#ifndef keyPad_h
#define keyPad_h
#include <vector>

class KeyPad
{
public:
    KeyPad();
    std::vector<char> BuffCpy();
    void BuffCler();
    char Scan();
    ~KeyPad();

private:
    std::vector<char> buff;
    std::vector<char> test;
    int fd;
};
#endif