//
//      ......                                        ............     .    .
//     .                                                   .            .  .
//     .                                                   .             ..             TXLib Addons
//       ....   Syntax Sugar for you...                    .             ..
//           .                                             .            .  .
//           .                                             .           .    .              
//     ......
//
//-----------------------------------
//  ssImageDeepCopiableClass
//
//  One of base classes
//-----------------------------------
//  Allows you to copy image classes with
//  pointer to HDC, not avoiding delete of pointer
//  after function termination.
//  Uses deep copy, this may take a time and operative
//  memory. Watch out anytime! 
//------------------------------------
//  Uses tx
//
//-----------------------------------
//  Last built: 19:04 26.09.2013
//  0.01 Alpha
//-----------------------------------

#ifndef  ssNoWarnings
#warning "You must use TXLib to compile this"
#endif

class ssImageDeepCopiable
{
      public:
      HDC file;
      char FileName_copy [100];
      
      ssImageDeepCopiable (char* filename) {file = txLoadImage (filename); strcpy (FileName_copy, filename);}
      ssImageDeepCopiable (ssImageDeepCopiable& that) : file (txLoadImage (that.FileName_copy);)
      {
           strcpy (FileName_copy, that.FileName_copy); 
      }
      ssImageDeepCopiable& operator = (ssImageDeepCopiable& that)
      {
           file = txLoadImage (that.FileName_copy, that.WR_copy);     
           strcpy (FileName_copy, that.FileName_copy); 
      }
}
