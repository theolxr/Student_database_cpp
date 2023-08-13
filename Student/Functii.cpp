int insert_Student(){
 
 do{
  system("cls");
  cout<<"Studentul ["<<nrSTUD+1<<"]"<<endl;
  cout<<"Enter Nume :: ";cin>> STUD[nrSTUD].nume;
  cout<<"Enter Grupa :: ";cin>> STUD[nrSTUD].grupa;
  cout<<"Enter IDNP :: ";cin>> STUD[nrSTUD].idnp;
  cout<<"Enter Ani :: ";cin>> STUD[nrSTUD].ani;
  cout<<"Enter student :: ESC exit , any key ..."<<endl;
  nrSTUD++;
}while(_getch() !=27 );
 
}

void show_Student(){
	
	int nr = nrSTUD < 3 ? nrSTUD : 3;  		 //nr studenti per pagina
	int in = 0, sf=nr;   //nrSTUD
	
	if(nrSTUD > 0){
	
	

	while(1){
		
	
	system("cls");
	
	cout<<(char)201<<(char)205<<(char)205<<(char)205<<(char)205<<(char)203
	<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
	<<(char)205<<(char)205<<(char)205<<(char)203<<(char)205<<(char)205<<(char)205
	<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)203
	<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
	<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
	<<(char)203<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)187<<endl;
	
	cout<<(char)186<<" NR "<<(char)186<<"   NUME   "<<(char)186<<"  GRUPA  "<<(char)186<<"     IDNP     "<<(char)186<<" ANI "<<(char)186<<endl;
	
	cout<<(char)204<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206
	<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
	<<(char)205<<(char)205<<(char)205<<(char)206<<(char)205<<(char)205<<(char)205
	<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206
	<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
	<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
	<<(char)206<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)185<<endl;
	
	for(int i = in; i < sf ;i++){
		
		cout<<(char)186<<setw(4)<<i+1<<(char)186<<setw(10)<<STUD[i].nume<<(char)186<<setw(9)<<STUD[i].grupa<<(char)186<<setw(14)<<STUD[i].idnp<<(char)186<<setw(5)<<STUD[i].ani<<(char)186<<endl;
		
		if ( i < sf - 1){
			cout<<(char)204<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)206<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)206<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)185<<endl;
		}
		else{
			cout<<(char)200<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)202<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)202<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)188<<endl;
		}
		
	}
	switch(_getch()){
		/* + */		case 43 : in+=nr; sf+=nr; if( sf > nrSTUD){in=nrSTUD-nr; sf=nrSTUD;} break;
		/* - */		case 45 : in-=nr; sf-=nr; if( in < 0){in=0; sf=nr;} break;
		/* ESC */	case 27 : return;
	}
 }
}
else{
	system("cls");
	cout<<" Nu sunt studenti "<<endl;
}
	cout<<endl;
	system("pause");
}

void find_Student(){
	bool X = false;
	system("cls");
	char nume[100];
	
	if(nrSTUD > 0){
	cout<<"\n\n Enter nume :: ";
	cin>>nume;
	
	for(int i = 0; i < nrSTUD;i++){
 	  	if( strcmp(STUD[i].nume,nume)==0){
 	  	cout<<(char)201<<(char)205<<(char)205<<(char)205<<(char)205<<(char)203
		<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
		<<(char)205<<(char)205<<(char)205<<(char)203<<(char)205<<(char)205<<(char)205
		<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)203
		<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
		<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
		<<(char)203<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)187<<endl;
		   
		cout<<(char)186<<setw(4)<<i+1
		<<(char)186<<setw(10)<<STUD[i].nume
		<<(char)186<<setw(9)<<STUD[i].grupa
		<<(char)186<<setw(14)<<STUD[i].idnp
		<<(char)186<<setw(5)<<STUD[i].ani
		<<(char)186<<endl;
		
		cout<<(char)200<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202
		<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
		<<(char)205<<(char)205<<(char)205<<(char)202<<(char)205<<(char)205<<(char)205
		<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202
		<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
		<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
		<<(char)202<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)188<<endl;
		
		X=true;
	
		}
	  }
	  if (!X) cout<< "\n\n\t Numele '"<<nume<<"' nu exista"<<endl;
	}
	else cout<<"\n\n Nu sunt studenti "<<endl;
	cout<<endl;
	
	system("pause");
}

