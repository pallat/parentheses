#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool check(char s[]) {
    int i;
    int x = -1;
    
    int len = strlen(s);
    for (i = 0; i < len; i++) {
        if (s[i] == '{') {
            x = i;
            continue;
        }
        
        if (s[i] == '}') {
            if (x == -1) {
                return false;
            }
            
            if ((i - x) != 1) {
                return false;
            }
            
            x = -1;
        }
    }
    
    if (x != -1) {
        return false;
    }
    
    return true;
}

char* boolean(int i) {
    if (i == 1) {
        return "true";
    }
    return "false";
}

int main()
{
    char s1[] = "xxxxxxxxxxx{}xxxxxxxxxxxxxxx";
    char s2[] = "xxxxxxxxxxx{}xxxxxxx{}xxxxx";
    char s3[] = "xxxxxxxxxxx{}xxxxxxx{x}xxxxx";
    char s4[] = "xxxxxxxxxxx{x}xxxxxxxxxxxxxxx";
    char s5[] = "xxxxxxxxxxx}{xxxxxxxxxxxxxxx";
    char s6[] = "{xxxxxxxxxxxxxxx";
    char s7[] = "xxxxxxxxxxxxxxx}x";
    
    bool result1 = check(s1);
    bool result2 = check(s2);
    bool result3 = check(s3);
    bool result4 = check(s4);
    bool result5 = check(s5);
    bool result6 = check(s6);
    bool result7 = check(s7);

    printf("%s %d\n",s1,result1);
    printf("%s %d\n",s2,result2);
    printf("%s %d\n",s3,result3);
    printf("%s %d\n",s4,result4);
    printf("%s %d\n",s5,result5);
    printf("%s %d\n",s6,result6);
    printf("%s %d\n",s7,result7);

    return 0;
}

