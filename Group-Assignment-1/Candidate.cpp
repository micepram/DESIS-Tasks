#include <iostream>
#include <string>

using namespace std;

class Candidate {

  private:

    // Data Needed to Register A Candidate (Private) - This data should not need to be changed after object creation.

    int m_candidate_id;                       // Candidate's College ID (Unique)
    string m_candidate_name;                  // Candidate's Name
    char m_candidate_gender;                  // Candidate's Gender
    int m_candidate_age;                      // Candidate's Age
    string m_candidate_degree;                // Candidate's Degree
    string m_candidate_branch;                // Candidate's Branch / Specialisation
    int m_candidate_graduation_year;          // Candidate's Graduation Year
    string m_candidate_college_email;         // Candidate's College / University Email
    float m_candidate_grade_standard_10;      // Candidate's Aggregate 10th Standard Marks
    float m_candidate_grade_standard_12;      // Candidate's Aggregate 12th Standard Marks

  public:

    // Data Needed to Register A Candidate (Public) - This data can be updated after object creation.

    float m_candidate_cgpa;                   // Candidate's CGPA - Updated on Semester Change / Backlog Clearance 
    string m_candidate_personal_email;        // Candidate's Personal Email - Updated on Wish
    int m_candidate_active_backlogs_count;    // Candidate's Active Backlog Count

    // Data that can be Modified with Time

    string m_candidate_url_github;
    string m_candidate_url_gitlab;
    string m_candidate_url_resume;
    string m_candidate_url_twitter;
    string m_candidate_url_codechef;
    string m_candidate_url_linkedin;
    string m_candidate_url_portfolio;
    string m_candidate_url_hackerrank;
    string m_candidate_url_hackerearth;
    string m_candidate_url_interviewbit;
    bool m_candidate_placed_status;
    float m_candidate_preference_min_ctc;
    string m_candidate_preference_company[];

    // Parameterised Default Constructor

    Candidate(int m_candidate_id, string m_candidate_name, char m_candidate_gender,
              string m_candidate_degree, string m_candidate_branch, int m_candidate_graduation_year,
              string m_candidate_college_email, float m_candidate_grade_standard_10,
              float m_candidate_grade_standard_12,
              string m_candidate_personal_email, float m_candidate_cgpa,
              string m_candidate_branch) {
      this -> m_candidate_id = m_candidate_id;
      this -> m_candidate_name = m_candidate_name;
      this -> m_candidate_college_email = m_candidate_college_email;
      this -> m_candidate_personal_email = m_candidate_personal_email;
      this -> m_candidate_gender = m_candidate_gender;
      this -> m_candidate_cgpa = m_candidate_cgpa;
      this -> m_candidate_branch = m_candidate_branch;
      this -> m_candidate_placed_status = false;
      this -> m_candidate_resume_link = "";
    }

    // Copy Constructor

    Candidate(const Candidate &candidate) {
      this -> m_candidate_id = candidate.m_candidate_id;
      this -> m_candidate_name = candidate.m_candidate_name;
      this -> m_candidate_college_email = candidate.m_candidate_college_email;
      this -> m_candidate_personal_email = candidate.m_candidate_personal_email;
      this -> m_candidate_personal_gender = candidate.m_candidate_personal_gender;
      this -> m_candidate_personal_cgpa = candidate.m_candidate_personal_cgpa;
      this -> m_candidate_personal_branch = candidate.m_candidate_personal_branch;
      this -> m_candidate_placed_status = candidate.m_candidate_placed_status;
      this -> m_candidate_resume_link = candidate.m_candidate_resume_link;
    }
}