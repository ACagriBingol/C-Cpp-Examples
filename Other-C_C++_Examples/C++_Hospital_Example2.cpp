#include <iostream>
#include <vector>
using namespace std;

class myDate;
class Person;
class Doctor;
class Disease;

class myDate {
protected:
int day;
int month;
int year;
public:
myDate(int d, int m, int y){
day=d;
month=m;
year=y;
}
void print(){
cout<<day<<"."<<month<<"."<<year;
}
};

class Person {
protected:
int id;
string name;
string surname;
string address;
myDate* birthday;
public:
Person(int p_id, string n, string surn, string addr, myDate* bdate) {
id = p_id;
name = n;
surname = surn;
address = addr;
birthday = bdate;
}
void Print() {
cout << "Name:"<<name << " Surname:"<<surname << " Address:"<<address << " Birthday:";
birthday->print();
cout<<"\n";
}
};

class Doctor: public Person {
string field;
public:
Doctor(int p_id, string n, string surn, string addr, myDate* bdate, string f):Person(p_id, n,surn, addr, bdate)
{
field = f;
}
int getId(){
return id;
}
};

class Patient: public Person { // Patient is the derived class.
bool isPlacebo;
public:
Patient(int p_id, string n, string surn, string addr, myDate* bdate, bool pb):Person(p_id, n,surn, addr,bdate){
isPlacebo = pb;
}
int getId(){
return id;
}

};


class Disease {
int id;
string name;
public:
Disease(int disease_id, string disease_name) {
id = disease_id;
name = disease_name;
}
int getId() {
return id;
}
string getName() {
return name;
}
};


class Research {
int id, disease_id, supervisor;
std::vector<int> patients;
public:
Research(int r, int d, int doc){
id = r;
disease_id = d;
supervisor = doc;
}

void enroll(int p_id){
patients.push_back(p_id);
}

void changeSv(int doc){
supervisor = doc;

}
std::vector<int> getList(){
return patients;
}
int getId(){
return id;
}
int getSupervisor(){
return supervisor;
}
};


/**/
// Main function for the program
int main() {
	vector<Patient> all_patients;
	vector<Doctor> all_doctors;
	vector<Research> all_researches;
	vector<Disease> all_diseases;
	
	
	cout << "To register doctor use <doctor id name surname city birthday birthmonth birthyear field>\n";
	cout << "To register patient use <patient id name surname city birthday birthmonth birthyear isPlacebo>\n";
	cout << "To register disease use <disease id name>\n";
	cout << "To register research use <research research_id disease_id doctor_id>\n";
	cout << "To enroll patient into research use <enroll patient_id research_id>\n";
	cout << "To change supervisor of a research use <changesv research_id doctor_id>\n";
	cout << "To print all patients use <print patients>\n";
	cout << "To print all patients in a research study <print enrolled research_id>\n";
	cout << "To print all doctors use <print doctors>\n";
	cout << "To print a patient info use <print patient patient_id>\n";
	cout << "To print a doctor info use <print doctor doctor_id>\n";
	
	string command;
	cin >> command;
	while (command != "exit") {
		if (command == "doctor") {
			int id;
			string name, surname, city,field;
			myDate* birthday; 
			int d,m,y;
			cin >> id >> name >> surname >> city >> d >> m >> y >> field; 
			birthday = new myDate(d,m,y);
			Doctor doc(id,name,surname,city,birthday,field); 
			auto it = all_doctors.begin(); 
			all_doctors.insert(it,doc);
		}

		
		
		else if(command == "patient"){
			int id;
			string name,surname,city;
			myDate* birthday; 
			int d,m,y; 
			bool isPlacebo;
			cin >> id >> name >> surname >> city >> d >> m >> y >> isPlacebo;
			birthday = new myDate(d,m,y);
			Patient   pat(id,name,surname,city,birthday,isPlacebo); 
			auto it = all_patients.begin(); 
			all_patients.insert(it,pat);
		}
	
			
		else if (command == "disease") {
			
			int disease_id;
			string disease_name;
			cin >> disease_id >> disease_name;
			Disease d(disease_id, disease_name);
			
			auto it = all_diseases.begin();
			all_diseases.insert(it, d);
			
		} 
		
		
		else if(command == "research"){
			int research_id, disease_id, doctor_id;
			cin >> research_id >> disease_id >> doctor_id;
			Research r(research_id,disease_id,doctor_id);
			auto it = all_researches.begin();
			all_researches.insert(it, r);
		}
		
			
		else if (command == "enroll"){
			int patient_id, research_id;
			cin >> patient_id >> research_id;
			for(auto& x : all_researches){
			std::vector<int> X = x.getList();
			if(x.getId()==research_id){
			x.enroll(patient_id);
			break;
			}
			}
			}	
			
		else if(command == "changesv"){
			int research_id, doctor_id;
			cin >> research_id >> doctor_id;
			for(auto & x : all_researches){
			if(x.getId()==research_id){
			x.changeSv(doctor_id);
			break;
			}
			}
		}
		
		else if (command == "print") {
			string command2;
			cin >> command2;
			if (command2 == "patients") {
				for (auto x : all_patients) {
					x.Print();
				}
			}
		
			else if (command2 == "patient") {
				int p_id;
				cin>> p_id;
				for (auto x : all_patients) {
				if(x.getId()==p_id){
				x.Print();
				break;
				}
			}
		}
			else if (command2 == "doctors") {
				for (auto x : all_doctors) {
					x.Print();
				}
			}
			
			else if (command2 == "doctor") {
				int doc_id;
				cin>>doc_id;
				for (auto x : all_doctors) {
				if(x.getId()==doc_id){
				x.Print();
				break;
				}
			}
		}
			else if (command2 == "enrolled") {
				int research_id;
				cin >> research_id;
				for (auto x : all_researches){
				if(x.getId()==research_id){
				int sv = x.getSupervisor();
				std::vector<int> patient_list = x.getList();
				for(auto d:all_doctors){
				if(d.getId()==sv){
				cout<<"Supervisor-->";
				d.Print();
				break;
				}
				}
				int i;
				for (i=0;i<(int)patient_list.size();i++){
				for(auto y : all_patients){
				if(y.getId()==patient_list[i]){
				y.Print();
				break;
				}
				}
				}
				break;
				}
				}
			}
		}
			cin >> command;
		}
return 0;
}
