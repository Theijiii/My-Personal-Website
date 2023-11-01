#include <iostream>
#include <windows.h>
using namespace std;

void mnscr();
void lstscr();
void scrs10();
void sub1();
void sub2();
void sub3();
void sub4();
void sub5();
void sub6();
void sub7();
void sub8();
void sub9();

	string fname, lname, mname, sec;
	
	//1. First Subject
	char sub1anskey[15] = {'A', 'A', 'B', 'C', 'D', 'B', 'B', 'B', 'A', 'C', 'D', 'A', 'B', 'C', 'D'};
	char sub1ans[15];
	int sub1tot = 0;
	
	//2. Second Subject
	char sub2anskey[15] = {'A', 'A', 'B', 'C', 'D', 'B', 'B', 'B', 'A', 'C', 'D', 'A', 'B', 'C', 'D'};
	char sub2ans[15];
	int sub2tot = 0;
	
	//3. Third Subject
	char sub3anskey[15] = {'A', 'A', 'B', 'C', 'D', 'B', 'B', 'B', 'A', 'C', 'D', 'A', 'B', 'C', 'D'};
	char sub3ans[15];
	int sub3tot = 0;
	
	//4. Fourth Subject
	char sub4anskey[15] = {'A', 'A', 'B', 'C', 'D', 'B', 'B', 'B', 'A', 'C', 'C', 'A', 'B', 'D', 'C'};
	char sub4ans[15];
	int sub4tot = 0;
	
	//5. Fifth Subject
	char sub5anskey[15] = {'A', 'B', 'C', 'D', 'D', 'C', 'D', 'C', 'A', 'C', 'C', 'C', 'A', 'D', 'B'};
	char sub5ans[15];
	int sub5tot = 0;
	
	//6. Sixth Subject
	char sub6anskey[15] = {'A', 'A', 'B', 'C', 'D', 'B', 'B', 'B', 'A', 'C', 'D', 'A', 'B', 'C', 'D'};
	char sub6ans[15];
	int sub6tot = 0;
	
	//7. Seventh Subject
	char sub7anskey[15] = {'A', 'A', 'B', 'C', 'D', 'B', 'B', 'B', 'A', 'C', 'D', 'A', 'B', 'C', 'D'};
	char sub7ans[15];
	int sub7tot = 0;
	
	//8. Eigth Subject
	char sub8anskey[15] = {'A', 'B', 'C', 'D', 'B', 'D', 'A', 'C', 'D', 'C', 'D', 'C', 'B', 'C', 'A'};
	char sub8ans[15];
	int sub8tot = 0;
	
	//9. Ninth Subject
	char sub9anskey[15] = {'A', 'A', 'B', 'C', 'D', 'B', 'B', 'B', 'A', 'C', 'D', 'A', 'B', 'C', 'D'};
	char sub9ans[15];
	int sub9tot = 0;
	
int main() {
	
		cout << "First Name:  ";
		getline(cin,fname);
		cout << "Middle Name:  ";
		getline(cin,mname);
		cout << "Last Name:  ";
		getline(cin,lname);
		cout << "Section:  ";
		getline(cin,sec);
		
		cout << "\n";
		
	mnscr();
		
return 0;
}

void mnscr() {
	system("Color 07");
	int chse;
	
		cout << fname << " " << mname << " " << lname << endl;
		cout << sec;
		cout << "\n\n";
	
		cout << "1 Purposive Communication\n";
		cout << "2 Art Appreciation\n";
		cout << "3 Science, Technology & Society\n";
		cout << "4 Ethics\n";
		cout << "5 National Service Training Program 2\n";
		cout << "6 Computer Programming 2\n";
		cout << "7 Filipino sa Disiplina\n";
		cout << "8 Discrete Mathematics\n";
		cout << "9 Physical Education 2\n";
		cout << "10 See scores\n";
		cout << "11 Exit\n";
		cout << "Choose:  ";
		cin >> chse;
	
	if(chse == 1) {
			system("cls");
			sub1();
	}
	
	else if(chse == 2) {
			system("cls");
			sub2();
	}
	
	else if(chse == 3) {
			system("cls");
			sub3();
	}
	
	else if(chse == 4) {
			system("cls");
			sub4();
	}
	
	else if(chse == 5) {
			system("cls");
			sub5();
	}
	
	else if(chse == 6) {
			system("cls");
			sub6();
	}
	
	else if(chse == 7) {
			system("cls");
			sub7();
	}
	
	else if(chse == 8) {
			system("cls");
			sub8();
	}
	
	else if(chse == 9) {
			system("cls");
			sub9();
	}
	
	else if(chse == 10) {
		system("cls");
		scrs10();
	}
	
	else if(chse == 11) {
		exit(0);
	}
	
	else {
		system("cls");
		cout << "Invalid character!\n\n";
		mnscr();
	}
}

void scrs10() {
	
		cout << fname << " " << mname << " " << lname << endl;
		cout << sec;
		cout << "\n\nScores: \n\n";
		cout << "Purposive Communication = " << sub1tot << " / 15\n\n";
		cout << "Art Appreciation = " << sub2tot << " / 15\n\n";
		cout << "Science, Technology & Society = " << sub3tot << " / 15\n\n";
		cout << "Ethics = " << sub4tot << " / 15\n\n";
		cout << "National Service Training Program 2 = " << sub5tot << " / 15\n\n";
		cout << "Computer Programming 2 = " << sub6tot << " / 15\n\n";
		cout << "Filipino sa Disiplina = " << sub7tot << " / 15\n\n";
		cout << "Discrete Mathematics = " << sub8tot << " / 15\n\n";
		cout << "Physical Education 2 = " << sub9tot << " / 15\n\n";
		
	lstscr();
}
	
void lstscr() {
	
	char yn;
	
		cout << "\nDo you still want to continue (Y/N)?  ";
		cin >> yn;
		
	switch(yn) {
		case 'Y': case 'y': system("cls"); mnscr(); break;
		case 'N': case 'n': exit(0); break;
		default: cout << "Invalid character!"; lstscr(); break;
	}
}

