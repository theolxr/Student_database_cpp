int meniu1(){

system("cls");
cout<<"\n\n\t   MENIU                                     User: "<<USER[id_user].user<<endl;
cout<<"\t       0. Managment USER "<<endl;
cout<<"\t       1. Insert student "<<endl;
cout<<"\t       2. Show student "  <<endl;
cout<<"\t       3. Find student <nume> "  <<endl;
cout<<"\t       4. Edit student <ID> "  <<endl;
cout<<"\t       5. Raport student "  <<endl;
cout<<"\t       6. Statistica "  <<endl;
cout<<"\t       ESC. EXIT"         <<endl;

switch(_getch()){
		case 48 : nivel_meniu=2; return 777;
		case 49 : return 11; 
		case 50 : return 12;
		case 51 : return 13; 
		case 52 : return 14;
		case 53 : return 15; 
		case 54 : return 16;
		case 27 : return 666;
	}
	return 0;
}

int meniu2(){

system("cls");
cout<<"\n\n\t   MENIU USER        "<<endl;
cout<<"\t       1. Insert user "<<endl;
cout<<"\t       2. Show user "  <<endl;
cout<<"\t       3. Find user <nume> "  <<endl;
cout<<"\t       4. Edit user <ID> "  <<endl;
cout<<"\t       ESC. EXIT"         <<endl;
switch(_getch()){
		case 49 : return 21; 
		case 50 : return 22;
		case 51 : return 23; 
		case 52 : return 24;
		case 27 : nivel_meniu=1; return 777;
	}
	return 0;
}

int meniu_user_edit() {
	
		cout<<"\n\t\t\t\t        1. Editare nume \n";
		cout<<"\t\t\t\t        2. Editare parola \n";
		cout<<"\t\t\t\t        3. Editare status \n";
		cout<<"\t\t\t\t        ESC. Intoarcere la meniu \n";
		
		int key = _getch();
		system("cls");
		
		return key;
}

int management_meniu(){
	switch(nivel_meniu){
		case 1: return meniu1();
		case 2:	return meniu2();	
	}
}