void edit_Student(){
	system("cls");
		if(nrSTUD > 0){
			int ID;
			
			do{
				cout<<"\n\n\t Enter ID 1..."<<nrSTUD<<" ::";
				cin>>ID;
				ID--;
			}
			while( ID < 0 || ID >= nrSTUD );
			
			cout<<endl;
			
			cout<<(char)201<<(char)205<<(char)205<<(char)205<<(char)205<<(char)203
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)203<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)203
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)203<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)187<<endl;
			   
			cout<<(char)186<<setw(4)<<ID+1
			<<(char)186<<setw(10)<<STUD[ID].nume
			<<(char)186<<setw(9)<<STUD[ID].grupa
			<<(char)186<<setw(14)<<STUD[ID].idnp
			<<(char)186<<setw(5)<<STUD[ID].ani
			<<(char)186<<endl;
			
			cout<<(char)200<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)202<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)202<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)188<<endl;
			
			cout<<endl;
			
			char KEY;
			
			cout<<" Edit nume ?  [Y]es/[N]o "<<endl;
			KEY = _getch();
			if(toupper(KEY) == 'Y'){
				cout<<" Enter nume :: "; cin>>STUD[ID].nume;
			}
			else{
				cout<<" Apa pentru ai intrat aisea ?"<<endl;
			}
			
			cout<<" Edit grupa ?  [Y]es/[N]o "<<endl;
			KEY = _getch();
			if(toupper(KEY) == 'Y'){
				cout<<" Enter grupa :: "; cin>>STUD[ID].grupa;
			}
			else{
				cout<<" Apa pentru ai intrat aisea ?"<<endl;
			}
			
			cout<<" Edit Ani ?  [Y]es/[N]o "<<endl;
			KEY = _getch();
			if(toupper(KEY) == 'Y'){
				cout<<" Enter ani :: "; cin>>STUD[ID].ani;
			}
			else{
				cout<<" Apa pentru ai intrat aisea ?"<<endl;
			}
			
		}
		else cout<<"\n\n Nu sunt studenti "<<endl;
		cout<<endl;
	
		system("pause");
	
}
void insert_user() {
	do {
		string passlogin = "\0";
		int i = 0;
		ch = 0;
		system("cls");
		cout<<"**********************************************************************************************************************\n\n";
		cout<<"\t\t\t\tUser ["<<nrUSER+1<<"] \n\n";
		cout<<"\t\t           Login :: ";
		cin>>USER[nrUSER].user;
		cout<<"\t\t          Parola :: ";
		while(ch!=13) {
			ch=_getch();
			if (ch!=13 && ch!=8) {
		      	passlogin+=(char)ch;
		       	i++;
				cout<<"*";
	        }
		    if (ch == 8 && i > 0) {
		        if (passlogin!="\0") {
		        	i--;
		        	passlogin.erase(passlogin.size()-1, 1);;
	            }
		        cout<<"\b \b";
			}
		}
		strcpy(USER[nrUSER].pass ,passlogin.c_str());
		cout<<"\n\t\t      Stare(0,1) :: ";
		int statuscheck;
		cin>>statuscheck;
		if (statuscheck != 0)
			USER[nrUSER].status = 1;
		else
			USER[nrUSER].status = 0;

		
		cout<<"\n\t           Enter - continue || Esc - exit \n\n";
		
		nrUSER++;
	} while (_getch() != 27);
}