void sub1() {
	
		cout << "ENTER THE CORRECT ANSWER";
	
		cout << "\n\n1. This is an important part of body language.\n\n";
		cout << "A. POSTURE \tB. GESTURES \tC. STANDING \tD. PROXIMITY\n\n";
		cout << "Answer:  ";
		cin >> sub1ans[0];
	if(sub1ans[0] == sub1anskey[0]) {
		sub1tot++;
	}
	
		cout << "\n2. The pitch, volume and inflection of your voice.\n\n";
		cout << "A. TONE \tB. PITCH \tC. GESTURES \tD. SOUND\n\n";
		cout << "Answer:  ";
		cin >> sub1ans[1];
	if(sub1ans[1] == sub1anskey[1]) {
		sub1tot++;
	}
	
		cout << "\n3. This is one way to show interest or sincerity.\n\n";
		cout << "A. POSTURE \tB. EYE CONTACT \tC. TONE \tD. GESTURES\n\n";
		cout << "Answer:  ";
		cin >> sub1ans[2];
	if(sub1ans[2] == sub1anskey[2]) {
		sub1tot++;
	}
	
		cout << "\n4. Distance of the message sender to the reciever.\n\n";
		cout << "A. MEDIA \tB. CONNECTION \tC. PROXIMITY \tD. COMMUNICATION\n\n";
		cout << "Answer:  ";
		cin >> sub1ans[3];
	if(sub1ans[3] == sub1anskey[3]) {
		sub1tot++;
	}
	
		cout << "\n5. Hand movements used to emphasize a point.\n\n";
		cout << "A. COMMUNICATION \tB. TONE \tC. POSTURES \tD. GESTURES\n\n";
		cout << "Answer:  ";
		cin >> sub1ans[4];
	if(sub1ans[4] == sub1anskey[4]) {
		sub1tot++;
	}
	
		cout << "\n6.Your communication skills affect your school life in many ways.\n\n";
		cout << "A. SCHOLAR \tB. SCHOOL \tC. FRIENDS \tD. CLASSMATES\n\n";
		cout << "Answer:  ";
		cin >> sub1ans[5];
	if(sub1ans[5] == sub1anskey[5]) {
		sub1tot++;
	}
	
		cout << "\n7. To get the audience to listen.\n\n";
		cout << "A. ACTION \tB. ATTENTION \tC. SATISFACTION \tD. NEED\n\n";
		cout << "Answer:  ";
		cin >> sub1ans[6];
	if(sub1ans[6] == sub1anskey[6]) {
		sub1tot++;
	}
	
		cout << "\n8. To get the audience to take action.\n\n";
		cout << "A. ATTENTION \tB. ACTION \tC. SATISFACTION \tD. NEED\n\n";
		cout << "Answer:  ";
		cin >> sub1ans[7];
	if(sub1ans[7] == sub1anskey[7]) {
		sub1tot++;
	}
	
		cout << "\n9.To tell audience how to fill need and want .\n\n";
		cout << "A. SATISFACTION \tB. ATTENTION \tC. ACTION \tD. NEED\n\n";
		cout << "Answer:  ";
		cin >> sub1ans[8];
	if(sub1ans[8] == sub1anskey[8]) {
		sub1tot++;
	}
	
		cout << "\n10. To get audience to see a problem.\n\n";
		cout << "A. SATISFACTION \tB. ACTION \tC. NEED \tD. VISUALIZATION\n\n";
		cout << "Answer:  ";
		cin >> sub1ans[9];
	if(sub1ans[9] == sub1anskey[9]) {
		sub1tot++;
	}
	
		cout << "\n11. To get the audience to see benefits of solution.\n\n";
	    cout << "A. SATISFACTION \tB. ATTENTION \tC. ACTION \tD. VISUALIZATION\n\n";
		cout << "Answer:  ";
		cin >> sub1ans[10];
	if(sub1ans[10] == sub1anskey[10]) {
		sub1tot++;
	}
	
		cout << "\n12. The language that you use in formal settings and is one-way in nature.\n\n";
		cout << "A. FORMAL REGISTER \tB. STATIC REGISTER\tC. INTIMATE REGISTER \tD. CASUAL REGISTER\n\n";
		cout << "Answer:  ";
		cin >> sub1ans[11];
	if(sub1ans[11] == sub1anskey[11]) {
		sub1tot++;
	}
	
		cout << "\n13. The style of communication that rarely or never changes.\n\n";
		cout << "A. FORMAL REGISTER \tB. STATIC REGISTER\tC. INTIMATE REGISTER \tD. CASUAL REGISTER\n\n";
		cout << "Answer:  ";
		cin >> sub1ans[12];
	if(sub1ans[12] == sub1anskey[12]) {
		sub1tot++;
	}
	
		cout << "\n14. Type of communication that is private.\n\n";
		cout << "A. FORMAL REGISTER \tB. STATIC REGISTER\tC. INTIMATE REGISTER \tD. CASUAL REGISTER\n\n";
		cout << "Answer:  ";
		cin >> sub1ans[13];
	if(sub1ans[13] == sub1anskey[13]) {
		sub1tot++;
	}
	
		cout << "\n15. Informal language used by peers or friends.\n\n";
		cout << "A. FORMAL REGISTER \tB. STATIC REGISTER\tC. INTIMATE REGISTER \tD. CASUAL REGISTER\n\n";
		cout << "Answer:  ";
		cin >> sub1ans[14];
	if(sub1ans[14] == sub1anskey[14]) {
		sub1tot++;
	}
	
		cout << "\n\n" << fname << " " << mname << " " << lname << "\n";
		cout << sec;
		cout << "\nYou've got " << sub1tot << " out of 15\n\n";
		
	if(sub1tot <= 7) {
		system("Color 46");
		cout << "FAILED!\n";
	}
	
	else if(sub1tot >= 8) {
		system("Color 21");
		cout << "PASSED!\n";
	}
	
	lstscr();
}

void sub2() {
	
		cout << "ENTER THE CORRECT ANSWER";
	
		cout << "\n\n1.Our Human Legacy.\n\n";
		cout << "A. PRIMARY \tB. THIRD \tC. SECONDARY \tD. FIRST\n\n";
		cout << "Answer:  ";
		cin >> sub2ans[0];
	if(sub2ans[0] == sub2anskey[0]) {
		sub2tot++;
	}
	
		cout << "\n2. Accumulated over the ages.\n\n";
		cout << "A. SECONDARY \tB. PRIMARY \tC. FIRST \tD. THIRD\n\n";
		cout << "Answer:  ";
		cin >> sub2ans[1];
	if(sub2ans[1] == sub2anskey[1]) {
		sub2tot++;
	}
	
		cout << "\n3. To increase awareness of man's relationship with God'.\n\n";
		cout << "A. AESTHETIC \tB. RELIGIOUS \tC. HISTORICAL \tD. DIDACTIC\n\n";
		cout << "Answer:  ";
		cin >> sub2ans[2];
	if(sub2ans[2] == sub2anskey[2]) {
		sub2tot++;
	}
	
		cout << "\n4. When clarifies some problems of the society.\n\n";
		cout << "A. COMMERCIAL \tB. SCIENTIFIC \tC. SOCIO-POLITICAL \tD. ECONOMIC\n\n";
		cout << "Answer:  ";
		cin >> sub2ans[3];
	if(sub2ans[3] == sub2anskey[3]) {
		sub2tot++;
	}
	
		cout << "\n5. Influence proper human behaviour.\n\n";
		cout << "A. COMMERCIAL FUNCTION \tB. SOCIETY \tC. PERSONAL FUCTION \tD. SOCIAL FUNCTION\n\n";
		cout << "Answer:  ";
		cin >> sub2ans[4];
	if(sub2ans[4] == sub2anskey[4]) {
		sub2tot++;
	}
	
		cout << "\n6. Great masterpiece of art is never out of date.\n\n";
		cout << "A. MATERIALS \tB. INTRINSIC WORTH OF ART \tC. REALIZATION OF ART \tD. ART HISTORY\n\n";
		cout << "Answer:  ";
		cin >> sub2ans[5];
	if(sub2ans[5] == sub2anskey[5]) {
		sub2tot++;
	}
	
		cout << "\n7. Disatnce between, around, above, below and within things.\n\n";
		cout << "A. TIME \tB. SPACE \tC. DISCTANCE \tD. FORM\n\n";
		cout << "Answer:  ";
		cin >> sub2ans[6];
	if(sub2ans[6] == sub2anskey[6]) {
		sub2tot++;
	}
	
		cout << "\n8. An object with three dimensions.\n\n";
		cout << "A. SPACE \tB. FORM \tC. DISTANCE \tD. TIME\n\n";
		cout << "Answer:  ";
		cin >> sub2ans[7];
	if(sub2ans[7] == sub2anskey[7]) {
		sub2tot++;
	}
	
		cout << "\n9. Communicated by artistic creativity.\n\n";
		cout << "A. BEAUTY \tB. ARTWORK \tC. ART \tD. AESTHETIC\n\n";
		cout << "Answer:  ";
		cin >> sub2ans[8];
	if(sub2ans[8] == sub2anskey[8]) {
		sub2tot++;
	}
	
		cout << "\n10. Skill of creating image.\n\n";
		cout << "A. DRAWING \tB. PAINTING \tC. PHOTOGRAPHY \tD. SCULPTURE\n\n";
		cout << "Answer:  ";
		cin >> sub2ans[9];
	if(sub2ans[9] == sub2anskey[9]) {
		sub2tot++;
	}
	
		cout << "\n11. Use of art merely for personal gain.\n\n";
		cout << "A. INTERIOR DESIGN \tB. PHYSICAL FUNCTION \tC. SOCIAL FUNCTION \tD. PERSONAL FUNCTION\n\n";
		cout << "Answer:  ";
		cin >> sub2ans[10];
	if(sub2ans[10] == sub2anskey[10]) {
		sub2tot++;
	}
	
		cout << "\n12. Art as imitation.\n\n";
		cout << "A. PLATO \tB. ARISTOTLE \tC. SOCRATES \tD. VICTOR COUSIN\n\n";
		cout << "Answer:  ";
		cin >> sub2ans[11];
	if(sub2ans[11] == sub2anskey[11]) {
		sub2tot++;
	}
	
		cout << "\n13. Art as Representation.\n\n";
		cout <<  "A. PLATO \tB. ARISTOTLE \tC. SOCRATES \tD. VICTOR COUSIN\n\n";
		cout << "Answer:  ";
		cin >> sub2ans[12];
	if(sub2ans[12] == sub2anskey[12]) {
		sub2tot++;
	}
	
		cout << "\n14. Art for Art's Sake'.\n\n";
		cout <<  "A. PLATO \tB. ARISTOTLE \tC. VICTOR COUSIN \tD. SOCRATES\n\n";
		cout << "Answer:  ";
		cin >> sub2ans[13];
	if(sub2ans[13] == sub2anskey[13]) {
		sub2tot++;
	}
	
		cout << "\n15. Main character or focus.\n\n";
		cout << "A. OBJECT \tB. FORMS \tC. CONTENT \tD. SUBJECT\n\n";
		cout << "Answer:  ";
		cin >> sub2ans[14];
	if(sub2ans[14] == sub2anskey[14]) {
		sub2tot++;
	}
	
		cout << "\n\n" << fname << " " << mname << " " << lname << "\n";
		cout << sec;
		cout << "\nYou've got " << sub2tot << " out of 15\n\n";
		
	if(sub2tot <= 7) {
		system("Color 46");
		cout << "FAILED!\n";
	}
	
	else if(sub2tot >= 8) {
		system("Color 21");
		cout << "PASSED!\n";
	}
	
	lstscr();
}

