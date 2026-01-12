 #include <iostream>
using namespace std;

int main() {
 int i = 0;

 while (i < 100) {
  i += 1;
  int pH;

  cout << "Enter the pH value read: " << endl;
  cin >> pH;

  if (pH < 7) {
   cout << "pH value "<< pH << "is ACIDIC, be careful!" << endl;
  }


  else if (pH == 7) {
   cout << "Your pH value "<< pH<< " is Neutral, LAME GUY"<< endl;

  }

  else if (pH > 7 and pH <= 14) {
   cout << "Your pH values  " << pH << "is Basic, like you"<< endl;

  }

  else {
   cout << "Get off my compiler!!!!"<< endl;
  }


 }




 return 0;
}
