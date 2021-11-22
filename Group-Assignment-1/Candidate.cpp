#include <iostream>
#include <string>
#include <vector>
#include "CommonHeader.h"

using namespace std;

class Candidate {

  private:

    // Data Needed to Register A Candidate (Private) - This data should not need to be changed after object creation.

    int m_candidate_id;                                 // Candidate's College ID (Unique)
    string m_candidate_name;                            // Candidate's Name
    char m_candidate_gender;                            // Candidate's Gender
    int m_candidate_age;                                // Candidate's Age
    string m_candidate_degree;                          // Candidate's Degree
    string m_candidate_branch;                          // Candidate's Branch / Specialisation
    int m_candidate_graduation_year;                    // Candidate's Graduation Year
    string m_candidate_college_email;                   // Candidate's College / University Email
    float m_candidate_grade_standard_10;                // Candidate's Aggregate 10th Standard Marks
    float m_candidate_grade_standard_12;                // Candidate's Aggregate 12th Standard Marks

  protected:

    // Data Needed to Register A Candidate (Protected) - This data can be updated after object creation.

    float m_candidate_cgpa;                             // Candidate's CGPA - Updated on Semester Change / Backlog Clearance 
    string m_candidate_personal_email;                  // Candidate's Personal Email - Updated on Wish
    int m_candidate_active_backlogs_count;              // Candidate's Active Backlog Count

    // Data that can be Modified with Time

    string m_candidate_url_github;                      // Candidate's GitHub URL (Optional)
    string m_candidate_url_gitlab;                      // Candidate's GitLab URL (Optional)
    string m_candidate_url_resume;                      // Candidate's Resume / CV URL (Optional)
    string m_candidate_url_twitter;                     // Candidate's Twitter URL (Optional)
    string m_candidate_url_codechef;                    // Candidate's CodeChef URL (Optional)
    string m_candidate_url_linkedin;                    // Candidate's LinkedIn URL (Optional)
    string m_candidate_url_portfolio;                   // Candidate's Personal Portfolio URL (Optional)
    string m_candidate_url_hackerrank;                  // Candidate's HackerRank URL (Optional)
    string m_candidate_url_hackerearth;                 // Candidate's HackerEarth URL (Optional)
    string m_candidate_url_interviewbit;                // Candidate's InterviewBit URL (Optional)
    bool m_candidate_placed_status;                     // Candidate's Placement Status (Optional)
    string m_candidate_placed_company;                  // Candidate's Placement Company (Optional)
    float m_candidate_placed_ctc;                       // Candidate's Placement CTC (Optional)
    float m_candidate_preference_min_ctc;               // Candidate's Preference for Minimum CTC (Optional)
    vector<string> m_candidate_preference_company;      // Candidate's Preference among Companies (Optional)

    // Protected Data Member Setters

    void setCGPA(float m_candidate_cgpa) {
      this -> m_candidate_cgpa = m_candidate_cgpa;
    }

    void setPersonalEmail(string m_candidate_personal_email) {
      this -> m_candidate_personal_email = m_candidate_personal_email;
    }

    void setActiveBacklogsCount(int m_candidate_active_backlogs_count) {
      this -> m_candidate_active_backlogs_count = m_candidate_active_backlogs_count;
    }

    void setGitHub(string m_candidate_url_github) {
      this -> m_candidate_url_github = m_candidate_url_github;
    }

    void setGitLab(string m_candidate_url_gitlab) {
      this -> m_candidate_url_gitlab = m_candidate_url_gitlab;
    }

    void setResume(string m_candidate_url_resume) {
      this -> m_candidate_url_resume = m_candidate_url_resume;
    }

    void setTwitter(string m_candidate_url_twitter) {
      this -> m_candidate_url_twitter = m_candidate_url_twitter;
    }

    void setCodeChef(string m_candidate_url_codechef) {
      this -> m_candidate_url_codechef = m_candidate_url_codechef;
    }

    void setLinkedIn(string m_candidate_url_linkedin) {
      this -> m_candidate_url_linkedin = m_candidate_url_linkedin;
    }

