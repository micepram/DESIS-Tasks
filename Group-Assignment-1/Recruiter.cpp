#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Recruiter {

  private:

    // COMPANY'S DATA (PRIVATE)

    string company_name;                         // Company's Name
    string job_profile;                          // Job Profile (STEP/INTERN/FULL TIME)
    string job_location;                         // Job_Location (Bangalore/Hyderabad etc)
    vector<int> eligible_batches;                // Eligible Batches
    vector<string> eligible_branches;            // Eligible Branches
    int durarion;                                // In case of INTERNSHIP duration of the job
    string perks;                                // Benefits of the job
    int stipend;                                 // Per month Stipend
    string application_process;                  // Details of all rounds
    string application_open_date;                // Start date of application
    string application_close_date;               // End date of application
    string interveiw_date;                       // Date of the interveiw
    string job_description;                      // All about the Job
  
    public:
    
    //PARAMETERISED CONSTRUCTOR
    
    Recruiter(string company_name,string job_profile,string job_location,vector<int> eligible_batches,
              vector<string> eligible_branches,int durarion , string perks,int stipend,string application_process,
              string application_open_date,string application_close_date,string interveiw_date,string job_description) {
        
    this -> company_name = company_name;                         
    this -> job_profile = job_profile;                          
    this -> job_location = job_location;                         
    this -> eligible_batches = eligible_batches;                
    this -> eligible_branches = eligible_branches;           
    this -> durarion = durarion; 
    this -> perks = perks;
    this -> stipend = stipend;     
    this -> application_process = application_process;     
    this -> application_open_date = application_open_date;          
    this -> application_close_date = application_close_date;      
    this -> interveiw_date = interveiw_date;                 
    this -> job_description = job_description;    
    }
};
