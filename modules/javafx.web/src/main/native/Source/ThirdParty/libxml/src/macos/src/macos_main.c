#include <GUSICommandLine.h>#include <stdlib.h>#undef mainDECLARE_MAIN(test)REGISTER_MAIN_STARTREGISTER_MAIN(test)REGISTER_MAIN_ENDint main(){  (void) exec_commands();     return 0;}
