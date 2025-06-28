#include "hamming.h"
int compute (const char *lhs, const char *rhs){
    int length = strlen (lhs);
    int length2 = strlen(rhs);
    int c = 0;
    if ( length != length2 || (rhs[0]!='\0' && lhs[0]=='\0') || (rhs[0]=='\0' && lhs[0]!='\0')){ c = -1;}
    else if (rhs[0]=='\0' && lhs[0]=='\0'){ c = 0;}
    else{
        for (int i = 0; i < length; i++){
            if (lhs[i] != rhs[i])
                c++;
        }
    }
    
    return c;
}
