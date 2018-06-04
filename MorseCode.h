#ifndef Morsecode_h
#define Morsecode_h
/*
Defining characters with associated morse code string
*/
#define a "ShortLong"
#define b "LongShortShortShort"
#define c "LongShortLongShort"
#define d "LongShortShort"
#define e "Short"
#define f "ShortShortLongShort"
#define g "LongLongShort"
#define h "ShortShortShortShort"
#define i "ShortShort"
#define j "ShortLongLongLong"
#define k "LongShortLong"
#define l "ShortLongShortShort"
#define m "LongLong"
#define n "LongShort"
#define o "LongLongLong"
#define p "ShortLongLongShort"
#define q "LongLongShortLong"
#define r "ShortLongShort"
#define s "ShortShortShort"
#define t "Long"
#define u "ShortShortLong"
#define v "ShortShortShortLong"
#define w "ShortLongLong"
#define x "LongShortShortLong"
#define y "LongShortLongLong"
#define z "LongLongShortShort"



class Morsecode{
    
    public:
        Morsecode(String morse_string);
        unsigned char binary_letter();
        

    private:
        //The character translated from morse code
        char letter;
        //The binary representation of the character
        unsigned int binary_representation;
        //Method to translate morse string into a character
        char translate_into_char(String morse_code_string);
        //Morse Character array for quicker searches
        String morse_char_array[26] = {a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};
        char alphabet_array[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v'
        ,'w','x','y','z'};
        
};

#endif //Morsecode_h