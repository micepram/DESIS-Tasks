#include<bits/stdc++.h>
using namespace std;

class Candidate {

  private:

    // Data Needed to Register A Candidate (Private) - This data should not need to be changed after object creation.

    int m_candidate_id;                       // Candidate's College ID (Unique)
    string m_candidate_name;                  // Candidate's Name
    string m_candidate_college_email;         // Candidate's College / University Email
    char m_candidate_gender;                  // Candidate's Gender
    string m_candidate_degree;                // Candidate's Degree
    string m_candidate_branch;                // Candidate's Branch / Specialisation
    int m_candidate_graduation_year;          // Candidate's Graduation Year
    int m_candidate_active_backlogs_count;    // Candidate's Active Backlog Count
    float m_candidate_grade_standard_10;      // Candidate's Aggregate 10th Standard Marks
    float m_candidate_grade_standard_12;      // Candidate's Aggregate 12th Standard Marks

  public:

    // Data Needed to Register A Candidate (Public) - This data can be updated after object creation.

    string m_candidate_personal_email;
    float m_candidate_cgpa;

    // Data that can be Modified with Time

    float m_candidate_min_ctc_preference;
    bool m_candidate_placed_status;
    string m_candidate_resume_link;
    string m_candidate_url_portfolio;
    string m_candidate_url_github;
    string m_candidate_url_gitlab;
    string m_candidate_url_linkedin;
    string m_candidate_url_twitter;
    string m_candidate_url_hackerrank;
    string m_candidate_url_codechef;
    string m_candidate_url_interviewbit;
    string m_candidate_url_hackerearth;

    // Parameterised Default Constructor

    Candidate(int m_candidate_id, string m_candidate_name, string m_candidate_college_email, 
              string m_candidate_personal_email, char m_candidate_gender, float m_candidate_cgpa,
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
      this -> m_candidate_gender = candidate.m_candidate_gender;
      this -> m_candidate_cgpa = candidate.m_candidate_cgpa;
      this -> m_candidate_branch = candidate.m_candidate_branch;
      this -> m_candidate_placed_status = candidate.m_candidate_placed_status;
      this -> m_candidate_resume_link = candidate.m_candidate_resume_link;
    }
};