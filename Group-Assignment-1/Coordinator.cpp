#include <iostream>
#include <string>
#include <vector>
#include "CommonHeader.h"

using namespace std;

class Coordinator {

  public:

    // Data Needed to Register A Coordinator (Private) - This data should not need to be changed after object creation.

    int m_coordinator_id;
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
      this -> m_coordinator_companies_name = m_coordinator_companies_name;
      this -> m_coordinator_companies_candidate_total_needed = m_coordinator_companies_candidate_total_needed;
      this -> m_coordinator_companies_candidate_total_fulfilled = m_coordinator_companies_candidate_total_fulfilled;
      this -> m_coordinator_companies_candidate_graduation_year = m_coordinator_companies_candidate_graduation_year;
      this -> m_coordinator_companies_candidate_branch = m_coordinator_companies_candidate_branch;
      this -> m_coordinator_companies_candidate_grade_standard_10 = m_coordinator_companies_candidate_grade_standard_10;
      this -> m_coordinator_companies_candidate_grade_standard_12 = m_coordinator_companies_candidate_grade_standard_12;
      this -> m_coordinator_companies_candidate_degree = m_coordinator_companies_candidate_degree;

    }

    //
    
}