void show_user() {
   	int stcheck = 0;
	   system("cls");
   	if (nrUSER != 0)
	   	while (stcheck <= nrUSER) {
	   		system("cls");
			cout<<"**********************************************************************************************************************\n\n";
		   	cout<<"\t\t"<<(char)201<<(char)205<<(char)205<<(char)205<<(char)205<<(char)203<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)203<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)203<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)187<<endl;
			
		    cout<<"\t\t"<<(char)186<<" NR "<<(char)186<<"     NUME      "<<(char)186<<"     Parola    "<<(char)186<<"     Stare     "<<(char)186<<endl;
		       
		    cout<<"\t\t"<<(char)204<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)185<<endl;
		       
		    for( int i=stcheck; i<stcheck+4; i++) {
				cout<<"\t\t"<<(char)186<<setw(4)<<i+1<<(char)186<<setw(15)<<USER[i].user<<(char)186<<setw(15)<<USER[i].pass<<(char)186<<setw(15)<<USER[i].status<<(char)186<<endl;
			  
				if ( i < nrUSER-1 && i != stcheck+3) {
			    	cout<<"\t\t"<<(char)204<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
					<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
					<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206<<(char)205<<(char)205
					<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
					<<(char)205<<(char)185<<endl;
			  	} else if ( i < nrUSER-1 && i == stcheck+3) {
			    	cout<<"\t\t"<<(char)200<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
					<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
					<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202<<(char)205<<(char)205
					<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
					<<(char)205<<(char)205<<(char)188<<endl;
			    } else {
			    	cout<<"\t\t"<<(char)200<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
					<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
					<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202<<(char)205<<(char)205
					<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
					<<(char)205<<(char)205<<(char)188<<endl;
			    }
			    if (i+1 == nrUSER)
			    	break;
		    }
			stcheck += 4;
		        
			cout<<endl;
		    
		    int pagekey;
		    if (stcheck == 4 && stcheck > nrUSER) {
				cout<<"\n\t\t\t           Intoarcere la meniu - Esc ";
			    while (true) {
			    	pagekey = _getch();
			    	if (pagekey == 27)
			    		break;
				}
			    if (pagekey == 27)
			    	break;
			}
		    else if (stcheck == 4) {
				cout<<"\n\t\t      Pagina urmatoare - Enter  |  Intoarcere la meniu - Esc ";
			    while (true) {
			    	pagekey = _getch();
			    	if (pagekey == 27 || pagekey == 13)
			    		break;
				}
			    if (pagekey == 27)
			    	break;
			}
		    else if (stcheck < nrUSER && stcheck !=4) {
			    cout<<"\n       Pagina urmatoare - Enter  |  Pagina anterioara - Backspace  |  Intoarcere la meniu - Esc ";
			    while (true) {
			    	pagekey = _getch();
			    	if (pagekey == 27 || pagekey == 8 || pagekey == 13)
			    		break;
				}
			    if (pagekey == 27)
			    	break;
			    else if (pagekey == 8) {
			    	stcheck -= 8;
				}
			}
			else if (!(stcheck < nrUSER)){
				cout<<"\n\t            Pagina anterioara - Backspace  |  Intoarcere la meniu - Esc ";
				while (true) {
			    	pagekey = _getch();
			    	if (pagekey == 27 || pagekey == 8)
			    		break;
				}
				if (pagekey == 8)
					stcheck -= 8;
				else 
					break;
			}
		}
	else {
		cout<<"**********************************************************************************************************************\n\n";
		cout<<"\t\t             Nici un user nu este introdus in baza de date \n\n\n";
		cout<<"\t\t           Pentru a va intoarce la meniu apasati orice tasta ";
		getch();
	}
}

void search_user() {
	int j = 0;
	int stcheck = 0;
	
	system("cls");
	cout<<"**********************************************************************************************************************\n\n";
	cout<<"\t\t\t\t\t ---Cautare user--- \n\n";
	if (nrUSER != 0) {
		cout<<"\t\t\t\t       User :: ";
		char namecheck[256];
		cin>>namecheck;
		
		for (int i=0; i<nrUSER; i++)
			if (strcmp(USER[i].user , namecheck) == 0) {
				checkUSER[j] = USER[i];
				j++;
			}
		
		if (j == 0) {
			cout<<"\n\t\t                  Nu exista user cu numele \""<<namecheck<<"\" in baza de date \n\n";
			cout<<"\t\t                      Pentru a va intoarce la meniu apasati orice tasta";
			getch();
		}
		else {
			while (stcheck <= j) {
		   		system("cls");
				cout<<"**********************************************************************************************************************\n\n";
			   	cout<<"\t\t"<<(char)201<<(char)205<<(char)205<<(char)205<<(char)205<<(char)203<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
				<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)203<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
				<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)203<<(char)205<<(char)205<<(char)205
				<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)187<<endl;
				
			    cout<<"\t\t"<<(char)186<<" NR "<<(char)186<<"     NUME      "<<(char)186<<"     Parola    "<<(char)186<<"     Stare     "<<(char)186<<endl;
			       
			    cout<<"\t\t"<<(char)204<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
				<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
				<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206<<(char)205<<(char)205
				<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
				<<(char)205<<(char)185<<endl;
			       
			    for( int i=stcheck; i<stcheck+4; i++) {
					cout<<"\t\t"<<(char)186<<setw(4)<<i+1<<(char)186<<setw(15)<<checkUSER[i].user<<(char)186<<setw(15)<<checkUSER[i].pass<<(char)186<<setw(15)<<checkUSER[i].status<<(char)186<<endl;				  
					if ( i < j-1 && i != stcheck+3) {
					    cout<<"\t\t"<<(char)204<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
						<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
						<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206<<(char)205<<(char)205
						<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
						<<(char)205<<(char)185<<endl;
				  	} else if ( i < j-1 && i == stcheck+3) {
				    	cout<<"\t\t"<<(char)200<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
					<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
					<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202<<(char)205<<(char)205
					<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
					<<(char)205<<(char)205<<(char)188<<endl;
			    } else {
			    	cout<<"\t\t"<<(char)200<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
					<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
					<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202<<(char)205<<(char)205
					<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
					<<(char)205<<(char)205<<(char)188<<endl;
			    }
				    if (i+1 == j)
				    	break;
			    }
				stcheck += 4;
			        
				cout<<endl;
			    
			    int pagekey;
			    if (stcheck == 4 && stcheck > j) {
					cout<<"\n\t\t\t            Intoarcere la meniu - Esc ";
				    while (true) {
				    	pagekey = _getch();
				    	if (pagekey == 27)
				    		break;
					}
				    if (pagekey == 27)
				    	break;
				}
			    else if (stcheck == 4) {
					cout<<"\n\t\t       Pagina urmatoare - Enter  |  Intoarcere la meniu - Esc ";
				    while (true) {
				    	pagekey = _getch();
				    	if (pagekey == 27 || pagekey == 13)
				    		break;
					}
				    if (pagekey == 27)
				    	break;
				}
			    else if (stcheck < j && stcheck !=4) {
				    cout<<"\n        Pagina urmatoare - Enter  |  Pagina anterioara - Backspace  |  Intoarcere la meniu - Esc ";
				    while (true) {
				    	pagekey = _getch();
				    	if (pagekey == 27 || pagekey == 8 || pagekey == 13)
				    		break;
					}
				    if (pagekey == 27)
				    	break;
				    else if (pagekey == 8) {
				    	stcheck -= 8;
					}
				}
				else if (!(stcheck < j)){
					cout<<"\n\t             Pagina anterioara - Backspace  |  Intoarcere la meniu - Esc ";
					while (true) {
				    	pagekey = _getch();
				    	if (pagekey == 27 || pagekey == 8)
				    		break;
					}
					if (pagekey == 8)
						stcheck -= 8;
					else 
						break;
				} 
			}
		}
	}
	else {
		cout<<"\t             Nici un user nu este introdus in baza de date \n\n\n";
		cout<<"\t           Pentru a va intoarce la meniu apasati orice tasta ";
		getch();
	}
}

