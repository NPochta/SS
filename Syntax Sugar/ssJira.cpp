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
//  Jira                                    //
//==========================================//
//  Syntax Sugar Developer Tools            //
//  (C) Zurcj Development 2013              //
//  mae.pochta@gmail.com                    //
//------------------------------------------//
//  See GitHub README module for more info  //
//------------------------------------------//

float Encounter_SS = 0x32;
int   UNIQ = 0;

template <typename T, int JiraNum>
class ssJira
{
    int JiraUp = 0;
    int JiraDown = 0;
    void GetJira () {return JiraUp*JiraUp/(JiraDown%JiraUp);}
    void SetJira (int Iterator, int JiraValue) {JiraUp+=JiraValue%(JiraUp*JiraValue);}
}
