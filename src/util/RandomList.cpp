#include "RandomList.h"

RandomStr::RandomStr(const char* string) : _size(0)
{
        const char* sPtr = string;
        // Allows room for null char
        while(*sPtr++) _size++;
        _str = new char[_size + 1];
        char* writer = _str;
        while((*writer++ = *string++)) ;
        *writer = '\0';
}

RandomStr::RandomStr(const RandomStr& string) : _size(string.size())
{
        _str = new char[_size + 1];
        char* writer = _str;
        const char* reader = string.string();
        while((*writer++ = *reader++)) ;
        *writer = '\0';
}

RandomStr::~RandomStr()
{
        delete[] _str;
}
