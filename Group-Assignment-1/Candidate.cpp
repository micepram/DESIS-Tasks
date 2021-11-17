#include <iostream>
#include <string>

using namespace std;

class Candidate {

  protected:

    // Data Needed to Register A Candidate (Protected) - This data should not need to be changed after object creation.

    int m_candidate_id;                       // College ID - Unique
    string m_candidate_name;                  // Candidate Name
    string m_candidate_college_email;
    char m_candidate_gender;
    string m_candidate_branch;

  public:

    // Data Needed to Register A Candidate (Public) - This data can be updated after object creation.

    string m_candidate_personal_email;
    float m_candidate_cgpa;
    float m_candidate_min_ctc_preference;

    // Data that can be Modified with Time

    bool m_candidate_placed_status;
    string m_candidate_resume_link;

    // Parameterised Default Constructor

    Candidate(int m_candidate_id, string m_candidate_name, string m_candidate_college_email, 
              string m_candidate_personal_email, char m_candidate_gender, float m_candidate_cgpa,
              string m_candidate_branch) {
      this -> m_candidate_id = m_candidate_id;
      this -> m_candidate_name = m_candidate_name;
      this -> m_candidate_college_email = m_candidate_college_email;
      this -> m_candidate_personal_email = m_candidate_personal_email;
      this -> m_candidate_personal_gender = m_candidate_personal_gender;
      this -> m_candidate_personal_cgpa = m_candidate_personal_cgpa;
      this -> m_candidate_personal_branch = m_candidate_personal_branch;
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