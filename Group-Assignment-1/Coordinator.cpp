#include <iostream>
#include <string>
#include <vector>
#include "CommonHeader.h"

using namespace std;

class Coordinator {

  private:

    // Data Needed to Register A Coordinator (Private) - This data should not need to be changed after object creation.

    int m_coordinator_id;
    vector<string> m_coordinator_assigned_companies_name;
    vector<int> m_coordinator_assigned_companies_candidate_total_needed;
    vector<int> m_coordinator_assigned_companies_candidate_total_fulfilled;
    vector<vector<int>> m_coordinator_assigned_companies_candidate_graduation_year;
    vector<vector<string>> m_coordinator_assigned_companies_candidate_branch;
    vector<float> m_coordinator_assigned_companies_candidate_grade_standard_10;
    vector<float> m_coordinator_assigned_companies_candidate_grade_standard_12;
    vector<vector<string>> m_coordinator_assigned_companies_candidate_degree;

}