void edit_user() {
	int id;
	system("cls");
	
	if (nrUSER > 0) {
		do {
			cout<<"**********************************************************************************************************************\n\n";
			cout<<"\t\t\t\t\t ---Editare user--- \n\n";
			cout<<"\t\t\t\t       ID (1..."<<nrUSER<<") :: ";
			cin>>id;
		} while (id <= 0 || id > nrUSER);
		
		id--;
		
		system("cls");
		
		while (true) {
			system("cls");
	
			cout<<"**********************************************************************************************************************\n\n";

			cout<<"\t\t"<<(char)201<<(char)205<<(char)205<<(char)205<<(char)205<<(char)203<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)203<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)203<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)187<<endl;
				
			cout<<"\t\t"<<(char)186<<" NR "<<(char)186<<"     NUME      "<<(char)186<<"     Parola    "<<(char)186<<"     Stare     "<<(char)186<<endl;
			       
			cout<<"\t\t"<<(char)204<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)185<<endl;
			
			cout<<"\t\t"<<(char)186<<setw(4)<<id+1<<(char)186<<setw(15)<<USER[id].user<<(char)186<<setw(15)<<USER[id].pass<<(char)186<<setw(15)<<USER[id].status<<(char)186<<endl;

			cout<<"\t\t"<<(char)200<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)188<<endl;

			int key = meniu_user_edit();
			system("cls");
			
			switch(key) {
				case 49: {
					cout<<"**********************************************************************************************************************\n\n";
					cout<<"\t\t\t\t ---Editare nume ["<<USER[id].user<<"]--- \n\n";
					cout<<"\t\t               Nume :: ";
					cin>>USER[id].user;
					break;
				}
				case 50: {
					cout<<"**********************************************************************************************************************\n\n";
					cout<<"\t\t\t\t ---Editare parola ["<<USER[id].pass<<"]--- \n\n";
					cout<<"\t\t             Parola :: ";
					cin>>USER[id].pass;
					break;
				}
				case 51: {
					cout<<"**********************************************************************************************************************\n\n";
					cout<<"\t\t\t\t ---Editare status ["<<USER[id].status<<"]--- \n\n";
					cout<<"\t\t              Status :: ";
					int statuscheck;
					cin>>statuscheck;
					if (statuscheck != 0)
						USER[id].status = 1;
					else
						USER[id].status = 0;
					break;
				}
				case 27: {
					
					break;
				}
			}
			if (key == 27)
				break;
		}
	}
	else {
		cout<<"**********************************************************************************************************************\n\n";
		cout<<"\t\t\t\t\t ---Editare user--- \n\n";
		cout<<"\t\t             Nici un user nu este introdus in baza de date \n\n\n";
		cout<<"\t\t           Pentru a va intoarce la meniu apasati orice tasta ";
		getch();
	} 
}

