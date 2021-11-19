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
  
    
};