    void setPortfolio(string m_candidate_url_portfolio) {
      this -> m_candidate_url_portfolio = m_candidate_url_portfolio;
    }

    void setHackerRank(string m_candidate_url_hackerrank) {
      this -> m_candidate_url_hackerrank = m_candidate_url_hackerrank;
    }

    void setHackerEarth(string m_candidate_url_hackerearth) {
      this -> m_candidate_url_hackerearth = m_candidate_url_hackerearth;
    }

    void setInterviewBit(string m_candidate_url_interviewbit) {
      this -> m_candidate_url_interviewbit = m_candidate_url_interviewbit;
    }
    
    // Candidate cannot modify self Placement status.

    // void setPlacedStatus(bool m_candidate_placed_status) {
    //   this -> m_candidate_placed_status = m_candidate_placed_status;
    // }

    void setPlacedCompany(string m_candidate_placed_company) {
      this -> m_candidate_placed_company = m_candidate_placed_company;
    }

    void setPlacedCTC(float m_candidate_placed_ctc) {
      this -> m_candidate_placed_ctc = m_candidate_placed_ctc;
    }

    void setPrefCompany(vector<string> m_candidate_preference_company) {
      this -> m_candidate_preference_company = m_candidate_preference_company;
    }
    
    void setPrefMinCTC(float m_candidate_preference_min_ctc) {
      this -> m_candidate_preference_min_ctc = m_candidate_preference_ctc;
    }
    

  public:

    
    // Parameterised Default Constructor

    Candidate(int m_candidate_id, string m_candidate_name, char m_candidate_gender, int m_candidate_age,
              string m_candidate_degree, string m_candidate_branch, int m_candidate_graduation_year,
              string m_candidate_college_email, float m_candidate_grade_standard_10,
              float m_candidate_grade_standard_12, float m_candidate_cgpa, string m_candidate_personal_email,
              string m_candidate_active_backlogs_count) {

      // Required Values

      this -> m_candidate_id = m_candidate_id;
      this -> m_candidate_name = m_candidate_name;
      this -> m_candidate_gender = m_candidate_gender;
      this -> m_candidate_age = m_candidate_age;
      this -> m_candidate_degree = m_candidate_degree;
      this -> m_candidate_branch = m_candidate_branch;
      this -> m_candidate_graduation_year = m_candidate_graduation_year;
      this -> m_candidate_college_email = m_candidate_college_email;
      this -> m_candidate_grade_standard_10 = m_candidate_grade_standard_10;
      this -> m_candidate_grade_standard_12 = m_candidate_grade_standard_12;
      this -> m_candidate_cgpa = m_candidate_cgpa;
      this -> m_candidate_personal_email = m_candidate_personal_email;
      this -> m_candidate_active_backlogs_count = m_candidate_active_backlogs_count;

      // Default Value Initialisation

      this -> m_candidate_url_github = "";
      this -> m_candidate_url_gitlab = "";
      this -> m_candidate_url_resume = "";
      this -> m_candidate_url_twitter = "";
      this -> m_candidate_url_codechef = "";
      this -> m_candidate_url_linkedin = "";
      this -> m_candidate_url_portfolio = "";
      this -> m_candidate_url_hackerrank = "";
      this -> m_candidate_url_hackerearth = "";
      this -> m_candidate_url_interviewbit = "";
      this -> m_candidate_placed_status = false;
      this -> m_candidate_placed_company = "";
      this -> m_candidate_placed_ctc = 0.0;
      this -> m_candidate_preference_min_ctc = 0.0;

    }

    // Copy Constructor