void sub3() {
	
		cout << "Enter capital letters only!";
	
		cout << "\n\n1. Metal, Rocks and Other lifeless things.\n\n";
		cout << "A. MINERAL \tB. ANIMAL \tC. VEGETATIVE \tD. HUMAN\n\n";
		cout << "Answer:  ";
		cin >> sub3ans[0];
	if(sub3ans[0] == sub3anskey[0]) {
		sub3tot++;
	}
	
		cout << "\n2. Acting according to principles is something that only _____ can do.\n\n";
		cout << "A. HUMAN \tB. ANIMAL \tC. VEGETATIVE \tD. MINERAL\n\n";
		cout << "Answer:  ";
		cin >> sub3ans[1];
	if(sub3ans[1] == sub3anskey[1]) {
		sub3tot++;
	}
	
		cout << "\n3. All the creatures we study that belong to the animal kingdom.\n\n";
		cout << "A. HUMAN \tB. ANIMAL \tC. VEGETATIVE \tD. MINERAL\n\n";
		cout << "Answer:  ";
		cin >> sub3ans[2];
	if(sub3ans[2] == sub3anskey[2]) {
		sub3tot++;
	}
	
		cout << "\n4. Plants and other wildlife.\n\n";
		cout <<"A. HUMAN \tB. ANIMAL \tC. VEGETATIVE \tD. MINERAL\n\n";
		cout << "Answer:  ";
		cin >> sub3ans[3];
	if(sub3ans[3] == sub3anskey[3]) {
		sub3tot++;
	}
	
		cout << "\n5. Pursuit of Happiness as the exercise of virtue.\n\n";
		cout << "A. MAXWELL \tB. PLATO \tC. SOCRATES \tD. ARISTOTLE\n\n";
		cout << "Answer:  ";
		cin >> sub3ans[4];
	if(sub3ans[4] == sub3anskey[4]) {
		sub3tot++;
	}
	
		cout << "\n6. Satisfaction of certain standards or goals for our lives.\n\n";
		cout << "A. DESIRE-SATISFACTION \tB. LIFE-SATISFACTION \tC. HEDONISTIC THEORIES \tD. NECOMACHEAN ETHICS\n\n";
		cout << "Answer:  ";
		cin >> sub3ans[5];
	if(sub3ans[5] == sub3anskey[5]) {
		sub3tot++;
	}
	
		cout << "\n7. Satisfaction of all desires for one's life.\n\n";
		cout << "A. LIFE-SATISFACTION \tB. DESIRE-SATISFACTION \tC. HEDONISTIC THEORIES \tD. NECOMACHEAN ETHICS\n\n";
		cout << "Answer:  ";
		cin >> sub3ans[6];
	if(sub3ans[6] == sub3anskey[6]) {
		sub3tot++;
	}
	
		cout << "\n8. This machine's expertise is to narrow down in scope.\n\n";
		cout << "A. GENERAL INTELLEGENCE \tB. NARROW AI \tC. ROBOTICS \tD. ROBOT\n\n";
		cout << "Answer:  ";
		cin >> sub3ans[7];
	if(sub3ans[7] == sub3anskey[7]) {
		sub3tot++;
	}
	
		cout << "\n9. Able tp perform everything equally or better than humans.\n\n";
		cout << "A. GENERAL INTELLEGENCE \tB. NARROW AI \tC. ROBOTICS \tD. ROBOT\n\n";
		cout << "Answer:  ";
		cin >> sub3ans[8];
	if(sub3ans[8] == sub3anskey[8]) {
		sub3tot++;
	}
	
		cout << "\n10. A branch of technology that strictky concerns itself with robots.\n\n";
		cout << "A. GENERAL INTELLEGENCE \tB. NARROW AI \tC. ROBOTICS \tD. ROBOT\n\n";
		cout << "Answer:  ";
		cin >> sub3ans[9];
	if(sub3ans[9] == sub3anskey[9]) {
		sub3tot++;
	}
	
		cout << "\n11. Person responsible for a site.\n\n";
		cout << "A. OBJECTIVITY \tB. CURRENCY \tC. PURPOSE \tD. AUTHORITY\n\n";
		cout << "Answer:  ";
		cin >> sub3ans[10];
	if(sub3ans[10] == sub3anskey[10]) {
		sub3tot++;
	}
	
		cout << "\n12. The site should not be bias.\n\n";
		cout << "A. OBJECTIVITY \tB. CURRENCY \tC. PURPOSE \tD. AUTHORITY\n\n";
		cout << "Answer:  ";
		cin >> sub3ans[11];
	if(sub3ans[11] == sub3anskey[11]) {
		sub3tot++;
	}
	
		cout << "\n13. The site is maintained or updated.\n\n";
		cout << "A. OBJECTIVITY \tB. CURRENCY \tC. PURPOSE \tD. AUTHORITY\n\n";
		cout << "Answer:  ";
		cin >> sub3ans[12];
	if(sub3ans[12] == sub3anskey[12]) {
		sub3tot++;
	}
	
		cout << "\n14. The information purpose.\n\n";
		cout << "A. OBJECTIVITY \tB. CURRENCY \tC. PURPOSE \tD. AUTHORITY\n\n";
		cout << "Answer:  ";
		cin >> sub3ans[13];
	if(sub3ans[13] == sub3anskey[13]) {
		sub3tot++;
	}
	
		cout << "\n15. Reliability and References.\n\n";
		cout << "A. OBJECTIVITY \tB. CURRENCY \tC. PURPOSE \tD. ACCURANCY\n\n";
		cout << "Answer:  ";
		cin >> sub3ans[14];
	if(sub3ans[14] == sub3anskey[14]) {
		sub3tot++;
	}
	
		cout << "\n\n" << fname << " " << mname << " " << lname << "\n";
		cout << sec;
		cout << "\nYou've got " << sub3tot << " out of 15\n\n";
		
	if(sub3tot <= 7) {
		system("Color 46");
		cout << "FAILED!\n";
	}
	
	else if(sub3tot >= 8) {
		system("Color 21");
		cout << "PASSED!\n";
	}
	
	lstscr();
}

