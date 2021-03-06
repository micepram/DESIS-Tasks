#include <iostream>
#include <string>
#include <vector>
#include "CommonHeader.h"
using namespace std;

struct Criteria
{
	float minCGPA;
    float eligible_10th_grade;
    float eligible_12th_grade;
    vector<string> eligible_degree;
    vector<int> eligible_gy;
    vector<string> eligible_branches;
};
    
class Recruiter {

  private:

    // COMPANY Name and JOB Description (PRIVATE)

    string company_name;                         // Company's Name
    string job_profile;                          // Job Profile (STEP/INTERN/FULL TIME)
    string job_location;                         // Job_Location (Bangalore/Hyderabad etc)
    int duration;                                // In case of INTERNSHIP duration of the job
    string perks;                                // Benefits of the job
    int stipend;                                 // Per month Stipend
    string job_description;                      // All about the Job
    
    // JOB Application Details
    
    Criteria Eligibility;
    string application_process;                  // Details of all rounds
    string application_open_date;                // Start date of application
    string application_close_date;               // End date of application
    string interview_date;                       // Date of the interveiw
    int number_of_req;
    int number_of_hired;

    vector<Candidate> hiredCandidates;
    
    
    public:
    
    //PARAMETERISED CONSTRUCTOR
    
    Recruiter(string company_name,string job_profile,string job_location,int durarion , string perks,int stipend,
    string application_process,string job_description, int number_of_req,Criteria Eligibility) {
        
    this -> company_name = company_name;                         
    this -> job_profile = job_profile;                          
    this -> job_location = job_location;                  
    this -> durarion = durarion; 
    this -> perks = perks;
    this -> stipend = stipend;     
    this -> application_process = application_process;
    this -> job_description = job_description;    
    this -> number_of_req = number_of_req;
    this -> Eligibility = Eligibility;
    
    //Default value Intitialisation
        
    application_open_date="";          
    application_close_date="";      
    interview_date="";   
    number_of_hired=0;              
    }
    
    
    string get_company_name(){
        return company_name;
    }      
    
    string get_job_profile(){
        return job_profile;
    }  
  
    string get_job_location(){
        return job_location;
    }   
    
    void set_eligible_10th_grade(float eligible_10th_grade){
        this -> Eligibility.eligible_10th_grade = Eligibility.eligible_10th_grade;
    }

    float get_eligible_10th_grade(){
        return Eligibility.eligible_10th_grade;
    }
	
    void set_eligible_12th_grade(float eligible_12th_grade){
        this -> Eligibility.eligible_12th_grade = Eligibility.eligible_12th_grade;
    }

    float get_eligible_12th_grade(){
        return Eligibility.eligible_12th_grade;
    }
	
    void set_minCGPA(float minCGPA){
        this -> Eligibility.minCGPA = Eligibility.minCGPA;
    }

    float get_minCGPA(){
        return Eligibility.minCGPA;
    }
    void set_eligible_degree(vector<string> eligible_degree){
      this -> Eligibility.eligible_degrees = Eligibility.eligible_degree;
    }	
	
    vector<string> get_eligible_degree(){
	    return Eligibility.eligible_degree; 
    }
    
    void set_eligible_gy(vector<int> eligible_gy){
        this -> Eligibility.eligible_gy = Eligibility.eligible_gy;
    }  

    vector<string> get_eligible_gy(){
        return Eligibility.eligible_gy;
    }  
    
    void set_eligible_branches(vector<string> eligible_branches){
        this -> Eligibility.eligible_branches = Eligibility.eligible_branches;
    }   

    vector<string> get_eligible_branches(){
        return Eligibility.eligible_branches;
    }    
    
    int get_duration(){
        return duration;
    } 
    
    string get_perks(){
        return perks;
    }
    
    int get_stipend(){
        return stipend;
    }   
    
    string get_application_process(){
        return application_process;
    } 
    
    string get_job_description(){
        return job_description;
    }
    
    void set_application_open_date(string application_open_date){
        this -> application_open_date = application_open_date;
    }
    
    
    string get_application_open_date(){
        return application_open_date;
    }     
    
    void set_application_close_date(string application_close_date){
        this -> application_close_date = application_close_date;
    }
    
    string get_application_close_date(){
        return application_close_date;
    }
    
    void set_interview_date(string interview_date){
        this -> interview_date = interview_date;
    }
    
    string get_interview_date(){
        return interview_date;
    }
  
    //Behaviour functions
  
    void hireCandidates(vector<Candidate> ranklist) {
        for(int i=0;i<min(int(ranklist.size()), int(number_of_req)); i++) {
            hiredCandidates.push_back(ranklist[i]);
            number_of_hired++;
        }
    }         
  
    
};
