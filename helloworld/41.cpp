#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <fstream>

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

    void saveToFile(const std::string& filename) {
        std::ofstream file(filename);
        if (file.is_open()) {
            for (const auto& [student, scores] : quizzes) {
                file << "Quiz," << student;
                for (int score : scores)
                    file << "," << score;
                file << "\n";
            }
            for (const auto& [student, scores] : assignments) {
                file << "Assignment," << student;
                for (int score : scores)
                    file << "," << score;
                file << "\n";
            }
            file.close();
        }
    }

    void loadFromFile(const std::string& filename) {
        std::ifstream file(filename);
        if (file.is_open()) {
            std::string line;
            while (std::getline(file, line)) {
                std::stringstream ss(line);
                std::string type, studentName;
                std::getline(ss, type, ',');
                std::getline(ss, studentName, ',');
                std::vector<int> scores;
                std::string score;
                while (std::getline(ss, score, ',')) {
                    scores.push_back(std::stoi(score));
                }
                if (type == "Quiz") {
                    quizzes[studentName] = scores;
                } else if (type == "Assignment") {
                    assignments[studentName] = scores;
                }
            }
            file.close();
        }
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

    void saveToFile(const std::string& filename) {
        std::ofstream file(filename);
        if (file.is_open()) {
            for (const auto& [student, records] : attendance) {
                file << student;
                for (bool present : records)
                    file << "," << (present ? "1" : "0");
                file << "\n";
            }
            file.close();
        }
    }

    void loadFromFile(const std::string& filename) {
        std::ifstream file(filename);
        if (file.is_open()) {
            std::string line;
            while (std::getline(file, line)) {
                std::stringstream ss(line);
                std::string studentName;
                std::getline(ss, studentName, ',');
                std::vector<bool> records;
                std::string record;
                while (std::getline(ss, record, ',')) {
                    records.push_back(record == "1");
                }
                attendance[studentName] = records;
            }
            file.close();
        }
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

    void saveToFile(const std::string& filename) {
        std::ofstream file(filename);
        if (file.is_open()) {
            for (const auto& meeting : meetings)
                file << meeting.first << "," << meeting.second << "\n";
            file.close();
        }
    }

    void loadFromFile(const std::string& filename) {
        std::ifstream file(filename);
        if (file.is_open()) {
            std::string line;
            while (std::getline(file, line)) {
                std::stringstream ss(line);
                std::string type, date;
                std::getline(ss, type, ',');
                std::getline(ss, date, ',');
                meetings.push_back({type, date});
            }
            file.close();
        }
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

    void saveToFile(const std::string& filename) {
        std::ofstream file(filename);
        if (file.is_open()) {
            for (const auto& teacher : teachers)
                file << teacher << "\n";
            file.close();
        }
    }

    void loadFromFile(const std::string& filename) {
        std::ifstream file(filename);
        if (file.is_open()) {
            std::string teacherName;
            while (std::getline(file, teacherName)) {
                teachers.push_back(teacherName);
            }
            file.close();
        }
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

    // Save data to files
    performanceTracker.saveToFile("performance.txt");
    attendanceTracker.saveToFile("attendance.txt");
    meetingScheduler.saveToFile("meetings.txt");
    teacherManager.saveToFile("teachers.txt");

    // Clear data to test loading
    PerformanceTracker loadedPerformanceTracker;
    AttendanceTracker loadedAttendanceTracker;
    MeetingScheduler loadedMeetingScheduler;
    TeacherManager loadedTeacherManager;

    loadedPerformanceTracker.loadFromFile("performance.txt");
    loadedAttendanceTracker.loadFromFile("attendance.txt");
    loadedMeetingScheduler.loadFromFile("meetings.txt");
    loadedTeacherManager.loadFromFile("teachers.txt");

    // Display loaded data
    std::cout << "\n--- Loaded Student Performance ---\n";
    loadedPerformanceTracker.displayPerformance("Alice");

    std::cout << "\n--- Loaded Attendance ---\n";
    loadedAttendanceTracker.displayAttendance("Alice");

    std::cout << "\n--- Loaded Meetings ---\n";
    loadedMeetingScheduler.displayMeetings();

    std::cout << "\n--- Loaded Teachers ---\n";
    loadedTeacherManager.displayTeachers();

    return 0;
}