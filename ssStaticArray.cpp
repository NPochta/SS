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
//  ssStaticArray
//
//  One of base classes
//-----------------------------------
//  Allows you to keep your data in
//  static array, which is faster than
//  dynamic, but this have some features
//  which spreads array if you get out of zone
//  and checks you any function you do
//  Works with all types, check in Google/Yandex
//  <template> for more info.
//-----------------------------------
//  Last built: 14:33 23.09.2013
//  v 0.73 nightly
//-----------------------------------

int REGNOMEYWOPOCATS = 0;

template <class AbsType, int ArrayMaxSize>
     class ssStaticArray
     {
     private:
       
       int ERRORVLE;        
       int zSize;
       int zRegNo;
       AbsType zData [1000];
       
       bool Registry () {zRegNo = REGNOMEYWOPOCATS; REGNOMEYWOPOCATS++;}
       
       public:
       
       bool OK () {if(zSize < 0) {return false;} else {return true;}}
      
       bool Clear () {for (int i = 0; i < zSize; i++) zData[i] = 0; return OK();}  
       bool Clear (int first, int last) {for (int i = first; i < last; i++) zData[i] = 0;}  
            
      
       StaticArray ()         {zSize = 0;  Registry();   ERRORVLE = 9992221; Clear (0, 1000);}
       StaticArray (int size) {zSize = size; Registry(); ERRORVLE = 9992221; Clear (0, 1000);}
         
       AbsType&  operator [] (int num)
       {        
                if (num < zSize) return zData [num];
       }
       
       AbsType at (int pos)  {return zData [pos];}
       bool at (int pos, AbsType var)  
       {
           if (pos < MAX_SIZE) 
           {
               zData [pos] = var; 
               if (pos > zSize) 
               {zSize = pos;}}
               else 
                {txMessageBox ("Send this bug to developer\n EE_AA_OutOfOperativeException\n But program will still working");
           }
       }
      
       
       int Size () {return zSize;}
       
       bool Empty () {if(zSize != 0) {return false;} else {return true;}}
       
       
       bool DebugInfo ()
       {
              $b cout << "#include \"TXLib.h\" "; 
              $g cout << "//You are doing bad delete this and use <stdio.h>!!\n"; 
              $y cout << "QArray::DebugInfo"; if (OK()) {$g cout<<" //ok";$y} else {$r cout<<" ACHTUNG!! BAAD!!!!";}
              $y cout <<" \n {  \n";
              for(int t = 0; t < zSize; t++) 
              {
                      cout<<"     data ["<<t<<"] = "<<zData[t]<<"; \n";
              }
              cout << " }\n\n int main () \n { \n   ... \n }";$y
       }             

       StaticArray& operator = (StaticArray& b)
       {          
           for (int i = 0; i < Size(); i++) {zData [i] = b[i];} 
       }

       bool operator == (StaticArray& b)
       {
           for (int i = 0; i < Size(); i++) {if (zData [i] != b [i]) return false;}
           return true; 
       }
       
     };