void sub4() {
	
		cout << "Enter capital letters only!";
	
		cout << "\n\n1. Ethics is based on Duty.n\n";
		cout << "A. DEONTOLOGICAL \tB. VIRTUE ETHICS \tC. UTILITARIANISM \tD. ETHICS OF CARE\n\n";
		cout << "Answer:  ";
		cin >> sub4ans[0];
	if(sub4ans[0] == sub4anskey[0]) {
		sub4tot++;
	}
	
		cout << "\n2. Ethics based on Virtue.\n\n";
		cout << "A. VIRTUE ETHICS \tB. ETHICS \tC. UTILITARIANISM \tD. DEONTOLOGICAL\n\n";
		cout << "Answer:  ";
		cin >> sub4ans[1];
	if(sub4ans[1] == sub4anskey[1]) {
		sub4tot++;
	}
	
		cout << "\n3. Signal the need to adjust our emotions.\n\n";
		cout << "A. ETHICS OF CARE \tB. NEGATIVE EMOTIONS \tC. UTILITARIANISM \tD. DEONTOLOGICAL\n\n";
		cout << "Answer:  ";
		cin >> sub4ans[2];
	if(sub4ans[2] == sub4anskey[2]) {
		sub4tot++;
	}
	
		cout << "\n4. Moral choices are completely determined by previously existing causes.\n\n";
		cout << "A. COMPATIBILISM \tB. HARD DETERMINISM \tC. DETERMINISM \tD. SOFT DETERMINISN\n\n";
		cout << "Answer:  ";
		cin >> sub4ans[3];
	if(sub4ans[3] == sub4anskey[3]) {
		sub4tot++;
	}
	
		cout << "\n5. Constrained by external or internal Factors.\n\n";
		cout << "A. COMPATIBILISM \tB. HARD DETERMINISM \tC. DETERMINISM \tD. SOFT DETERMINISN\n\n";
		cout << "Answer:  ";
		cin >> sub4ans[4];
	if(sub4ans[4] == sub4anskey[4]) {
		sub4tot++;
	}
	
		cout << "\n6. Sees free will as an illusion.\n\n";
		cout << "A. COMPATIBILISM \tB. HARD DETERMINISM \tC. DETERMINISM \tD. SOFT DETERMINISN\n\n";
		cout << "Answer:  ";
		cin >> sub4ans[5];
	if(sub4ans[5] == sub4anskey[5]) {
		sub4tot++;
	}
	
		cout << "\n7. Consistent with Practical Reasoning.\n\n";
		cout <<  "A. IMPARTIALITY \tB. MORAL REASONING \tC. SOFT DETERMINISM \tD. DETERMINISN\n\n";
		cout << "Answer:  ";
		cin >> sub4ans[6];
	if(sub4ans[6] == sub4anskey[6]) {
		sub4tot++;
	}
	
		cout << "\n8. Pertains to aprinciple of justice.\n\n";
		cout << "A. MORAL REASONING \tB. IMPARTIALITY \tC. SOFT DETERMINISM \tD. DETERMINISN\n\n";
		cout << "Answer:  ";
		cin >> sub4ans[7];
	if(sub4ans[7] == sub4anskey[7]) {
		sub4tot++;
	}
	
		cout << "\n9. Agent-Based Theory.\n\n";
		cout << "A. MICHAEL SLOTE \tB. PLATO \tC. SOCRATES \tD. ARISTOTLE\n\n";
		cout << "Answer:  ";
		cin >> sub4ans[8];
	if(sub4ans[8] == sub4anskey[8]) {
		sub4tot++;
	}
	
		cout << "\n10. EUDAIMONISM.\n\n";
		cout << "A. PLATO \tB. SLOTE \tC. ARISTOTLE \tD. SOCRATES\n\n";
		cout << "Answer:  ";
		cin >> sub4ans[9];
	if(sub4ans[9] == sub4anskey[9]) {
		sub4tot++;
	}
	
		cout << "\n11. Ethics Of Care.\n\n";
		cout << "A. PLATO \tB. ARISTOTLE \tC. ANNETTE BALER \tD. SLOTE\n\n";
		cout << "Answer:  ";
		cin >> sub1ans[10];
	if(sub4ans[10] == sub4anskey[10]) {
		sub4tot++;
	}
	
		cout << "\n12.  Subject Component.\n\n";
		cout << "A. EXPERIENCE \tB. REACT \tC. ACTION \tD. RESPONSE\n\n";
		cout << "Answer:  ";
		cin >> sub1ans[11];
	if(sub4ans[11] == sub4anskey[11]) {
		sub4tot++;
	}
	
		cout << "\n13. Physiological Component.\n\n";
		cout << "A. EXPERIENCE \tB. REACT \tC. ACTION \tD. RESPONSE\n\n";
		cin >> sub1ans[12];
	if(sub4ans[12] == sub4anskey[12]) {
		sub4tot++;
	}
	
		cout << "\n14. Expressive Component.\n\n";
		cout << "A. EXPERIENCE \tB. REACT \tC. ACTION \tD. RESPONSE\n\n";
		cout << "Answer:  ";
		cin >> sub1ans[13];
	if(sub4ans[13] == sub4anskey[13]) {
		sub4tot++;
	}
	
		cout << "\n15. Self Chosen Principle.\n\n";
		cout << "A. Conventional \tB. Pre-Convetional  \tC. Convention \tD. Post-Conventional\n\n";
		cout << "Answer:  ";
		cin >> sub4ans[14];
	if(sub4ans[14] == sub4anskey[14]) {
		sub4tot++;
	}
	
		cout << "\n\n" << fname << " " << mname << " " << lname << "\n";
		cout << sec;
		cout << "\nYou've got " << sub4tot << " out of 15\n\n";
		
	if(sub4tot <= 7) {
		system("Color 46");
		cout << "FAILED!\n";
	}
	
	else if(sub4tot >= 8) {
		system("Color 21");
		cout << "PASSED!\n";
	}
	
	lstscr();
}

