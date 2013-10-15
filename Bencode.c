#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>

#include "Bencode.h"

char* get_substring(const char* str, int beg, int n) {
    assert(beg - 1+n < strlen(str));
    char* ret = malloc(n + 1);
    strncpy(ret, (str + beg), n);
    *(ret+n) = 0;

    return ret;
}

char* parse_bencode_string(char* be_str) {
    int i;
    int len_str;
    sscanf(be_str, "%i", &len_str);
    for (i = 0; i < strlen(be_str); i++) {
        if (be_str[i - 1] == ':') {
            break;
        }
    }
    char* ret_str = get_substring(be_str, i, len_str);
    strncpy(ret_str, &be_str[i], len_str);
    return ret_str;
}

char* parse_bencode_integer(char* be_str) {
    return 0;
}

int main() {
    char* test = "4:spam";
    /*const char* res = parse_bencode_string(test);
    puts(res);*/
    printf("%s\n", parse_bencode_string(test));
    return 0;
}