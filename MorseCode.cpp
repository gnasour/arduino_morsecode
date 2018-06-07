#include <Arduino.h>
#include <string.h>
#include "MorseCode.h"


Morsecode::Morsecode(String morse_string){
    letter = (int)translate_into_char(morse_string);
    
}

char Morsecode::translate_into_char(String morse_code_string){
    for(int increment = 0; increment < 26; increment++){
        if(strcmp(morse_code_string.c_str(), morse_char_array[increment].c_str())==0){
            return alphabet_array[increment];
        }
    }
}

String Morsecode::binary_letter(){
    for(int increment = 0; increment < 8; increment++){
        if((letter & 1) == 1){
            binary_string += "1";
        }else{
            binary_string += "0";
        }
        letter >>= 1;
    }
    binary_string = reverse_binary_string(binary_string);
    return binary_string;
}

String Morsecode::reverse_binary_string(String morse_code_string){
    for(int increment = 0; increment < 8; increment++){
        reversed_binary_string += morse_code_string[7-increment]; 
    }
    return reversed_binary_string;
}