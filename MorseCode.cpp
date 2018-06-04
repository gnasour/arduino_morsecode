#include <Arduino.h>
#include <string.h>
#include "MorseCode.h"


Morsecode::Morsecode(String morse_string){
    letter = translate_into_char(morse_string);
    binary_letter();
}

char Morsecode::translate_into_char(String morse_code_string){
    for(int increment = 0; increment < 26; increment++){
        if(strcmp(morse_code_string.c_str(), morse_char_array[increment].c_str())==0){
            return alphabet_array[increment];
        }
    }
}

unsigned char Morsecode::binary_letter(){
    for(int increment = 0)
}