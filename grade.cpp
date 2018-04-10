/*
* Dana Nehls
* dnehls@umich.edu
* 04/09/2018
*
* This program will default to calculating a final grade given information
* from the user. If the '-d' flag is indicated, then the program will tell the
* user what grades they must get to receive their desired final grade.
*/
#include <iostream>
using namespace std;

int final_grade() {
  double final_grade = 0.0;
  int num_categories = 0;
  double temp_cat = 0.0;
  double temp_grade = 0.0;
  
  cout << "Enter the number of categories that your grade depends upon:\n";
  cin >> num_categories;
  cout << "Enter each category as a percentage, followed by a current grade percentage:\n";
  
  for (int i = 0; i < num_categories; ++i) {
    cin >> temp_cat >> temp_grade;
    final_grade += (temp_cat / 100.0) * temp_grade;
  }
  
  cout << "Final grade is " << final_grade << "%\n";
  
  return 0;
}

int desired_final_grade() {
  double desired_grade = 0.0;
  //int num_cat_pred = 0;
  //vector<int> pred_cats;
  //int temp_pred_cat = 0;
  int cat_pred = 0;
    //double prediction = 0.0;
  
  cout << "Enter the desired final grade as a percentage:\n";
  cin >> desired_grade;
  //cout << "Enter the number of categories that you wish to have predicted:\n";
  //cin >> num_cat_pred;
  //pred_cats.reserve(num_cat_pred);
  //cout << "Enter the categories that you wish to have predicted as percentages:\n";
  //for (int i = 0; i < num_cat_pred; ++i) {
    //cin >> temp_pred_cat;
    //pred_cats.push_back(temp_pred_cat);
  //}
  cout << "Enter the category that you wish to have predicted:\n";
  cin >> cat_pred;
  
  
  
  return 0;
}

int main(int argc, char** argv) {
  string flag = "-d";
  
  if (argc > 1 && argv[1] == flag) {
    desired_final_grade();
  }
  else {
    final_grade();
  }

  return 0;
}