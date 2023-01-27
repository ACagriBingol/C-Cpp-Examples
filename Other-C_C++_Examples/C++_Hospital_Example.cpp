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
	myDate(int d, int m, int y) {
		day = d;
		month = m;
		year = y;
	}
	int getDay() {
		return day;
	}
	int getMonth() {
		return month;
	}
	int getYear() {
		return year;
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
	string getName() {
		return name + " " + surname;
	}
	string getAddress() {
		return address;
	}
	int getId() {
		return id;
	}
	Person(int p_id, string n, string surn, string addr, myDate* bdate) {
		id = p_id;
		name = n;
		surname = surn;
		address = addr;
		birthday = bdate;
	}
	void Print() {
		cout << "Name:" << name << " Surname:" << surname << " Address:"
				<< address << " Birthday:" << birthday->getDay() << "."
				<< birthday->getMonth() << "." << birthday->getYear() << "\n";
	}

};

class Doctor: public Person {
protected:
	string field;
public:
	void setField(string fld) {
		field = fld;
	}
	string getField() {
		return field;
	}
	int getId() {
		return id;
	}
	Doctor(int p_id, string n, string surn, string addr, myDate* bday,
			string fld) :
			Person(p_id, n, surn, addr, bday) {

		field = fld;
	}
};

class Patient: public Person { // Patient is the derived class.
public:
	Patient(int p_id, string n, string surn, string addr, myDate* bday,
			bool isP) :
			Person(p_id, n, surn, addr, bday) {
		isPlacebo = isP;
	}
private:
	bool isPlacebo;

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
	;
};

class Research {
	int id;
	int patient_count;
protected:
	Doctor* supervisor;
	Disease* disease;

public:
	int patients[30];
	Research(int res_id, Disease *dis, Doctor* sv) {
		id = res_id;
		disease = dis;
		patient_count = 0;
		supervisor = sv;
	}

	Doctor* getSupervisor() {
		return supervisor;
	}
	void setSupervisor(Doctor* d) {
		supervisor = d;
	}
	void addPatient(int p) {
		patients[patient_count] = p;
		patient_count++;
	}
	int getId() {
		return id;
	}
	int getPatientCount() {
		return patient_count;
	}
};
/**/
// Main function for the program
int main() {
	std::vector<Patient> all_patients;
	std::vector<Doctor> all_doctors;
	std::vector<Disease> all_diseases;
	std::vector<Research> all_researches;

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
		if (command == "doctor" || command == "patient") {
			int id;
			string n;
			string surn;
			string addr;
			string fld;
			int d;
			int m;
			int y;
			bool isPlacebo;
			cin >> id >> n >> surn >> addr >> d >> m >> y;
			myDate* bday = new myDate(d, m, y);

			if (command == "doctor") {
				cin >> fld;
				Doctor *d = new Doctor(id, n, surn, addr, bday, fld);
				auto it = all_doctors.begin();
				all_doctors.insert(it, *d);
			} else {
				cin >> isPlacebo;
				Patient *p = new Patient(id, n, surn, addr, bday, isPlacebo);
				auto it = all_patients.begin();
				all_patients.insert(it, *p);
			}

		} else if (command == "disease") {
			int disease_id;
			string disease_name;
			cin >> disease_id >> disease_name;

			Disease d(disease_id, disease_name);
			auto it = all_diseases.begin();
			all_diseases.insert(it, d);

		} else if (command == "research") {
			int disease_id = -1;
			Doctor* dr = NULL;
			Disease* dis = NULL;
			int doctor_id = -1;
			int research_id;
			cin >> research_id >> disease_id >> doctor_id;
			for (int i=0;i<(int)all_diseases.size();i++) {
				if (all_diseases[i].getId() == disease_id) {
					dis = &all_diseases[i];
					break;
				}
			}
			for (int j=0;j<(int)all_doctors.size();j++) {
				if (all_doctors[j].getId() == doctor_id) {
					dr = &all_doctors[j];
					break;
				}
			}

			if (dr == NULL) {
				cout << "Doctor not found.\n";
			} else if (dis == NULL) {
				cout << "Disease not found.\n";
			} else {
				Research *rs = new Research(research_id, dis, dr);
				auto it = all_researches.begin();
				all_researches.insert(it, *rs);
			}
		} else if (command == "enroll") {
			int patient_id = -1;
			int research_id = -1;
			cin >> patient_id >> research_id;
			int i;
			for (i = 0; all_researches.size(); i++) {
				if (all_researches[i].getId() == research_id) {
					all_researches[i].addPatient(patient_id);
					break;

				}
			}

		} else if (command == "changesv") {
			int doctor_id = -1;
			int research_id = -1;
			Doctor* dr = NULL;
			Research* rs = NULL;
			cin >> research_id>>doctor_id;

			for (int i = 0; i<(int)all_researches.size(); i++) {
				if (all_researches[i].getId() == research_id) {
					rs = &all_researches[i];
					break;

				}
			}

			for (int i = 0;i<(int) all_doctors.size(); i++) {
				if (all_doctors[i].getId() == doctor_id) {
					dr = &all_doctors[i];
					break;
				}
			}
			if (rs == NULL) {
				cout << "Research not found.\n";
			} else if (dr == NULL) {
				cout << "Doctor not found.\n";
			} else {
				rs->setSupervisor(dr);
			}
		} else if (command == "print") {
			string command2;
			cin >> command2;
			if (command2 == "patients") {
				for (auto x : all_patients) {
					x.Print();
				}
			} else if (command2 == "enrolled") {
				int research_id;
				cin >> research_id;
				for (int i = 0; i < (int) all_researches.size(); i++) {
					if (all_researches[i].getId() == research_id) {
						cout << "Supervisor-->";
						Doctor *dr = all_researches[i].getSupervisor();
						dr->Print();
						for (int j = 0; j < all_researches[i].getPatientCount();
								j++) {
							for (auto y : all_patients) {
								if (all_researches[i].patients[j]
										== y.getId()) {
									y.Print();
									break;
								}
							}
						}
					}
				}
			} else if (command2 == "doctors") {
				for (auto x : all_doctors) {
					x.Print();
				}
			} else if (command2 == "patient") {
				int patient_id;
				cin >> patient_id;
				Patient *pt = NULL;
				for (auto x : all_patients) {
					if (x.getId() == patient_id) {
						pt = &x;
						break;

					}
				}
				if (pt != NULL) {
					pt->Print();
				}
			} else if (command2 == "doctor") {
				int doctor_id;
				cin >> doctor_id;
				Doctor *dr = NULL;
				for (auto x : all_doctors) {
					if (x.getId() == doctor_id) {
						dr = &x;
						break;

					}
				}
				if (dr != NULL) {
					dr->Print();
				}
			}
		}
		cin >> command;
	}

	return 0;
}

