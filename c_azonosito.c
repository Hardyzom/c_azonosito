#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_valid_c_identifier(const char* input){
    if(strlen(input) < 1){
        return 0;
    }
    else if(isdigit(input[0])){
        return 0;
    }
    else{
        for(int i = 0; i < strlen(input); i++){
            if(!(isalnum(input[i]) || input[i] == '_')){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    printf("%d\n",is_valid_c_identifier("long_and_mnemonic_identifier"));

return 0;

}