#include "TXLib.h"

//
//      ......
//     .
//     .
//       ....   Syntax Sugar for you...
//           .
//           .
//     ......
//


#define ssFunction(NAME, VARIABLES, CODE, RETURN_TYPE) \
RETURN_TYPE NAME VARIABLES {  CODE  }

#define ssClass(NAME, TYPE, CODE) \
    struct NAME { TYPE : CODE  }

#define ssCheck(COND, STATEMENT_CODE, ELESWERE_CODE) \
    if(COND) {STATEMENT_CODE} else {ELESWERE_CODE}

#define ssArray(NAME, TYPE) TYPE NAME
#define ssArrayV(NAME, TYPE, VALUE) TYPE NAME = VALUE

#define ssPrintF (STATES) cout<<STATES;

#define ssVariableV(NAME, TYPE, VALUE) TYPE NAME = VALUE;
#define ssVariable(NAME, TYPE)        TYPE NAME;

#define ssInteger int
#define ssConstruct(NAME, VARIABLES, CODE) \
    NAME VARIABLES {  CODE  }
#define ssDestruct(NAME, VARIABLES, CODE) \
    ~ NAME VARIABLES {  CODE  }
#define ssOperator( OPERATOR , VARIABLES , CODE)



namespace SSugar
{  
     struct NonCopiableClass
     {
          NonCopiableClass (const NonCopiableClass&);
          NonCopiableClass& operator = (const NonCopiableClass&);
     };
     
     struct Infoq 
     {
       int size;
       int regno;
       int errorlve;
       
       Infoq (int s, int r, int e) {size = s; regno = r; errorlve = e;}
     };

     // syntax sugar is near its end
     
     class ResourseOwner 
     {
           void DeleteResource (Resource*, int size)
     template <typename Resource, > 
     class ResourceManager
     {
        private:
        int       counter; 
        Resource* res_;
        
        public: 
                
        ResourceManager (Resource* resz) {res_ = resz;}
       ~ResourceManager (Resource* resz) {res_ = resz;}
        
        bool new_user   () {counter++;}
        bool delete_user () {if (counter > 1) counter--; else DeleteResource ();}  
        Resource& GetResource () {return res;}
        
     };

     int REGNOMEYWOPOCATS = 0;
     const int MAX_SIZE = 1000;

     template <class AbsType>
     class Array
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
            
      
       Array ()         {zSize = 0;  Registry();   ERRORVLE = 9992221; Clear (0, 1000);}
       Array (int size) {zSize = size; Registry(); ERRORVLE = 9992221; Clear (0, 1000);}
         
       AbsType&  operator [] (int num)
       {        
                if (num > zSize) 
                {txMessageBox ("¬Õ»Ã¿Õ»≈!\n œ–Œ√–¿ÃÃ¿ ¬€ÿÀ¿ «¿ œ–≈ƒ≈À€, ÕŒ –≈—¿…«»À¿—‹ ÕŒ” œ–Œ¡À≈Ã √”“¡¿…!"); zSize = num;}
                return zData [num];
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
      
       
       //============================
       // Returns you size of array
       //============================
       
       int Size () {return zSize;}
       
       //============================
       // Returns you info of array
       //============================
       
       Infoq Info () {return Infoq(zSize, zRegNo, ERRORVLE);}
       
       //============================
       // return true if Array is empty (filled with zeroes)
       //============================
       
       bool Empty () {if(zSize != 0) {return false;} else {return true;}}
       
       //============================
       // Pushs to front
       //============================
       
       bool PushFront (int a) {zData [0] = a;}
       
       //============================
       // Pushs to back
       //============================
       
       bool PushBack (int a) {zData [zSize] = a;}
       
       //============================
       // Returns front element
       //============================
       
       int Front () {return zData [0];}
       
       //============================
       // Returns last element
       //============================
       
       int Back () {return zData [zSize];}
       
       //============================
       // Removes last element
       //============================
       
       bool PopBack () {zSize--;}
       
       //============================
       // Prints debug info
       //============================
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

       Array& operator = (Array& b)
       {          
           for (int i = 0; i < Size(); i++) {zData [i] = b[i];} 
       }

       bool operator == (Array& b)
       {
           for (int i = 0; i < Size(); i++) {if (zData [i] != b [i]) return false;}
           return true; 
       }
       
     };
    
    template <class AbsType, int ArrayMaxSize>
     class StaticArray
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
};         
          
          
