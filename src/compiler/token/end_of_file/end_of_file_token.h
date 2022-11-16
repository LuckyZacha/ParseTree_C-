#ifndef EOF_TOKEN_H
#define EOF_TOKEN_H

#include <string>
#include "../index.h"

class EndOfFileToken : public Token
{
    public:
        static bool is_eof(std::string character);
        EndOfFileToken(int line_number);
};

#endif