void sub5() {
	
		cout << "ENTER THE CORRECT ANSWER";
	
		cout << "\n\n1. Understand and develop their critical consciousness.\n\n";
		cout << "A. EDUCATING \tB. WORKING \tC. STUDYING \tD. MOBILIZING\n\n";
		cout << "Answer:  ";
		cin >> sub5ans[0];
	if(sub5ans[0] == sub5anskey[0]) {
		sub5tot++;
	}
	
		cout << "\n2. To work collectively and effectively on their immediate and long term problems.\n\n";
		cout << "A. EDUCATING \tB. WORKING \tC. STUDYING \tD. MOBILIZING\n\n";
		cout << "Answer:  ";
		cin >> sub5ans[1];
	if(sub5ans[1] == sub5anskey[1]) {
		sub5tot++;
	}
	
		cout << "\n3. Used during Calamity.\n\n";
		cout << "A. PROJECT DEVELOPMENT \tB. MODERNAZATION \tC. WELFARE APPROACH \tD. TRANSFORMATION APPROACH\n\n";
		cout << "Answer:  ";
		cin >> sub5ans[2];
	if(sub5ans[2] == sub5anskey[2]) {
		sub5tot++;
	}
	
		cout << "\n4. To develop their capability and readiness to respond and take action.\n\n";
		cout << "A. EDUCATING \tB. WORKING \tC. STUDYING \tD. MOBILIZING\n\n";
		cout << "Answer:  ";
		cin >> sub5ans[3];
	if(sub5ans[3] == sub5anskey[3]) {
		sub5tot++;
	}
	
		cout << "\n5.Process of improving the poor.\n\n";
		cout << "A. PROJECT DEVELOPMENT \tB. MODERNAZATION \tC. WELFARE APPROACH \tD. TRANSFORMATION APPROACH\n\n";
		cout << "Answer:  ";
		cin >> sub5ans[4];
	if(sub5ans[4] == sub5anskey[4]) {
		sub5tot++;
	}
	
		cout << "\n6. Potential resources to the community.\n\n";
		cout << "A. PROBLEM \tB. PARTICIPATION \tC. PEOPLE \tD. PROCESS\n\n";
		cout << "Answer:  ";
		cin >> sub5ans[5];
	if(sub5ans[5] == sub5anskey[5]) {
		sub5tot++;
	}
	
		cout << "\n7. People empowerment is the goal of the organizing.\n\n";
		cout << "A. PROBLEM \tB. PEOPLE \tC. PROCESS \tD. POWER\n\n";
		cout << "Answer:  ";
		cin >> sub5ans[6];
	if(sub5ans[6] == sub5anskey[6]) {
		sub5tot++;
	}
	
		cout << "\n8. Heart of the community organizing.\n\n";
		cout << "A. POWER \tB. PROCESS \tC. PARTICIPATION \tD. PEOPLE\n\n";
		cout << "Answer:  ";
		cin >> sub5ans[7];
	if(sub5ans[7] == sub5anskey[7]) {
		sub5tot++;
	}
	
		cout << "\n9. Motiate and challenge to peopl.\n\n";
		cout << "A. PROBLEM \tB. PEOPLE \tC. PROCESS \tD. POWER\n\n";
		cout << "Answer:  ";
		cin >> sub5ans[8];
	if(sub5ans[8] == sub5anskey[8]) {
		sub5tot++;
	}
	
		cout << "\n10. Short Title.\n\n";
		cout << "A. SEC 2 \tB. SEC 3 \tC. SEC 1 \tD. SEC 8\n\n";
		cout << "Answer:  ";
		cin >> sub5ans[9];
	if(sub5ans[9] == sub5anskey[9]) {
		sub5tot++;
	}
	
		cout << "\n11. Declaration of principles.\n\n";
		cout << "A. SEC 4 \tB. SEC 11 \tC. SEC 2 \tD. SEC 6\n\n";
		cout << "Answer:  ";
		cin >> sub5ans[10];
	if(sub5ans[10] == sub5anskey[10]) {
		sub5tot++;
	}
	
		cout << "\n12. Lawful election propaganda.\n\n";
		cout << "A. SEC 4 \tB. SEC 2 \tC. SEC 3 \tD. SEC 1\n\n";
		cout << "Answer:  ";
		cin >> sub5ans[11];
	if(sub5ans[11] == sub5anskey[11]) {
		sub5tot++;
	}
	
		cout << "\n13.Election Survey.\n\n";
		cout << "A. SEC 5 \tB. SEC 1 \tC. SEC 6 \tD. SEC 2\n\n";
		cout << "Answer:  ";
		cin >> sub5ans[12];
	if(sub5ans[12] == sub5anskey[12]) {
		sub5tot++;
	}
	
		cout << "\n14.Right to reply.\n\n";
		cout << "A. SEC 7 \tB. SEC 8 \tC.SEC 9 \tD. SEC 10\n\n";
		cout << "Answer:  ";
		cin >> sub5ans[13];
	if(sub5ans[13] == sub5anskey[13]) {
		sub5tot++;
	}
	
		cout << "\n15. Rates for political propaganda.\n\n";
		cout << "A. SEC 12 \tB. SEC 11 \tC. SEC 10 \tD. SEC 9\n\n";
		cout << "Answer:  ";
		cin >> sub5ans[14];
	if(sub5ans[14] == sub5anskey[14]) {
		sub5tot++;
	}
	
		cout << "\n\n" << fname << " " << mname << " " << lname << "\n";
		cout << sec;
		cout << "\nYou've got " << sub5tot << " out of 15\n\n";
		
	if(sub5tot <= 7) {
		system("Color 46");
		cout << "FAILED!\n";
	}
	
	else if(sub5tot >= 8) {
		system("Color 21");
		cout << "PASSED!\n";
	}
	
	lstscr();
}

