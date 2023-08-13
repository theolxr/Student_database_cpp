struct users{
	char user[256];
	char pass[100];
	bool status = 1;
}USER[1000], checkUSER[1000];
int nrUSER = 0;
int id_user;

struct statx{
	int user_id;
	int	user_login=0;
	int user_insert=0;
}STATX[1000];

struct STUD{
	char nume[256];
	char grupa[100];
	char idnp[14];
	int ani;
	int user_insert;
}STUD[1000];
int nrSTUD = 0;


int nivel_meniu = 1;


char NUME_FILE_STUD[256];
char NUME_FILE_USER[256];
char NUME_FILE_STATX[256];

string pass = "AsdLkj123";
string passlogin;
int ch;
int chw;























