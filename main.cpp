//
//  COMPILE THIS FILE TO RUN YOUR PRORAMM
//
//------------------------------------------
#define ARGCV_NO
#include "mainutility.cpp"
//This is main file. Include your's main after this message
//Willkomen to main. Real one, not that you use!) 
int main (int _argc, const char* _argv [])
{
    try 
    {
      _SS_MAIN_ (); // calling your main, Hah!
    }

    // Catching all unexpexted, stay holding!
    catch (ExceptionHandler b)
    {
         txMessageBox (b.why(), "Syntax Sugar");
         system ("PAUSE");
         abort();
    }

    catch (std::exception a)
    {
         char tut [100]; 
         sprintf (tut, "===============\n\
                       	        Syntax sugar Debug Info\n\
                         	===============\n\
                         	\nstd::exception not catched exception. Program will abort\n\
                                \nFunction why returned: %s \n\
                          	If you want to do something here\nnext time, you need to define function UncatchedExit() in your main", a.why());
         txMessageBox (tut, "Syntax Sugar");
         system ("PAUSE");
         abort();
     }
    
    catch (...)
    {
          
         txMessageBox (
                        "===============\n\
                         Syntax sugar Debug Info\n\
                         ===============\n\
                         \nUnknown and not catched exception. Program will abort\n\
                           If you want to do something here next time, you need to define function UncatchedExit() in your main", 
                        "Syntax Sugar"
                       );
         system ("PAUSE");
         abort();
    }
}

#define  main SS_MAIN
#include "MainIncludeThere.cpp"
//------------------------------------------//
//                                          //
//                                          //
//    ......                                //
//   .                                      //
//   .                                      //
//    .....      Syntax Sugar for you       //
//         .                                //
//         .                                //
//   ......                                 //
//                                          //
//                                          //
//------------------------------------------//
//  Main replacer                           //
//==========================================//
//  Syntax Sugar Developer Tools            //
//  (C) Zurcj Development 2013              //
//  mae.pochta@gmail.com                    //
//------------------------------------------//
//  See GitHub README module for more info  //
//------------------------------------------//

#undef  main
#define main main



    
    
      
      
      
      
      