void sub6() {
	
		cout << "ENTER THE CORRECT ANSWER!";
	
		cout << "\n\n1. Signify the beginning and end of the flowchart.\n\n";
		cout << "A. TERMINAL \tB. INPUT \tC. DECISION \tD. ON PAGE CONNECTOR\n\n";
		cout << "Answer:  ";
		cin >> sub6ans[0];
	if(sub6ans[0] == sub6anskey[0]) {
		sub6tot++;
	}
	
		cout << "\n2. Performs any calculations thar are to be done .\n\n";
		cout << "A. PROCESSING \tB. INPUT \tC. DECISION \tD. ON PAGE CONNECTOR\n\n";
		cout << "Answer:  ";
		cin >> sub6ans[1];
	if(sub6ans[1] == sub6anskey[1]) {
		sub6tot++;
	}
	
		cout << "\n3. Shows input and Output.\n\n";
		cout << "A. TERMINAL \tB. INPUT \tC. DECISION \tD. ON PAGE CONNECTOR\n\n";
		cout << "Answer:  ";
		cin >> sub6ans[2];
	if(sub6ans[2] == sub6anskey[2]) {
		sub6tot++;
	}
	
		cout << "\n4. Signifies any decision that are to be done.\n\n";
		cout << "A. TERMINAL \tB.SYNTAX ERROR \tC. DECISION \tD.PREPARATION\n\n";
		cout << "Answer:  ";
		cin >> sub6ans[3];
	if(sub6ans[3] == sub6anskey[3]) {
		sub6tot++;
	}
	
		cout << "\n5. Signifies the preparation of data.\n\n";
		cout << "A. TERMINAL \tB.SYNTAX ERROR \tC. DECISION \tD.PREPARATION\n\n";
		cout << "Answer:  ";
		cin >> sub6ans[4];
	if(sub6ans[4] == sub6anskey[4]) {
		sub6tot++;
	}
	
		cout << "\n6. Signifies the process that is to be executed next.\n\n";
		cout << "A. TERMINAL \tB. FLOWLINES \tC. DECISION \tD.PREPARATION\n\n";
		cout << "Answer:  ";
		cin >> sub6ans[5];
	if(sub6ans[5] == sub6anskey[5]) {
		sub6tot++;
	}
	
		cout << "\n7. Most common error.\n\n";
		cout << "A. TERMINAL \tB.SYNTAX ERROR \tC. DECISION \tD.PREPARATION\n\n";
		cout << "Answer:  ";
		cin >> sub6ans[6];
	if(sub6ans[6] == sub6anskey[6]) {
		sub6tot++;
	}
	
		cout << "\n8. Set of instructions shipped with a program or a piece of hardware.\n\n";
		cout << "A. PROCESS \tB.DOCUMENTATION \tC. RUN TIME ERROR \tD.PREPARATION\n\n";
		cout << "Answer:  ";
		cin >> sub6ans[7];
	if(sub6ans[7] == sub6anskey[7]) {
		sub6tot++;
	}
	
		cout << "\n9. Declares memory management  functions.\n\n";
		cout << "A. ALLOC.H \tB.STRING.H \tC. CTYPE.H \tD.MATH.H\n\n";
		cout << "Answer:  ";
		cin >> sub6ans[8];
	if(sub6ans[8] == sub6anskey[8]) {
		sub6tot++;
	}
	
		cout << "\n10. Types and macros needed for standars I/O .\n\n";
		cout <<  "A. CTYPE.H \tB.STRING.H \tC. STDIO.H \tD.MATH.H\n\n";
		cout << "Answer:  ";
		cin >> sub6ans[9];
	if(sub6ans[9] == sub6anskey[9]) {
		sub6tot++;
	}
	
		cout << "\n11. Non executable phrases.\n\n";
		cout << "A. DECLARATION \tB. IDENTIFIERS \tC. FUNCTIONS \tD. COMMENTS\n\n";
		cout << "Answer:  ";
		cin >> sub6ans[10];
	if(sub6ans[10] == sub6anskey[10]) {
		sub6tot++;
	}
	
		cout << "\n12. All functions, variables, units or objects that contain values.\n\n";
		cout << "A. DECLARATION \tB. IDENTIFIERS \tC. FUNCTIONS \tD. COMMENTS\n\n";
		cout << "Answer:  ";
		cin >> sub6ans[11];
	if(sub6ans[11] == sub6anskey[11]) {
		sub6tot++;
	}
	
		cout << "\n13.  Names given to various program elements.\n\n";
		cout << "A. DECLARATION \tB. IDENTIFIERS \tC. FUNCTIONS \tD. COMMENTS\n\n";
		cout << "Answer:  ";
		cin >> sub6ans[12];
	if(sub6ans[12] == sub6anskey[12]) {
		sub6tot++;
	}
	
		cout << "\n14. Performs a specific task.\n\n";
		cout << "A. DECLARATION \tB. IDENTIFIERS \tC. FUNCTIONS \tD. COMMENTS\n\n";
		cout << "Answer:  ";
		cin >> sub6ans[13];
	if(sub6ans[13] == sub6anskey[13]) {
		sub6tot++;
	}
	
		cout << "\n15. Keywords that have standard predefined meaning in C.\n\n";
		cout << "A. DECLARATION \tB. IDENTIFIERS \tC. FUNCTIONS \tD. RESERVED WORDS\n\n";
		cout << "Answer:  ";
		cin >> sub6ans[14];
	if(sub6ans[14] == sub6anskey[14]) {
		sub6tot++;
	}
	
		cout << "\n\n" << fname << " " << mname << " " << lname << "\n";
		cout << sec;
		cout << "\nYou've got " << sub6tot << " out of 15\n\n";
		
	if(sub6tot <= 7) {
		system("Color 46");
		cout << "FAILED!\n";
	}
	
	else if(sub6tot >= 8) {
		system("Color 21");
		cout << "PASSED!\n";
	}
	
	lstscr();
}

void sub7() {
	
		cout << "ISULAT ANG TAMANG SAGOT";
	
		cout << "\n\n1. ANAK .\n\n";
		cout << "A. FREDDIE AGUILAR \tB. GARY GRANADA \tC. JOEL MALABANAN \tD. PATRICK MALABO\n\n";
		cout << "Answer:  ";
		cin >> sub7ans[0];
	if(sub7ans[0] == sub7anskey[0]) {
		sub7tot++;
	}
	
		cout << "\n2. BAHAY AT MANGGAGAWA.\n\n";
		cout << "A. GARY GRANADA \tB. JOEL MALABANAN \tC. PATRICK MALABO \tD. FREDDIE AGUILAR\n\n";
		cout << "Answer:  ";
		cin >> sub7ans[1];
	if(sub7ans[1] == sub7anskey[1]) {
		sub7tot++;
	}
	
		cout << "\n3. SQ3R.\n\n";
		cout << "A. FREDDIE AGUILAR \tB. ROBINSON \tC. PERLA \tD. JOSE RIZAL\n\n";
		cout << "Answer:  ";
		cin >> sub7ans[2];
	if(sub7ans[2] == sub7anskey[2]) {
		sub7tot++;
	}
	
		cout << "\n4. 'S' sa SQ3R.\n\n";
		cout << "A. SKY \tB. SEEK \tC. SURVEY \tD. SEARCH\n\n";
		cout << "Answer:  ";
		cin >> sub7ans[3];
	if(sub7ans[3] == sub7anskey[3]) {
		sub7tot++;
	}
	
		cout << "\n5. 'Q' sa SQ3R.\n\n";
		cout << "A. QUALIFIED \tB. QUIRK \tC. QUEST \tD. QUESTION\n\n";
		cout << "Answer:  ";
		cin >> sub7ans[4];
	if(sub7ans[4] == sub7anskey[4]) {
		sub7tot++;
	}
	
		cout << "\n6. Kinakailangang magtagala ng mga impormasyon .\n\n";
		cout << "A. MAGDEBRIEF \tB. MAGTALA \tC. KUMUNEKTA \tD. HAHAPIN\n\n";
		cout << "Answer:  ";
		cin >> sub7ans[5];
	if(sub7ans[5] == sub7anskey[5]) {
		sub7tot++;
	}
	
		cout << "\n7. Kinakailangang mag diskursyon ang mga mananaliksik.\n\n";
		cout << "A. MAGTALA \tB. MAGDEBRIEF \tC. PAGREBYU \tD. KUMUNEKTA\n\n";
		cout << "Answer:  ";
		cin >> sub7ans[6];
	if(sub7ans[6] == sub7anskey[6]) {
		sub7tot++;
	}
	
		cout << "\n8. Sa pag pili ng batis ng impormasyon, mahalagang mag koneksyon.\n\n";
		cout << "A. MAGREBYU \tB. KUMUNEKTA \tC. MAGDEBRIEF \tD. MAGTALA\n\n";
		cout << "Answer:  ";
		cin >> sub7ans[7];
	if(sub7ans[7] == sub7anskey[7]) {
		sub7tot++;
	}
	
		cout << "\n9. Isa isahin ang bawat bahagu o nilalaman ng dokumento.\n\n";
		cout << "A. SURVEY \tB. QUESTION \tC. READ \tD. RECALL\n\n";
		cout << "Answer:  ";
		cin >> sub7ans[8];
	if(sub7ans[8] == sub7anskey[8]) {
		sub7tot++;
	}
	
		cout << "\n10. Tanungin ang sarili kung patungkol saan ang tekstong babasahin.\n\n";
		cout << "A. SURVEY \tB. REVIEW \tC. QUESTION \tD. RELEEGATE\n\n";
		cout << "Answer:  ";
		cin >> sub7ans[9];
	if(sub7ans[9] == sub7anskey[9]) {
		sub7tot++;
	}
	
		cout << "\n11.  Tawag sa pinagkukuhanan ng impormasyon sa pananaliksik.\n\n";
		cout << "A. BATIS NG AKLAT \tB. BATIS NG KARUNUNGAN \tC. BATIS NG INTERNET \tD. BATIS NG IMPORMASYON \n\n";
		cout << "Answer:  ";
		cin >> sub7ans[10];
	if(sub7ans[10] == sub7anskey[10]) {
		sub7tot++;
	}
	
		cout << "\n12. Taong isinakatuparan ang ALS.\n\n";
		cout << "A. 2003 \tB. 2001 \tC. 2005 \tD. 2002\n\n";
		cout << "Answer:  ";
		cin >> sub7ans[11];
	if(sub7ans[11] == sub7anskey[11]) {
		sub7tot++;
	}
	
		cout << "\n13. Kulturang Popular.\n\n";
		cout << "A. FREDDIE AGUILAR \tB. PERLA CARPIO \tC. JOSE RIZAL \tD. PATRICK MALABO\n\n";
		cout << "Answer:  ";
		cin >> sub7ans[12];
	if(sub7ans[12] == sub7anskey[12]) {
		sub7tot++;
	}
	
		cout << "\n14. Isa sa 3r sa SQ3R.\n\n";
		cout << "A. RELAY \tB. RELAX \tC. REVIEW \tD. REBUT\n\n";
		cout << "Answer:  ";
		cin >> sub7ans[13];
	if(sub7ans[13] == sub7anskey[13]) {
		sub7tot++;
	}
	
		cout << "\n15. EFA kahulugan.\n\n";
		cout << "A. EDUCATION FOR ALTERNATIVE \tB. EDUCATION FOR APES \tC. EDUCATION FOR AGE \tD. EDUCATION FOR ALL \n\n";
		cout << "Answer:  ";
		cin >> sub7ans[14];
	if(sub7ans[14] == sub7anskey[14]) {
		sub7tot++;
	}
	
		cout << "\n\n" << fname << " " << mname << " " << lname << "\n";
		cout << sec;
		cout << "\nNakakuha ka ng " << sub7tot << " sa 15\n\n";
		
	if(sub7tot <= 7) {
		system("Color 46");
		cout << "BAGSAK!\n";
	}
	
	else if(sub7tot >= 8) {
		system("Color 21");
		cout << "PASADO!\n";
	}
	
	lstscr();
}

