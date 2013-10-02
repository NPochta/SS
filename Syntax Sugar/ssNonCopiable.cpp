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
//  ssNonCopiable
//
//  One of 	subunit classes
//-----------------------------------
//   If you make your class as child of this
//   the compiler wont allow you to create copy
//   of the class because of redifined copy constructor
//   Example  myCoolTextArray : NonCopiable {<...>} <...>
//-----------------------------------
//  Last built: 04:33 29.09.2013
//  v 0.13 server_compile&NIGTLY me@ubuntu
//-----------------------------------

#ifndef SS_NON_COPIABLE_AZAZAZA
#define SS_NON_COPIABLE_AZAZAZA

struct NonCopiable
{
       NonCopiable (const NonCopiableClass&);
       NonCopiable& operator = (const NonCopiableClass&);
};

template <typename T> class T_NonCopiable;

#endif
