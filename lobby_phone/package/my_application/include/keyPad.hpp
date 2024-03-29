#ifndef KEYPAD_H
#define KEYPAD_H

#include <vector>
#include <mutex>

#include "utils.hpp"

class KeyPad : public Utils
{
public:
    enum class Data: char
    {
        PASSWORD = 'A',
        CALL     = 'B',
        CLEAR    = 'C',
        INVALID  = 'P',
    };

    KeyPad(const char* dev_path);
    std::vector<char> BuffCpy();
    void BuffCler();
    char Scan();
    ~KeyPad();

private:
    std::mutex keypad_mutex;
    std::vector<char> buff;
    std::vector<char> test;
    int fd;
};
#endif
