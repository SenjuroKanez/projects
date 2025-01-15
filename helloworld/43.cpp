#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
class Student {
public:
    string id;
    string name;
    vector<int> quizScores;
    vector<int> assignmentScores;
    vector<string> extracurricularActivities;
    unordered_map<string, bool> attendance; // date -> present/absent
};

class Faculty {
public:
    string id;
    string name;
    vector<string> scheduledMeetings;
    vector<string> leaveRequests;
};

class Enrollment {
public:
    string studentId;
    vector<std::string> documents;
    double feesPaid;
    bool isEligible;
};