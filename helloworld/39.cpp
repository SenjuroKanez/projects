#include <iostream>
#include <string>
#include <vector>
#include <map>

// Classes for different modules

// Class for tracking quizzes and assignments
class PerformanceTracker {
public:
    void addQuizScore(const std::string& studentName, int score) {
        quizzes[studentName].push_back(score);
    }

    void addAssignmentScore(const std::string& studentName, int score) {
        assignments[studentName].push_back(score);
    }

    void displayPerformance(const std::string& studentName) {
        std::cout << "Performance for " << studentName << ":\n";

        std::cout << "Quizzes: ";
        for (int score : quizzes[studentName])
            std::cout << score << " ";

        std::cout << "\nAssignments: ";
        for (int score : assignments[studentName])
            std::cout << score << " ";

        std::cout << "\n";
    }

private:
    std::map<std::string, std::vector<int>> quizzes;
    std::map<std::string, std::vector<int>> assignments;
};

// Class for attendance tracking
class AttendanceTracker {
public:
    void markAttendance(const std::string& studentName, bool present) {
        attendance[studentName].push_back(present);
    }

    void displayAttendance(const std::string& studentName) {
        std::cout << "Attendance for " << studentName << ":\n";
        for (bool present : attendance[studentName])
            std::cout << (present ? "Present" : "Absent") << " ";

        std::cout << "\n";
    }

private:
    std::map<std::string, std::vector<bool>> attendance;
};

// Class for managing meetings
class MeetingScheduler {
public:
    void scheduleMeeting(const std::string& meetingType, const std::string& date) {
        meetings.push_back({meetingType, date});
    }

    void displayMeetings() {
        std::cout << "Scheduled Meetings:\n";
        for (const auto& meeting : meetings)
            std::cout << meeting.first << " on " << meeting.second << "\n";
    }

private:
    std::vector<std::pair<std::string, std::string>> meetings;
};

// Class for teacher management
class TeacherManager {
public:
    void addTeacher(const std::string& teacherName) {
        teachers.push_back(teacherName);
    }

    void displayTeachers() {
        std::cout << "Teachers:\n";
        for (const auto& teacher : teachers)
            std::cout << teacher << "\n";
    }

private:
    std::vector<std::string> teachers;
};

// Main Program
int main() {
    PerformanceTracker performanceTracker;
    AttendanceTracker attendanceTracker;
    MeetingScheduler meetingScheduler;
    TeacherManager teacherManager;

    // Adding data for testing
    performanceTracker.addQuizScore("Alice", 85);
    performanceTracker.addQuizScore("Alice", 90);
    performanceTracker.addAssignmentScore("Alice", 88);

    attendanceTracker.markAttendance("Alice", true);
    attendanceTracker.markAttendance("Alice", false);

    meetingScheduler.scheduleMeeting("Faculty Meeting", "2024-01-15");
    meetingScheduler.scheduleMeeting("Student Meeting", "2024-01-20");

    teacherManager.addTeacher("Mr. Smith");
    teacherManager.addTeacher("Ms. Johnson");

    // Displaying data
    std::cout << "\n--- Student Performance ---\n";
    performanceTracker.displayPerformance("Alice");

    std::cout << "\n--- Attendance ---\n";
    attendanceTracker.displayAttendance("Alice");

    std::cout << "\n--- Meetings ---\n";
    meetingScheduler.displayMeetings();

    std::cout << "\n--- Teachers ---\n";
    teacherManager.displayTeachers();

    return 0;
}
