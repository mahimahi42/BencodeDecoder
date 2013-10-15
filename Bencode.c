#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>

#include "Bencode.h"

char* parse_bencode_string(char* be_str) {
    int i;
    int str_len;
    for (i = 0; i < (int)strlen(be_str); i++) {
        if (isdigit(be_str[i])) {
            int j = i;
            while (isdigit(be_str[i])) {
                j++;
            }
            if (be_str[j] == ':') {
                char buf[j - i + 1];
                memcpy(buf, &be_str[i], j - i);
                buf[j - i] = '\0';
                str_len(buf, NULL, 10);
                char ret_str[str_len + 1];
                memcpy(ret_str, &be_str[j + 1], str_len);
                ret_str[str_len - 1] = '\0';
                return ret_str;
            }
        }
    }
    char* ret_str = "";
    return ret_str;
}

char* parse_bencode_integer(char* be_str) {

}