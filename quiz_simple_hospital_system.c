
#include <stdio.h>
#include <stdlib.h>

int num_patient=5;//number of patient


struct patient {
   int id;
   char name[20];
   float weight;
   
};

//prototype of fonction
void Get_patient_data(struct patient *pArr);
void Print_patient_data(struct patient *pArr);
int Get_patient_index(struct patient pArr[],int ArrSize,int SearchID);


////////////////////////////////////////////////////////////////////////////////
int main()
{
  int SearchID,index_patient;
  
  struct patient pat[num_patient];//Array of structure
  
  Get_patient_data(pat);
  
 printf("entre patient ID :");
 scanf("%d",&SearchID);
 index_patient=Get_patient_index(pat,num_patient,SearchID);
 
 if(index_patient==-1){
     printf("patient not found");
 }
 else{
     Print_patient_data(&pat[index_patient]);
 }
 
 
 return 0;
}
 
/////////////////////////////////////////////////////////////////////////////

 void Get_patient_data(struct patient *pArr){
    int i;
   char *numer[]={"first","second","third","fourth","fifth"};
   
   for(i = 0; i < num_patient; i++)
   {
       printf("Enter %s id ,name and weight respectively: ",numer[i]);
       scanf("%d %s %f", &(pArr+i)->id,(pArr+i)->name, &(pArr+i)->weight);
   }

}

///////////////////////////////////////////////////////////////////////////

void Print_patient_data(struct patient *pArr){
     printf("Displaying Information:\n");
       printf("ID:%d   Name: %s   weight: %f\n",pArr->id,pArr->name, pArr->weight);
      
}

///////////////////////////////////////////////////////////////////////////////

int Get_patient_index(struct patient pArr[],int ArrSize,int SearchID){
    int chicker=-1,i;
    for( i = 0; i < ArrSize; i++){
        if(pArr[i].id==SearchID){ chicker=i;}
    }
    
    return chicker;

}
  
///////////////////////////////////////////////////////////////////////////////// 

   