void sub8() {
	
		cout << "ENTER THE CORRECT ANSWER";
	
		cout << "\n\n1. These are example of proposition except: .\n\n";
		cout << "A. Bring me the pen \tB. Moon is crescent \tC. Earth is flat \tD. Roses are red\n\n";
		cout << "Answer:  ";
		cin >> sub8ans[0];
	if(sub8ans[0] == sub8anskey[0]) {
		sub8tot++;
	}
	
		cout << "\n2.These are example of proposition except: .\n\n";
		cout << "A. 2 + 1 = 4 \tB. Don't touch me \tC. Grass are green \tD. Roses are red\n\n";
		cout << "Answer:  ";
		cin >> sub8ans[1];
	if(sub8ans[1] == sub8anskey[1]) {
		sub8tot++;
	}
	
		cout << "\n3. These are example of proposition except: .\n\n";
		cout << "A. Apple is green \tB. Sky is blue \tC. Close the door \tD. Adobo is savory\n\n";
		cout << "Answer:  ";
		cin >> sub8ans[2];
	if(sub8ans[2] == sub8anskey[2]) {
		sub8tot++;
	}
	
		cout << "\n4. These are example of proposition except: .\n\n";
		cout << "A. Realme is fake \tB. 5+3 =1 \tC. Books are expensive \tD. Don't follow me\n\n";
		cout << "Answer:  ";
		cin >> sub8ans[3];
	if(sub8ans[3] == sub8anskey[3]) {
		sub8tot++;
	}
	
		cout << "\n5. These are example of proposition except: .\n\n";
		cout << "A. Water is cold \tB. Answer the call \tC. Number is infinite \tD. There is no moon\n\n";
		cout << "Answer:  ";
		cin >> sub8ans[4];
	if(sub8ans[4] == sub8anskey[4]) {
		sub8tot++;
	}
	
		cout << "\n6.These are example of proposition except: .\n\n";
		cout << "A. 5 is a prime number \tB. White is plain \tC. Trees are tall \tD. Is it hot outside?\n\n";
		cout << "Answer:  ";
		cin >> sub8ans[5];
	if(sub8ans[5] == sub8anskey[5]) {
		sub8tot++;
	}
	
		cout << "\n7. Basic logic gate whose output is the complement of the input is .\n\n";
		cout << "A. Inverter gate \tB. AND gate \tC. OR gate \tD. NAND gate\n\n";
		cout << "Answer:  ";
		cin >> sub8ans[6];
	if(sub8ans[6] == sub8anskey[6]) {
		sub8tot++;
	}
	
		cout << "\n8. for m= 1,2..., 4m+2 is a multiple of :.\n\n";
		cout << "A. 3 \tB. 1 \tC. 2 \tD. 4\n\n";
		cout << "Answer:  ";
		cin >> sub8ans[7];
	if(sub8ans[7] == sub8anskey[7]) {
		sub8tot++;
	}
	
		cout << "\n9. The NOR gate is OR gate followed by .\n\n";
		cout << "A. NAND gate \tB. NOT gate \tC. AND gate \tD. None of the above\n\n";
		cout << "Answer:  ";
		cin >> sub8ans[8];
	if(sub8ans[8] == sub8anskey[8]) {
		sub8tot++;
	}
	
		cout << "\n10. NAND circuits are contained in a 7400 NAND IC.\n\n";
		cout << "A. 2 \tB. 3 \tC. 4 \tD. 5\n\n";
		cout << "Answer:  ";
		cin >> sub8ans[9];
	if(sub8ans[9] == sub8anskey[9]) {
		sub8tot++;
	}
	
		cout << "\n11. The logical operator NOt can be represented as.\n\n";
		cout << "A. < \tB. > \tC. ø \tD. ¬\n\n";
		cout << "Answer:  ";
		cin >> sub8ans[10];
	if(sub8ans[10] == sub8anskey[10]) {
		sub8tot++;
	}
	
		cout << "\n12. How many ways are there to arrange the letters of the word MATH.\n\n";
		cout << "A. 10 \tB. 23 \tC. 24 \tD. 30\n\n";
		cout << "Answer:  ";
		cin >> sub8ans[11];
	if(sub8ans[11] == sub8anskey[11]) {
		sub8tot++;
	}
	
		cout << "\n13. The number of subsets of a set with n elements is equal to.\n\n";
		cout << "A. n! \tB. 2^n \tC. ^n \tD. 2n\n\n";
		cout << "Answer:  ";
		cin >> sub8ans[12];
	if(sub8ans[12] == sub8anskey[12]) {
		sub8tot++;
	}
	
		cout << "\n14. Which of the following is a valid logical connective.\n\n";
		cout << "A. Union \tB. Intersection \tC.AND \tD. XOR\n\n";
		cout << "Answer:  ";
		cin >> sub8ans[13];
	if(sub8ans[13] == sub8anskey[13]) {
		sub8tot++;
	}
	
		cout << "\n15. The inverter is.\n\n";
		cout << "A. NOT GATE \tB. AND GATE \tC. NAND GATE \tD. OR GATE\n\n";
		cout << "Answer:  ";
		cin >> sub1ans[14];
	if(sub8ans[14] == sub8anskey[14]) {
		sub8tot++;
	}
	
		cout << "\n\n" << fname << " " << mname << " " << lname << "\n";
		cout << sec;
		cout << "\nYou've got " << sub8tot << " out of 15\n\n";
		
	if(sub8tot <= 7) {
		system("Color 46");
		cout << "YOU FAILED!\n";
	}
	
	else if(sub8tot >= 8) {
		system("Color 21");
		cout << "PASSED!\n";
	}
	
	lstscr();
}

