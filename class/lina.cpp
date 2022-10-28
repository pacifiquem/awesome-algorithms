#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int districts_MAX =10;
const int color_MAX =10;
const int animal_MAX=10;
int i;
int trials;
string result;


string randomDistrict(int disrict){
    string districts[districts_MAX]={"kicukiro","gasabo","rwamagana","nyabihu","Kayonza","ruhengeri","huye","burera","rulindo","musanze"};

    string districtResult="";
    for(i=0;i<disrict;i++){
        result = result + districts[rand() % districts_MAX];
        return result;
    
    };

    return 0;
};

string randomColor(int color){
    string colors[color_MAX]={"red","orange","green","yellow","indigo","violet","blue","purple","grey","skyblue"};

    string colorResult="";
    for(i=0;i<color;i++){
        result = result + colors[rand()% districts_MAX];
        return  result;
    }

    return 0;
};
string randomAnimal(int animal){
    string animals[animal_MAX]={"cheetal","kangaroo","dog","cow","hen","goat","sparrow","lion","tiger"};

    string animalResult="";
    for(i=0;i<animal;i++){
        result = result + animals[rand()%animal_MAX];
        return result;
    }
    return 0;
}
int main(){
    cout<<"=================================you ready?========================================="<<"\n";
     cout<<"\n";

     start:
    int choice;
    cout<<"\nChoose topic: "<<"\n";
    cout<<"\t1.DISTRICTS"<<"\n";
    cout<<"\t2.COLORS"<<"\n";
    cout<<"\t3.ANIMALS"<<"\n";
    cout<<"Your choice: ";
    cin>>choice;
    int trials = 5;

 if(choice == 1){
    srand(time(NULL));
    int disrict = 15;
    string disrictGuessed = randomDistrict(disrict);
    cout<<disrictGuessed<< endl;
    string finalDistrictResult;
    string continuePermition;


      char newLetter[30];
      for(int i=0;i<disrictGuessed.length();i++){
          newLetter[i] = '_';
      }
      int j = 10;
      bool checker = false;
        while(j>0){
            char currentLetter;
            cout<<"Enter a letter: ";
            cin >> currentLetter;
           
            for(int k = 0; k < disrictGuessed.length(); k++){
                if(currentLetter == disrictGuessed[k] ){
                    newLetter[k] = currentLetter;
                }                    
                cout << newLetter[k];
                finalDistrictResult = newLetter[k];
            }
            if(newLetter == disrictGuessed){
                checker = true;
                goto decision;
            }
           cout << "\nThe guess now is: " << newLetter << "\n";
           cout << j << " trials remaining";
           cout << endl;
           j--;
        }
        decision: 
         if(checker){
              cout<<"\nThe guessed word is: "<<newLetter<<"\n";
             cout << "\n---------------------YOU WIN-------------------" << endl;
        }else{
           cout << "---------------------YOU LOSE-------------------" << endl;
        }

        cout<<"DO you want to continue the game?(N/Y)";
        cin>>continuePermition;
        if(continuePermition == "y"){
            goto start;
        }
 }
 else if(choice == 2){
    srand(time(NULL));
    int color = 15;
    string colorGuessed = randomColor(color);
    cout<<colorGuessed<< endl;
    string finalColorResult;
    string continuePermition;


      char newLetter[30];
      for(int i=0;i<colorGuessed.length();i++){
          newLetter[i] = '_';
      }
      int j = 10;
      bool checker = false;
        while(j>0){
            char currentLetter;
            cout<<"Enter a letter: ";
            cin >> currentLetter;
           
            for(int k = 0; k < colorGuessed.length(); k++){
                if(currentLetter == colorGuessed[k] ){
                    newLetter[k] = currentLetter;
                }                    
                cout << newLetter[k];
                finalColorResult = newLetter[k];
            }
            if(newLetter == colorGuessed){
                checker = true;
                goto colorDecision;
            }
           cout << "\nThe guess now is: " << newLetter << "\n";
           cout << j << " trials remaining";
           cout << endl;
           j--;
        }
        colorDecision: 
        if(checker){
           cout<<"\nThe guessed word is: "<<newLetter<<"\n";
           cout << "\n---------------------YOU WIN-------------------" << endl;
        }else{
           cout << "---------------------YOU LOSE-------------------" << endl;
        }

        cout<<"DO you want to continue the game?(N/Y)";
        cin>>continuePermition;
        if(continuePermition == "y"){
            goto start;
        }
 }
  else if(choice == 3){
    srand(time(NULL));
    int animal = 15;
    string animalGuessed = randomAnimal(animal);
    cout<<animalGuessed<< endl;
    string finalAnimalResult;
    string continuePermition;


      char newLetter[30];
      for(int i=0;i<animalGuessed.length();i++){
          newLetter[i] = '_';
      }
      int j = 10;
      bool checker = false;
        while(j>0){
            char currentLetter;
            cout<<"Enter a letter: ";
            cin >> currentLetter;
           
            for(int k = 0; k < animalGuessed.length(); k++){
                if(currentLetter == animalGuessed[k] ){
                    newLetter[k] = currentLetter;
                }                    
                cout << newLetter[k];
                finalAnimalResult = newLetter[k];
            }
            if(newLetter == animalGuessed){
                checker = true;
                goto animalDecision;
            }
           cout << "\nThe guess now is: " << newLetter << "\n";
           cout << j << " trials remaining";
           cout << endl;
           j--;
        }
        animalDecision: 
        if(checker){
           cout<<"\nThe guessed word is: "<<newLetter<<"\n";
           cout << "\n---------------------YOU WIN-------------------" << endl;
        }else{
           cout << "---------------------YOU LOSE-------------------" << endl;
        }

        cout<<"DO you want to continue the game?(N/Y)";
        cin>>continuePermition;
        if(continuePermition == "y"){
            goto start;
        }
 }
 }