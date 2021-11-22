#include <iostream>
#include <string>
#include <vector>
#include "CommonHeader.h"

using namespace std;

class Coordinator : public Candidate {

  public:

    // Data Needed to Register A Coordinator (Public) - This data should not need to be changed after object creation.

    int m_coordinator_id;
    vector<int> m_coordinator_companies_id;
    vector<string> m_coordinator_companies_name;
    vector<int> m_coordinator_companies_candidate_total_needed;
    vector<int> m_coordinator_companies_candidate_total_fulfilled;
    vector<vector<int>> m_coordinator_companies_candidate_graduation_year;
    vector<vector<string>> m_coordinator_companies_candidate_branch;
    vector<float> m_coordinator_companies_candidate_grade_standard_10;
    vector<float> m_coordinator_companies_candidate_grade_standard_12;
    vector<vector<string>> m_coordinator_companies_candidate_degree;

    // Initial Constructor

    Coordinator(int m_coordinator_id) {

      this -> m_coordinator_id = m_coordinator_id;

    }

    // Copy Constructor

    Coordinator(const Coordinator &coordinator) {

      this -> m_coordinator_id = m_coordinator_id;
      this -> m_coordinator_companies_id = m_coordinator_companies_id;
      this -> m_coordinator_companies_name = m_coordinator_companies_name;
      this -> m_coordinator_companies_candidate_total_needed = m_coordinator_companies_candidate_total_needed;
      this -> m_coordinator_companies_candidate_total_fulfilled = m_coordinator_companies_candidate_total_fulfilled;
      this -> m_coordinator_companies_candidate_graduation_year = m_coordinator_companies_candidate_graduation_year;
      this -> m_coordinator_companies_candidate_branch = m_coordinator_companies_candidate_branch;
      this -> m_coordinator_companies_candidate_grade_standard_10 = m_coordinator_companies_candidate_grade_standard_10;
      this -> m_coordinator_companies_candidate_grade_standard_12 = m_coordinator_companies_candidate_grade_standard_12;
      this -> m_coordinator_companies_candidate_degree = m_coordinator_companies_candidate_degree;

    }

    // Functions / Behaviours

    void addCompany(int m_coordinator_companies_id,
                    string m_coordinator_companies_name, 
                    int m_coordinator_companies_candidate_total_needed,
                    int m_coordinator_companies_candidate_total_fulfilled,
                    vector<int> m_coordinator_companies_candidate_graduation_year,
                    vector<string> m_coordinator_companies_candidate_branch,
                    float m_coordinator_companies_candidate_grade_standard_10,
                    float m_coordinator_companies_candidate_grade_standard_12,
                    vector<string> m_coordinator_companies_candidate_degree) {
      
      this -> m_coordinator_companies_id.push_back(m_coordinator_companies_id);
      this -> m_coordinator_companies_name.push_back(m_coordinator_companies_name);
      this -> m_coordinator_companies_candidate_total_needed.push_back(m_coordinator_companies_candidate_total_needed);
      this -> m_coordinator_companies_candidate_total_fulfilled.push_back(m_coordinator_companies_candidate_total_fulfilled);
      this -> m_coordinator_companies_candidate_graduation_year.push_back(m_coordinator_companies_candidate_graduation_year);
      this -> m_coordinator_companies_candidate_grade_standard_10.push_back(m_coordinator_companies_candidate_grade_standard_10);
      this -> m_coordinator_companies_candidate_grade_standard_12.push_back(m_coordinator_companies_candidate_grade_standard_12);
      this -> m_coordinator_companies_candidate_degree.push_back(m_coordinator_companies_candidate_degree);

    }

    void setCandidatePlaced(vector<Candidate> candidate_list, int candidate_id, float candidate_ctc) {
      
      candidate_list[candidate_id].setPlacedCompany(this -> m_coordinator_companies_name);
      candidate_list[candidate_id].setPlacedCTC(candidate_ctc);
      candidate_list[candidate_id].setPlacedStatus(true);

    }

    vector<int> getEligibleCandidates(vector<Candidate> candidate_list, vector<int> candidate_graduation_year, 
                                      vector<string> canidate_branch, float candidate_grade_standard_10, 
                                      float candidate_grade_standard_12, vector<string> candidate_degree) {
      
      vector<Candidate> eligible_candidate_list;
      for(Candidate c : candidate_list) {
        bool check = true;
        for(auto & cgy : candidate_graduation_year)
          if(cgy == c.getGraduationYear())
            check = false;
        for(auto & cb : canidate_branch)
          if(cb == c.getBranch())
            check = false;
        for(auto & cd : candidate_degree)
          if(cd == c.getDegree())
            check = false;
        if(candidate_grade_standard_10 < c.getGradeStandard10())
          check = false;
        if(candidate_grade_standard_12 < c.getGradeStandard12())
          check = false;
        if(check == true)
          eligible_candidate_list.push_back(c);
      }

    }

    void setCandidateBlacklisted(vector<Candidate> candidate_list, int candidate_id) {

      candidate_list[candidate_id].setPlacedCompany("Blacklisted.");
      candidate_list[candidate_id].setPlacedCTC(-1.0);
      candidate_list[candidate_id].setPlacedStatus(true);

    }

};