void sub9() {
	
		cout << "ENTER THE CORRECT ANSWER";
	
		cout << "\n\n1. Which of the following is an example of a cardiovascular exercise?.\n\n";
		cout << "A. Jumping jacks \tB. Sit up \tC. Push up \tD. Jogging\n\n";
		cout << "Answer:  ";
		cin >> sub9ans[0];
	if(sub9ans[0] == sub9anskey[0]) {
		sub9tot++;
	}
	
		cout << "\n2. Which of the following is NOT a component of physical fitness?.\n\n";
		cout << "A. Burn fat \tB. Strength \tC. Flexibility \tD. Coordination\n\n";
		cout << "Answer:  ";
		cin >> sub9ans[1];
	if(sub9ans[1] == sub9anskey[1]) {
		sub9tot++;
	}
	
		cout << "\n3. which of the following activities primarily targets the abdominal muscles?.\n\n";
		cout << "A. Jogging \tB. Plank Exercises \tC. Jumping jacks \tD. cycling\n\n";
		cout << "Answer:  ";
		cin >> sub9ans[2];
	if(sub9ans[2] == sub9anskey[2]) {
		sub9tot++;
	}
	
		cout << "\n4. Which of the following is an example of a dynamic stretching exercise?.\n\n";
		cout << "A. Shoulder stretch \tB. Hamstring Stretch \tC. Jumping lunges \tD.  Standing quad stretch\n\n";
		cout << "Answer:  ";
		cin >> sub9ans[3];
	if(sub9ans[3] == sub9anskey[3]) {
		sub9tot++;
	}
	
		cout << "\n5.  The term aerobic refers to exercise that:.\n\n";
		cout << "A. Increases muscle mass \tB. Releases stress \tC. Enhances flexibility \tD. Improves cardiovascular endurance\n\n";
		cout << "Answer:  ";
		cin >> sub9ans[4];
	if(sub9ans[4] == sub9anskey[4]) {
		sub9tot++;
	}
	
		cout << "\n6. What is the primary energy source for short bursts of high-intensity exercise?.\n\n";
		cout << "A. Vitamins \tB. Fats \tC. WINDOW \tD. Protein\n\n";
		cout << "Answer:  ";
		cin >> sub9ans[5];
	if(sub9ans[5] == sub9anskey[5]) {
		sub9tot++;
	}
	
		cout << "\n7. What is the main purpose of wearing proper athletic footwear during physical activity?.\n\n";
		cout << "A.  To improve balance \tB. To protect the feet from injuries \tC. To regulate body temperature \tD. To enhance fashion\n\n";
		cout << "Answer:  ";
		cin >> sub9ans[6];
	if(sub9ans[6] == sub9anskey[6]) {
		sub9tot++;
	}
	
		cout << "\n8. Which of the following is a benefit of resistance training?.\n\n";
		cout << "A.  Reduced blood pressure \tB.  Increased bone density \tC. Improved flexibility \tD. Enhanced reaction time\n\n";
		cout << "Answer:  ";
		cin >> sub9ans[7];
	if(sub9ans[7] == sub9anskey[7]) {
		sub9tot++;
	}
	
		cout << "\n9.What is the proper technique for a push-up exercise?.\n\n";
		cout << "A. Keeping the body straight, lowering the chest towards the floor, and pushing back up \tB. Bending the knees while keeping the back straight \tC. Arching the back and raising the hips \tD.  Balancing on the hands with the legs extended in the air\n\n";
		cout << "Answer:  ";
		cin >> sub9ans[8];
	if(sub9ans[8] == sub9anskey[8]) {
		sub9tot++;
	}
	
		cout << "\n10.  Which of the following is an example of a low-impact exercise?.\n\n";
		cout << "A.  High-intensity interval training (HIIT) \tB. Plyometric exercises \tC. Yoga \tD. Jumping rope\n\n";
		cout << "Answer:  ";
		cin >> sub9ans[9];
	if(sub9ans[9] == sub9anskey[9]) {
		sub9tot++;
	}
	
		cout << "\n11.Which of the following activities primarily targets the quadriceps muscles?.\n\n";
		cout << "A. Swimming \tB. Cycling \tC. Rowing \tD. Squats\n\n";
		cout << "Answer:  ";
		cin >> sub9ans[10];
	if(sub9ans[10] == sub9anskey[10]) {
		sub9tot++;
	}
	
		cout << "\n12. What is the recommended frequency for resistance training exercises?.\n\n";
		cout << "A. Twice a week \tB. Once a week \tC. Thrice a week \tD. Everday\n\n";
		cout << "Answer:  ";
		cin >> sub9ans[11];
	if(sub9ans[11] == sub9anskey[11]) {
		sub9tot++;
	}
	
		cout << "\n13. Which of the following is an example of a non-contact sport?.\n\n";
		cout << "A. Boxing \tB. Swimming \tC. Running \tD. Hiking\n\n";
		cout << "Answer:  ";
		cin >> sub9ans[12];
	if(sub9ans[12] == sub9anskey[12]) {
		sub9tot++;
	}
	
		cout << "\n14.What is the recommended duration for a moderate-intensity aerobic activity session?.\n\n";
		cout << "A. 60 minutes \tB. 30 minutes \tC.50 minutes \tD. 120 minutes\n\n";
		cout << "Answer:  ";
		cin >> sub9ans[13];
	if(sub9ans[13] == sub9anskey[13]) {
		sub9tot++;
	}
	
		cout << "\n15.Which of the following is an example of a static stretching exercise?.\n\n";
		cout << "A.  Jumping jacks \tB. High Knees \tC.  \tD. Hamstring stretch\n\n";
		cout << "Answer:  ";
		cin >> sub9ans[14];
	if(sub9ans[14] == sub9anskey[14]) {
		sub9tot++;
	}
	
		cout << "\n\n" << fname << " " << mname << " " << lname << "\n";
		cout << sec;
		cout << "\nYou've got " << sub9tot << " out of 15\n\n";
		
	if(sub9tot <= 7) {
		system("Color 46");
		cout << "YOU FAILED!\n";
	}
	
	else if(sub9tot >= 8) {
		system("Color 21");
		cout << "PASSED!\n";
	}
	
	lstscr();
}

