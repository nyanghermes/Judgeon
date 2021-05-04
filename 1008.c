#include <stdio.h>
int main (void) 
    
{
    printf("#include <stdio.h> \n");
    printf("int main()\n");
    printf("{\n");
    printf("    printf(\"Hello World\\n\");\n");
    printf("    return %d;\n", 0);
    printf("}\n");
    return 0;
}
