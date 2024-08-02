#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <curl/curl.h>
#include <Requests.h>
#include <grpc/grpc.h>
#include <Config.h>
#include <unordered_map>
#include <windows.h>  // For GetAsyncKeyState and Sleep
#include <csignal>    // For signal handling

using namespace std;

// create a map that maps command to their string, for example: SAY = "say;"
enum Commands {
	SAY,
	JOIN
};
unordered_map<string, int> commands = {
	{"say;", SAY},
	{"JOIN", JOIN}
};

volatile bool stopFlag = false;

// Signal handler function for console control events
BOOL WINAPI consoleHandler(DWORD signal) {
	if (signal == CTRL_C_EVENT) {
		cout << "CTRL+C received. Exiting..." << endl;
		stopFlag = true;
		return TRUE;
	}
	return FALSE;
}

int main()
{
    try {
        // Load the configuration from the file
        Config cfg = get_config();
        // Set up the console control handler
        SetConsoleCtrlHandler(consoleHandler, TRUE);

        // Open the file for the first time to get its initial end position
        FILE* file = fopen(cfg.games_mp, "r");
        if (file == NULL) {
            throw runtime_error("Error opening file");
        }

        // Move to the end of the file to start watching from there
        fseek(file, 0, SEEK_END);
        long lastPosition = ftell(file);

        while (!stopFlag) {
            // Check for the specific key press for additional functionality if needed
            if (GetAsyncKeyState(VK_CONTROL) & 0x8000 && GetAsyncKeyState(0x43) & 0x8000) {
                cout << "Exiting due to key press..." << endl;
                break;
            }

            // Reopen the file in read mode to keep tracking the file position
            freopen(cfg.games_mp, "r", file);
            fseek(file, lastPosition, SEEK_SET);

            char buffer[1024];
            bool newData = false; // Flag to detect new data

            while (fgets(buffer, sizeof(buffer), file) != nullptr) {
                size_t len = strlen(buffer);
                newData = true;

                char* line = buffer;
                char* token = strtok(line, " ");
                char* command = strtok(NULL, "\n");

                cout << "Time: " << time << " Command: " << command << endl;
            }

            if (newData) {
                // Update the last position to the current end of the file
                fseek(file, 0, SEEK_END);
                lastPosition = ftell(file);
            }

            fclose(file);
            // Reopen file for the next iteration
            file = fopen(cfg.games_mp, "r");
            if (file == NULL) {
                throw runtime_error("Error reopening file");
            }

            // Wait for 0.5 seconds
            Sleep(500);
        }

        fclose(file);
        cout << "Program terminated." << endl;
    }
    catch (const exception& e) {
        cerr << "Exception: " << e.what() << endl;
        return 1;
    }


    return 0;
}
