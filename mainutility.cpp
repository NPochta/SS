#include "TXLib.h"
#include "ss_info"
int _SS_MAIN_ (int argc, const char* argv []);
int _SS_MAIN_NULL ();

#define throw_exception(FuncName, Info) \
\
     ExceptionHandler thrw (__FILE__, __LINE__, FuncName, Info);\
     throw thrw;
      

class ExceptionHandler : std::exception
{
   char* FILE;
   int   LINE;
   char* FUNC;
   char* TIME;
    
   char* AI;
   
   ExceptionHandler (char* FILE_, int LINE_, char* FUNC_, char* AI_) :
                    FILE (FILE_), LINE (LINE_), FUNC(FUNC_), TIME (__TIME__), AI (AI_) {}
   char* why ()
   {
         char* info;
         sprintf (info, " ===============\n\
                       	  Syntax sugar Debug Info\n\
                          
                          ===============\n\
                          ExceptionHandler catched:\n\
                          In file %s compiled at %s\n \
                          Exception thrown at line: %d which is in function %s\n \
                          ----------------------------------------------------\n\
                          Additional info: %s \n\
                          If you want to abort program after this message define ABORT_EXCEPTION in your program"
                          Throw info: %s",
                          FILE, TIME, LINE, FUNC, AI);
         return info;
   }
};

