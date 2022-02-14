#include <iostream>
using namespace std;

string name[20],course[20],remarks[20];
unsigned long long int roll[20],contact[20],clas[20],total=0;
int i,x;

void enter(){
	int n;
	cout<<"How many students data  you want to enter: ";
	cin>>n;
	cout<<endl;
	for(i=total;i<total+n;i++){
		cout<<"Enter details of student: "<<i+1<<endl;
		cout<<"Enter name of the student: ";
		cin>>name[i];
		cout<<"Enter roll number of the student: ";
		cin>>roll[i];
		cout<<"Enter course of the student: ";
		cin>>course[i];
		cout<<"Enter contact number of the student: ";
		cin>>contact[i];
		cout<<"Enter class of the student: ";
		cin>>clas[i];
		cout<<"Enter any remark of the student: ";
		cin>>remarks[i];
		cout<<endl;
	}
	total+=n;
}

void show(){
	if(total==0)
	cout<<"No values to show"<<endl<<endl;
	else{
		for(i=0;i<total;i++){
		cout<<"Details of student: "<<i+1<<endl;
		cout<<"Name: "<<name[i]<<endl;
		cout<<"Roll Number: "<<roll[i]<<endl;
		cout<<"Course: "<<course[i]<<endl;
		cout<<"Contact Number: "<<contact[i]<<endl;
		cout<<"Remarks: "<<remarks[i]<<endl<<endl;
	}
	}
}

void search(){
	if(total==0)
	cout<<"No values to search"<<endl<<endl;
	else{
		cout<<"Enter the roll number whose data you want to search: ";
		cin>>x;
		for(i=0;i<total;i++){
			if(roll[i]==x){
				cout<<"Details of student: "<<i+1<<endl;
				cout<<"Name: "<<name[i]<<endl;
				cout<<"Roll Number: "<<roll[i]<<endl;
				cout<<"Course: "<<course[i]<<endl;
				cout<<"Contact Number: "<<contact[i]<<endl;
				cout<<"Remarks: "<<remarks[i]<<endl<<endl;
			}
			else if(i==total)
			cout<<"Roll number not found"<<endl;
		}
	}
}

void update(){
	if(total==0)
	cout<<"No values to update"<<endl<<endl;
	else{
		cout<<"Enter the roll number whose data you want to update: ";
		cin>>x;
		for(i=0;i<total;i++){
			if(roll[i]==x){
				cout<<"Details of student "<<i+1<<" before updating"<<endl;
				cout<<"Name: "<<name[i]<<endl;
				cout<<"Roll Number: "<<roll[i]<<endl;
				cout<<"Course: "<<course[i]<<endl;
				cout<<"Contact Number: "<<contact[i]<<endl;
				cout<<"Remarks: "<<remarks[i]<<endl<<endl;
				
				cout<<"Enter new details for student: "<<i+1<<endl;
				cout<<"Enter name of the student: ";
				cin>>name[i];
				cout<<"Enter roll number of the student: ";
				cin>>roll[i];
				cout<<"Enter course of the student: ";
				cin>>course[i];
				cout<<"Enter contact number of the student: ";
				cin>>contact[i];
				cout<<"Enter class of the student: ";
				cin>>clas[i];
				cout<<"Enter any remark of the student: ";
				cin>>remarks[i];
				cout<<endl;
			}
			else if(i==total)
			cout<<"Roll number not found"<<endl;
		}
	}
}

void del(){
	if(total==0)
	cout<<"No data to delete"<<endl<<endl;
	else{
		int temp;
		while(true){
			cout<<"1.Delete entire database"<<endl;
			cout<<"2.Delete specific student data using roll number"<<endl;
			cout<<"Enter your choice: ";
			cin>>temp;
			cout<<endl;
			if(temp==1 || temp==2)
			break;
			else
			cout<<"Wrong input"<<endl;
		}
	
		if(temp==1){
			total=0;
			cout<<"Your entire dataset is deleted..!!"<<endl;
		}
		
		else{
			cout<<"Enter the roll number whose data you want to delete: ";
			cin>>x;
			for(i=0;i<total;i++){
				if(roll[i]==x){
					for(int j=i;j<total;j++){
						name[i]=name[i+1];
						course[i]=course[i+1];
						remarks[i]=remarks[i+1];
						roll[i]=roll[i+1];
						contact[i]=contact[i+1];
						clas[i]=clas[i+1];	
					}
					total--;
					cout<<"Deletion completed\n\n";
				}
			}
			if(i==total)
			cout<<"Roll number not found"<<endl;
		}
	}
}


int main(){
	int choice;
	while(true){
		cout<<"1. Enter new student data"<<endl;
		cout<<"2. Show student data"<<endl;
		cout<<"3. Search student"<<endl;
		cout<<"4. Update a student"<<endl;
		cout<<"5. Delete a student"<<endl;
		cout<<"6. Exit"<<endl<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		cout<<endl;
		
		switch(choice){
			case 1:
				enter();
				break;
			case 2:
				show();
				break;
			case 3:
				search();
				break;
			case 4:
				update();
				break;
			case 5:
				del();
				break;
			case 6:
				return (0);
				break;
			default:
				cout<<"Wrong input"<<endl<<endl;
		}
	}
	
	return 0;
}