    Candidate(const Candidate &candidate) {

      this -> m_candidate_id = candidate.m_candidate_id;
      this -> m_candidate_name = candidate.m_candidate_name;
      this -> m_candidate_gender = candidate.m_candidate_gender;
      this -> m_candidate_age = candidate.m_candidate_age;
      this -> m_candidate_degree = candidate.m_candidate_degree;
      this -> m_candidate_branch = candidate.m_candidate_branch;
      this -> m_candidate_graduation_year = candidate.m_candidate_graduation_year;
      this -> m_candidate_college_email = candidate.m_candidate_college_email;
      this -> m_candidate_grade_standard_10 = candidate.m_candidate_grade_standard_10;
      this -> m_candidate_grade_standard_12 = candidate.m_candidate_grade_standard_12;
      this -> m_candidate_cgpa = candidate.m_candidate_cgpa;
      this -> m_candidate_personal_email = candidate.m_candidate_personal_email;
      this -> m_candidate_active_backlogs_count = candidate.m_candidate_active_backlogs_count;
      this -> m_candidate_url_github = candidate.m_candidate_url_github;
      this -> m_candidate_url_gitlab = candidate.m_candidate_url_gitlab;
      this -> m_candidate_url_resume = candidate.m_candidate_url_resume;
      this -> m_candidate_url_twitter = candidate.m_candidate_url_twitter;
      this -> m_candidate_url_codechef = candidate.m_candidate_url_codechef;
      this -> m_candidate_url_linkedin = candidate.m_candidate_url_linkedin;
      this -> m_candidate_url_portfolio = candidate.m_candidate_url_portfolio;
      this -> m_candidate_url_hackerrank = candidate.m_candidate_url_hackerrank;
      this -> m_candidate_url_hackerearth = candidate.m_candidate_url_hackerearth;
      this -> m_candidate_url_interviewbit = candidate.m_candidate_url_interviewbit;
      this -> m_candidate_placed_status = candidate.m_candidate_placed_status;
      this -> m_candidate_placed_company = candidate.m_candidate_placed_company;
      this -> m_candidate_placed_ctc = candidate.m_candidate_placed_ctc;
      this -> m_candidate_preference_min_ctc = candidate.m_candidate_preference_min_ctc;
      this -> m_candidate_preference_company = candidate.m_candidate_preference_company;

    }

    // Destructor

    ~Candidate() {
      cout << "Your Profile Has Been Successfully Deleted!" << endl;
    }
    
    // Private & Protected Data Member Getters

    int getID() {
      return this -> m_candidate_id;
    }

    string getName() {
      return this -> m_candidate_name;
    }

    char getGender() {
      return this -> m_candidate_gender;
    }

    int getAge() {
      return this -> m_candidate_age;
    }

    string getDegree() {
      return this -> m_candidate_degree;
    }

    string getBranch() {
      return this -> m_candidate_branch;
    }

    int getGraduationYear() {
      return this -> m_candidate_graduation_year;
    }

    string getCollegeEmail() {
      return this -> m_candidate_college_email;
    }

    float getGradeStandard10() {
      return this -> m_candidate_grade_standard_10;
    }

    float getGradeStandard12() {
      return this -> m_candidate_grade_standard_12;
    }

    float getCGPA() {
      return this -> m_candidate_cgpa;
    }

    string getPersonalEmail() {
      return this -> m_candidate_personal_email;
    }

    int getActiveBacklogsCount() {
      return this -> m_candidate_active_backlogs_count;
    }

    string getGitHub() {
      return this -> m_candidate_url_github;
    }

    string getGitLab() {
      return this -> m_candidate_url_gitlab;
    }

    string getResume() {
      return this -> m_candidate_url_resume;
    }

    string getTwitter() {
      return this -> m_candidate_url_twitter;
    }

    string getCodeChef() {
      return this -> m_candidate_url_codechef;
    }

    string getLinkedIn() {
      return this -> m_candidate_url_linkedin;
    }

    string getPortfolio() {
      return this -> m_candidate_url_portfolio;
    }

    string getHackerRank() {
      return this -> m_candidate_url_hackerrank;
    }

    string getHackerEarth() {
      return this -> m_candidate_url_hackerearth;
    }

    string getInterviewBit() {
      return this -> m_candidate_url_interviewbit;
    }

    bool getPlacedStatus() {
      return this -> m_candidate_placed_status;
    }

    string getPlacedCompany() {
      return this -> m_candidate_placed_company;
    }
    
    float getPlacedCTC() {
      return this -> m_candidate_placed_ctc;
    }
    
    vector<string> getPrefCompany() {
      return this -> m_candidate_preference_company;
    }

    float getPrefMinCTC() {
      return this -> m_candidate_preference_min_ctc;
    }

};