#include <iostream>
#include <string>
#include <stack>


using namespace std;
int main () {

    string n;

    cin >>n;


    stack <string> parent;

    parent.push(n);


if (parent.size() % 2 == 1)
bool isvalid = false;
//while (!parent.empty()){
//cout << parent.top()<< " ";
//parent.pop();
//}
 cout << isvalid;
return 0;
}
