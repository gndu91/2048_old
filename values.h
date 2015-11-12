#ifndef VALUES_H_INCLUDED
#define VALUES_H_INCLUDED

    #include <windows.h>
    #include <string>
    #include <math.h>

    #define SCREEN_W    85
    #define SCREEN_H    25

    namespace cmd {
        inline bool getPos( int& x, int& y ) {
            CONSOLE_SCREEN_BUFFER_INFO csbi;
            HANDLE                     out = GetStdHandle( STD_OUTPUT_HANDLE );
            if (!GetConsoleScreenBufferInfo( out, &csbi ))
                return false;
            x = csbi.dwCursorPosition.X;
            y = csbi.dwCursorPosition.Y;
            return true;
        }

        inline void setPos(SHORT x, SHORT y) {
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {x,y});
        }
    }
    inline char intToChar(char n) {
        return '0' + n;
    }

    inline unsigned long long int pow10(int i) {
        if(i == 0)
            return 1;
        return 10*pow10(i-1);
    }

    inline std::string intToString(signed long long int n) {
        /**< Variables declarations */
        int sizeOfNumber;
        std::string r;

        /**< Exceptions */
        if (n < 10 and n >= 0) {
            r = '0' + n;
            return r;
        }
        else if (n == 10)
            return "10";
        else if (n < 0) {
            r.push_back('-');
            n = - n;
        }

        /**< Finding the length of the string */
        for(sizeOfNumber = 0; n > pow(10,sizeOfNumber); ++sizeOfNumber);

        /**< Function */
        for(int i = 0; i < sizeOfNumber; ++i) {
            int j = sizeOfNumber - i;
            int actual = ((n%pow10(j)) - (n%pow10(j-1)))/pow10(j-1);
            r.push_back(intToChar(actual));
        }

        /**< Never forget this */
        return r;
    }

#endif // VALUES_H_INCLUDED
