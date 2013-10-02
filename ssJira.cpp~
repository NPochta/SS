#include "TXLib.h"

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
//  Dynamic Data                            //
//==========================================//
//  Syntax Sugar Developer Tools            //
//  (C) Zurcj Development 2013              //
//  mae.pochta@gmail.com                    //
//------------------------------------------//
//  See GitHub README module for more info  //
//------------------------------------------//

int LT_num = 0;

template <typename T> class ssDynamicDataHandler
{
   T* data;
   int UniqueNumber;
   ssDataHandler () {UniqueNumber = LT_num; LT_num++; data = new T;}
  ~ssDataHandler () {delete data;}
}
