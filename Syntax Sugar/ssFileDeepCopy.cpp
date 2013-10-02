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
//  ssFileDeepCopiableClass
//
//  One of base classes
//-----------------------------------
//  Allows you to copy classes with
//  pointer to File, not avoiding delete of pointer
//  after function termination.
//  Uses deep copy, this may take a time and operative
//  memory. Watch out anytime! For more fast but harder
//  usage use: ssNonCopiable, for fast: ssFilePtrCounter
//-----------------------------------
//  Last built: 19:04 26.09.2013
//  v2.0 (0.02) stable
//-----------------------------------

class ssFileDeepCopiable
{
      public:
      FILE* file;
      char FileName_copy [100];
      char WR_copy [1];
      
      ssFileDeepCopiable (char* filename, const char* WR) {file = fopen (filename, WR); strcpy (FileName_copy, filename); strcpy (WR_copy, WR);}
      ssFileDeepCopiable (ssFileDeepCopiable& that) : file (fopen (that.FileName_copy, that.WR_copy);)
      {
           strcpy (FileName_copy, that.FileName_copy); 
           strcpy (WR_copy,       that.WR_copy);
      }
      ssFileDeepCopiable& operator = (ssFileDeepCopiable& that)
      {
           file = fopen (that.FileName_copy, that.WR_copy);     
           strcpy (FileName_copy, that.FileName_copy); 
           strcpy (WR_copy,       that.WR_copy);
      }
}
