#include<iostream>
#include<iomanip>
using namespace std;

float gradetogp(string g){
    if(g=="A" || g=="a") 		return 4.0;
    else if(g=="A-" || g=="a-") return 3.67;
    else if(g=="B+" || g=="b+") return 3.33;
    else if(g=="B" || g=="b") 	return 3.0;
    else if(g=="B-" || g=="b-") return 2.67;
    else if(g=="C+" || g=="c+") return 2.33;
    else if(g=="C" || g=="c") 	return 2.0;
    else if(g=="C-" || g=="c-") return 1.67;
    else if(g=="D+" || g=="d+") return 1.33;
    else if(g=="D" || g=="d") 	return 1.0;
    else if(g=="F" || g=="f") 	return 0.0;
    return -1;
}
int main(){
		string grade;
		int credits;
		float grade_points=0.0;
		int courses;
		int total_credits=0;
		float gpa;
		
		cout<<endl<<"------ GPA Calculator ------"<<endl;
		cout<<endl;
		cout<<"Enter Total Number of Courses: ";
		cin>>courses;
		cout<<endl;
		if(courses==0) return 0;
		for(int i=1;i<=courses;i++){
			cout<<"--- Course "<<i<<" ---"<<endl;
			cout<<"Enter Grade For Course "<<i<<": ";
			cin>>grade;
			cout<<"Enter Credit Hours for Course "<<i<<": ";
			cin>>credits;
			if(credits<=0){
				cout<<"Invalid Credits!"<<endl;
				i--;
				continue;}
			cout<<endl;
		float points = gradetogp(grade);
		if(points == -1){
    		cout << "Invalid grade, Please Enter valid grade!"<<endl;
   			i--; 
    		continue;}
			grade_points+=(points*credits);
			total_credits+=credits;
		}
		
		gpa=grade_points/total_credits;
		cout<<setw(29)<<"--- Result ---"<<endl;
		cout<<"Grade Points: "<<grade_points<<setw(30)<<"Total Credit Hours: "<<total_credits<<endl;
		cout<<"GPA : "<<fixed<<setprecision(2)<<gpa<<endl;
		return 0;
}