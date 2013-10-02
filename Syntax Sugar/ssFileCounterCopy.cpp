//
//      ......
//     .
//     .
//       ....   Syntax Sugar for you...
//           .
//           .
//     ......
//
//-----------------------------------
//  ssFileCounterCopiableClass
//
//  One of base classes
//-----------------------------------
//  Allows you to copy classes with
//  pointer to File, not avoiding delete of pointer
//  after function termination. Uses pointer counter technology
//  max optimized type.
//  For more fast but harder
//  usage use: ssNonCopiable, for ultimate: ssFilePtrCounter
//-----------------------------------
//  Last built: 19:04 26.09.2013
//  v0.3ea (0.02a) error/alpha
//-----------------------------------

class ssFileCounterCopiable
{
        private:
        int   counter; 
        FILE* res_;
        
        
        public: 
                
        ssFileCounterCopiable (char* filename, char WR) {file = fopen (filename)}
       ~ssFileCounterCopiable () {counter = 0; fclose (res_);}
        
        bool new_user   () {counter++;}
        bool delete_user () {if (counter > 1) counter--; else fclose(res_);} 
         
        File& GetFile () {return res_;}
        
};
