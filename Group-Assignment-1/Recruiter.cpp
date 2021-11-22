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
    string interview_date;                       // Date of the interveiw
    string job_description;                      // All about the Job
  
   
  
  public:
    
  
    //PARAMETERISED CONSTRUCTOR
    
    Recruiter(string company_name,string job_profile,string job_location,vector<int> eligible_batches,
              vector<string> eligible_branches,int durarion , string perks,int stipend,string application_process,
              string application_open_date,string application_close_date,string interview_date,string job_description) {
        
    this -> company_name = company_name;                         
    this -> job_profile = job_profile;                          
    this -> job_location = job_location;                         
    this -> eligible_batches = eligible_batches;                
    this -> eligible_branches = eligible_branches;           
    this -> durarion = durarion; 
    this -> perks = perks;
    this -> stipend = stipend;     
    this -> application_process = application_process;
    this -> job_description = job_description;    

    //Default value Intitialisation
        
    application_open_date="";          
    application_close_date="";      
    interview_date="";                 
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
    
    vector<int> get_eligible_batches(){
        return eligible_batches;
    }  
    
    vector<string> get_eligible_branches(){
        return eligible_branches;
    }    
    
    int get_durarion(){
        return duration
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
    
    void set_interveiw_date(string interveiw_date){
        this -> interveiw_date = interview_date;
    }
    
    string get_interveiw_date(){
        return interview_date;
    }
                    
};

