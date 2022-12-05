#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std; 

class classes
{
  private:
  string className;
  int classGrade; 

  public:
  void setclassName()
{
  string n;
  getline(cin, n);
  for (int i =0; i < n.length(); i++)
    {
      n[i]= toupper(n[i]);
    }
  className = n; 
  
}
  void setclassGrade()
  { 
    
    int g;
    cin >> g;
    classGrade =g;
  }
  string getclassName() {return className;}
  int getclassGrade() {return classGrade;}

};
vector<classes> number(1);

 
int main()
{
  int size;
  cout << "Enter number of classes desired to input: ";
  cin >> size; 
  number.resize(size);

  for (int i = 0; i < number.size(); i++)
    {
        cout << "\nEnter Class " << i+1 << ": " << endl; 
        cin.ignore();
        cout << "\nEnter name: ";
        number.at(i).setclassName();
        cout << "\nEnter grade: ";
        number.at(i).setclassGrade();
      
    }
    
  ofstream out;

  cout <<"\nOpening the file...\n";
  out.open("file.csv");
  cout << "Writing to the file...\n";
  for (int i = 0; i < number.size(); i++)
    {
      out << "Class " << i+1 << ": " << endl; 
       out << "Name: " << number.at(i).getclassName() << endl;
       out << "Grade: " << number.at(i).getclassGrade() <<"%" << endl << endl; 
      
    }
  cout << "closing the file...\n";
  out.close();
  cout << "\n\ngoodbye\n";

  return 0;
}
