#include<iostream>
#include<ctime>
using namespace std;

int main()
{
char area[11][12]={
	{"<=t=t=t=t=>"},
	{"| | | | | |"},
	{"a=+=+=+=+=b"},
	{"| | | | | |"},
	{"a=+=+=+=+=b"},
	{"| | | | | |"},
	{"a=+=+=+=+=b"},
	{"| | | | | |"},
	{"a=+=+=+=+=b"},
	{"| | | | | |"},
	{"[=-=-=-=-=]"},
	
};
//=(205),|(186),+(206),t(203),a(204),b(185),<(201),>(187),[(200),](188),-(202)

	for (int i=0;i<11;i++){
		for (int j=0;j<11;j++){
			char t = area[i][j];
			if(t == '|') {
				cout<<char(186);
			}
			else if(t == '='){
				cout<<char(205);
			}
			else if(t == '+'){
				cout<<char(206);
			}
			else if(t == 't'){
				cout<<char(203);
			}
			else if(t == 'a'){
				cout<<char(204);
			}
			else if(t == 'b'){
				cout<<char(185);
			}			
			else if(t == '<'){
				cout<<char(201);
			}
			else if(t == '>'){
				cout<<char(187);
			}
			else if(t == '['){
				cout<<char(200);
			}
			else if(t == ']'){
				cout<<char(188);
			}
			else if(t == '-'){
				cout<<char(202);
			}
			else {
				cout<<t;
			}
		}
		cout<<endl;
	}
}