template <typename T>
void SAVE( T X[],int nr,char numeFILE[]){
	system("cls");
	FILE *fp;
	
	if((fp = fopen(numeFILE,"w+b")) == NULL){ cout<<"Eruare de fisier"<<endl; return;}
	
	fwrite(X, sizeof(T), nr , fp);
	
	fclose(fp);
}

template <typename T>
int LOAD(T X[],char numeFILE[]){
	system("cls");
	
	FILE *fp;
	
	if((fp = fopen(numeFILE,"r+b")) == NULL){ cout<<"Eruare de fisier"<<endl; return 0;}
		
		int nr = fread(X, sizeof(T), 1000 ,fp);
	
	fclose(fp);
	
	return nr;
}

void CONF(){
	FILE *fp;
	
	if((fp = fopen("conf.ini","r+")) == NULL){ cout<<"Eruare de fisier"<<endl; return;}
		NUME_FILE_STUD;
		NUME_FILE_USER;
		NUME_FILE_STATX;
	
	fscanf(fp,"%s%s%s",&NUME_FILE_STUD,&NUME_FILE_USER,&NUME_FILE_STATX);
		
	
	fclose(fp);
}

void raport_Student(){
	FILE *fp;
	
	if((fp = fopen("raport.doc","w+")) == NULL){
		cout<<"Eruare de fisier"<<endl;
		return;
	}
	
	for(int i=0; i<nrSTUD;i++){
		fprintf(fp, "%d %s %s\n",i+1,STUD[i].nume,STUD[i].grupa);
	}
	
	fclose(fp);
	
	system("raport.doc");
}

void LOGIN(){
	
	system("cls");
	
	int i = 0, KEY;
	char pass[100],user[100];
	
	cout<<"\n\n\t Enter User :: ";
	cin>>user;
	cout<<"\n\n\t Enter PASSWORD :: ";
	
	while(1){
		KEY = _getch();
		 if( KEY == 13 ){
		 	
			pass[i] = '\0';
		 	
		 	//cout<<endl<<"pass = "<<pass<endl;
		 	for(int x=0; x<nrSTUD; x++){
			
			 	if(USER[x].status == 1 && strcmp(USER[x].pass,pass)==0 && strcmp(USER[x].user,user)==0){
			 		id_user = x ;
			 		
			 		return;
			   }
		  }
		  system("cls");
		  system("color C");
		  cout<<"\n\n\t Login Error "<<endl;
		  system("pause");
		  
		  i = 0;
		  
		  system("cls");
		  system("color 7");
		  cout<<"\n\n\t Enter User :: ";
		  cin>>user;
		  cout<<"\n\n\t Enter PASSWORD :: ";
		 }
		 else if( KEY == 8){
		 	if( i > 0){
		 		cout<<"\b \b";
		 		i--;
			 }
		 }
		 else{
		 	cout<<'*';
		 	pass[i] = KEY;
		 	i++;
		 }
		 
	}
}

void START(){
	CONF();
	
	nrSTUD = LOAD(STUD , NUME_FILE_STUD);
	nrUSER = LOAD(USER , NUME_FILE_USER);
	nrUSER = LOAD(STATX , NUME_FILE_STATX);
	
	//strcpy(USER[nrUSER].user,"admin");
	//strcpy(USER[nrUSER].pass,"admin");
	
	//nrUSER++;
	
	LOGIN();
	
	while(1){
	switch(management_meniu()){
		case 11 : insert_Student(); break;
		case 12 : show_Student(); break;
		case 13 : find_Student(); break;
		case 14 : edit_Student(); break;
		case 15 : raport_Student(); break;
		case 16 : break;
		
		case 21: insert_user(); break;	
		case 22: show_user();break;
		case 23: search_user();break;
		case 24: edit_user();break;
		
		case 666 : 
		
		SAVE(STUD, nrSTUD, NUME_FILE_STUD);
		SAVE(USER, nrUSER, NUME_FILE_USER);
		SAVE(STATX, nrUSER, NUME_FILE_STATX);
		
		exit(0);
	}
  }
}

