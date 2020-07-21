#include<iostream>
#include<string>
using namespace std;
//Khursheed wants to book a ticket from Faisal Movers. He can book tickets online or in person. In 
//both ways, he is provided with the schedule of bus, number of available seats and finally the 
//payment. When the payment is completed the customer is given a confirmation. 
//Draw a UML diagram for the whole scenario of Khursheed making a reservation/ booking. Make possible 
//classes, their attributes and functions and then show their relations in diagram and code as well.

class Person
{
	int noTickets;
	int seats;
	string name;
	public:
		void setTickets(int t)
		{
			noTickets=t;
		}
		void setSeats(int s)
		{
			seats=s;
		}
		void setName(string n)
		{
			name=n;
		}
		int getNoOfTickets()
		{
			return noTickets;
		}
		int getSeats()
		{
			return seats;
		}
		string getName()
		{
			return name;
		}
};

class Booking
{
	int tickets;
	int seats;
	string name;
	string time;
	int payment;
	public:
		Booking(Person &p)
		{
			tickets=p.getNoOfTickets();
			seats=p.getSeats();
			name=p.getName();
			//Suppose 1 ticket cost 10 $
			payment=tickets*seats;
		}
		void printData()
		{
			cout<<"\nThe name is: "<<name<<endl;
			cout<<"\nThe seats are: "<<seats<<endl;
			cout<<"\nThe tickets are: "<<tickets<<endl;
            cout<<"\nThe payment is: "<<payment<<" $s"<<endl;
		}
   
};
    


void task1()
{
	string name;
	int seats;
	int tickets;
	Person p1;
	
	cout<<"\nEnter the name of the person:\n";
	cin>>name;
	cout<<"\nEnter the seats you want to reserve:\n";
	cin>>seats;
	cout<<"\nEnter the number of tickets you want to buy:\n";
	cin>>tickets;
	p1.setTickets(tickets);
	p1.setSeats(seats);
	p1.setName(name);
	
	Booking obj(p1);
	
	obj.printData();
}

//Task 7
//You are given the UML diagram of Hospital Management system. Write a program according to the 
//given scenario


class Doctor
{
	int docId;
	string name;
	string dept;
	string specialization;
	string phoneNo;
	string location;
	public:
		void PrescribeMeds();
		void CheckReports();
		void PreciseTest();
		void DrawSalary();
};
class Patient
{
	int patientID;
	string patientName;
	int phoneNo;
	string adress;
	int age;
	int sex;
	int roomNo;
	public:
		void PayBills();
};
class Receptionist
{
	int receptionID;
	string name;
	public:
		checkRoomAvailability();
		BookRoom();
		GenerateBill();
		MaintainPatientDetails();
		DrawSalary();
};
class Dept
{
	int ID;
	string name;
	int docID;
	public:
		AddDepartment();
		DeleteDepartment();
		AddDoctor();
		DeleteDoctor();
};
class Rooms
{
	int RoomNo;
	string location;
};
class Bill
{
	string BillNo;
	string PatientName;
	float amt;
};


void task2()
{
   	
}


int main()
{
	//task1();
	//task2();
	//task3();
	return 0;
}


