#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
using namespace std;
//objects
int main(){
string array[]={
"apple","banana","mango","orange","grapes","pineapple","watermelon","peach","pear","cherry","strawberry","blueberry",
"lion","tiger","elephant","zebra","giraffe","monkey","horse","dog","cat","rabbit","fox","wolf","bear","deer","camel","goat","sheep",
"lahore","karachi","islamabad","chiniot","faisalabad","multan","pakistan","india","china","turkey","canada","germany","france",
"computer","laptop","keyboard","mouse","monitor","internet","website","software","hardware","network","server","database",
"python","java","javascript","coding","programming","developer","engineer","function","variable","loop","condition","object","class",
"school","college","university","teacher","student","principal","classroom","lecture","assignment","homework","exam","result","degree",
"car","bus","train","airplane","helicopter","bicycle","motorcycle","rocket","vehicle","driver","passenger","ticket","journey",
"river","mountain","ocean","desert","forest","island","valley","hill","weather","climate","rain","storm","thunder","lightning","sunshine",
"chair","table","bed","sofa","door","window","bottle","glass","plate","spoon","fork","knife","bag","box","clock","watch","camera",
"run","walk","sit","stand","jump","read","write","listen","speak","watch","play","learn","teach","build","create","destroy",
"happy","sad","angry","excited","bored","tired","hungry","thirsty","sleepy","strong","weak","fast","slow","bright","dark",
"encryption","algorithm","architecture","framework","application","interface","optimization","integration","deployment",
"authentication","authorization","cybersecurity","artificial","intelligence","machinelearning","datascience","blockchain",
"mobile","charger","battery","speaker","microphone","headphones","calculator","notebook","pencil","eraser","marker",
"football","cricket","tennis","hockey","badminton","stadium","tournament","champion","practice","training"
};
//hints
string hints[] = {
// Fruits
"fruit","fruit","fruit","fruit","fruit","tropical fruit","large fruit","fruit","fruit","fruit","berry","berry",

// Animals
"animal","animal","large animal","striped animal","tall animal","animal","animal","pet animal","pet animal","small animal","wild animal","wild animal","wild animal","wild animal","desert animal","farm animal","farm animal",

// Cities / Countries
"city in Pakistan","city in Pakistan","capital of Pakistan","city in Pakistan","city in Pakistan","city in Pakistan","country","country","country","country","country","country","country",

// Technology
"electronic device","portable computer","typing device","input device","display screen","global network","online page","programs","physical parts","connection system","data server","data storage",
"programming language","programming language","programming language","writing code","writing programs","software maker","technical person","block of code","stores data","repeating code","decision making","data structure","OOP concept",

// Education
"place to study","higher education","higher studies","teaches students","learner","school head","study room","class teaching","given task","home task","test","marks","qualification",

// Transport
"vehicle","public transport","rail transport","air transport","flying vehicle","two wheel","two wheel engine","space vehicle","transport","drives vehicle","traveler","travel pass","trip",

// Nature
"water flow","high land","large water","dry land","trees area","land with water","low land","small mountain","atmosphere","weather condition","water from sky","bad weather","loud sound","electric light","sun light",

// Objects
"furniture","furniture","sleeping place","furniture","entry","glass opening","container","drinking item","eating item","eating tool","eating tool","cutting tool","carry item","container","time device","time device","photo device",

// Actions
"movement","movement","action","action","action","action","action","action","action","action","action","action","action","action","action","action",

// Emotions
"feeling","feeling","feeling","feeling","feeling","feeling","feeling","feeling","feeling","strength","weakness","speed","speed","light","darkness",

// Advanced Words
"security method","problem solving steps","system design","structure","software","connection","improvement","combining","launching",
"login security","access control","security field","AI concept","AI concept","AI field","data field","data field","crypto tech",

// Random Useful Words
"phone","power device","power storage","sound device","audio device","audio device","math tool","writing book","writing tool","remover","marker",
"sport","sport","sport","sport","sport","place","competition","winner","practice","training"
};
//logo
cout << "\n\n\n";

cout << "                                 _   _                                  \n";
cout << "                                | | | | __ _ _ __   __ _ _ __ ___   __ _ \n";
cout << "                                | |_| |/ _` | '_ \\ / _` | '_ ` _ \\ / _` |\n";
cout << "                                |  _  | (_| | | | | (_| | | | | | | (_| |\n";
cout << "                                |_| |_|\\__,_|_| |_|\\__, |_| |_| |_|\\__,_|\n";
cout << "                                                   |___/                \n";

cout << "\n\n\n";
//game rules
  cout << "Game Rules:\n";
cout << "- Guess the hidden word using the hint.\n";
cout << "- Enter one letter at a time.\n";
cout << "- Correct letters will be revealed.\n";
cout << "- Wrong guesses reduce chances.\n";
cout << "- Limited attempts only.\n";
cout << "Win: Guess the word.\n";
cout << "Lose: Run out of chances.\n\n\n\n";
//announcing the game is started
cout<<"the game is started\n";
	vector <int> nums;
    
	int arraySize=sizeof(array)/sizeof(array[0]);
	for(int i=0;i<arraySize;i++){
		nums.push_back(i);
		nums[i];
		}
	
		
	
//seeding the rand()
	srand(time(0));
//rand variable
		int num=(rand()%arraySize);
		//character legnth
		   int character= array[num].length();
		   //word
    string word=array[num];
    //display
string display(character, '_');
//displaying hint
cout << "HINT:"<<hints[num] << endl;
//showing score and display
cout<<display<<"  (Your score is 0)"<<"\n";	int z=3;
	//score variable
	int score=0;
	//vector for the user choosed variables
	vector<string> chooser;
       	
	//loop
	while(z>0){
		//user guess
	string chose;
	cout<<"What is your guess:";
	cin>>chose;
	//correct or incorrect variable
	  	bool found=false;
bool already = false;
//checking the user do not have entered the word before
for(int i = 0; i < chooser.size(); i++){
    if(chose == chooser[i]){
        already = true;
        break;
    }
}

if(already){
    cout << "You already guessed this letter!\n";
    continue;
}

chooser.push_back(chose);
//checking user guess  
  	for(int i=0;i<character;i++){
  	if(word[i] == chose[0] ){
	  	       display[i]=chose[0];
			  found =true;

			  
            score++;

		  }
		  
		
   
  }
  //validating user input
  if(chose.length() != 1){
    cout << "Enter only one letter!" << endl;
    continue;
}
  //checking user guess
  if(!found){   
            z--;
            cout << "Wrong! your score decreases Chances left: " << z << endl;
            score--;
        }
        //displaying user score and the word
         cout<<display<<"  (Your score is "<<score<<")"<<"\n";
         //ui for you lose
 if(z==0){
    cout << "You Lose! with the score of " << score <<" The word was: " << word <<" Better luck next time"<< endl;

    break;
}
//you won
  if(display==word){
    cout << "You won Word is: " << word << endl;
    
    break;
    
}
  }}
  
  
  
 
   
   
  

