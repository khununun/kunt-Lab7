#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
    string text1,text2,text3,text4;
    cout << "Input text: ";
    cin >> text1;
    text2 = func3(text1);
    cout << "Reversed text: ";
    text3 = func1(text1);
    text4 = func1(text2);
    cout << text3 << "\n";
    cout << "Palindrome: ";
    if (text2 == text4)
    {
     cout << "Yes";
    }
    else
    {
    cout << "No";
    }
    return 0;
}
