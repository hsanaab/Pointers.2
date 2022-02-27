#include <iostream>
#include <string>
#include <limits>
using namespace std;


int main() {
  int choice = 0;
  string temp;
  
  do {
    system("clear");
    cout << "\n\nWhich example program do wish to run?"<<endl;
    cout<<"\n1. Basics #1\n";
    cout<< "2. Basics #2\n";
    cout<<"3. Basics #3\n";
    cout<<"4. Basics #4\n";
    cout<<"5. Pointers and Objects #1\n";
    cout<<"6. Pointers and Objects #2\n";
    cout<<"7. Pointers and Objects #3\n";
    cout<<"8. Linked List #1\n";
    cout<<"9. Linked List #2\n";
    cout<<"10. Destructors #1\n";
    cout<<"11. Destructors #2\n";
    cout<<"12. Copy Constructors #1\n";
    cout<<"13. Copy Constructors #2\n";
    cout<<"99. Quit\n\n";
    cout<<"Choice? ";
    getline(cin,temp);
    choice = stoi(temp);
    
    switch(choice){
      case(1):
        cout<<"\nBasics #1\n\n";
        system("cd Basics && make -s Ex1 && ./Ex1 && rm Ex1 && cd ~");
        break;
      case(2):
        cout<<"\nBasics #2\n\n";
        system("cd Basics && make -s Ex2 && ./Ex2 && rm Ex2 && cd ~");
        break;
      case(3):
        cout<<"\nBasics #3\n\n";
        system("cd Basics && make -s Ex3 && ./Ex3 && rm Ex3 && cd ~");
        break;
      case(4):
        cout<<"\nBasics #4\n\n";
        system("cd Basics && make -s Ex4 && ./Ex4 && rm Ex4 && cd ~");
        break;
      case(5):
        cout<<"\nPointers and Objects #1\n\n";
        system("cd Objects && make -s Ob1 && ./Ob1 && rm Ob1 && cd ~");
        break;
      case(6):
        cout<<"\nPointers and Objects #2\n\n";
        system("cd Objects && make -s Ob2 && ./Ob2 && rm Ob2 && cd ~");
        break;
      case(7):
        cout<<"\nPointers and Objects #3\n\n";
        system("cd Objects && make -s Ob3 && ./Ob3 && rm Ob3 && cd ~");
        break;
      case(8):
        cout<<"\nLinked List #1\n\n";
        system("cd LinkedList && make -s List1 && ./List1 && rm List1 && cd ~");
        break;
      case(9):
        cout<<"\nLinked List #2\n\n";
        system("cd LinkedList && make -s List2 && ./List2 && rm List2 && cd ~");
        break;
      case(10):
        cout<<"\nDestructors #1\n\n";
        system("cd Destructors && make -s Des1 && ./Des1 && rm Des1 && cd ~");
        break;
      case(11):
        cout<<"\nDestructors #2\n\n";
        system("cd Destructors && make -s Des2 && ./Des2 && rm Des2 && cd ~");
        break;
      case(99):
        exit(0);
    }

      cout<<"\n\nHit enter to continue\n";
    cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
    
      
  } while (true);
  

  return 0;
}