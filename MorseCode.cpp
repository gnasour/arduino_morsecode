#include <Arduino.h>
#include "MorseCode.h"

Morsecode::Morsecode(String morse_string){
    letter = translate_into_char(morse_string);

}

char Morsecode::translate_into_char(String morse_code_string){
    for(int increment = 0; increment < 26; increment++){
        if(morse_code_string){}
    }
    return 'a';
}

unsigned int Morsecode::return_binary_letter(){
    return 1;
}