#include <iostream>
#include <string>
using namespace std;

int main() {
    string condition, installed, changed, exists;
    cout << "Starting General Diagnosis Program.\nRecording symptoms information - DONE." << endl;
    cout << "Rebooting server to see if condition still exists (yes/no): ";
    cin >> condition;
    cout << "is this a newly installed server?";
    cin >> installed;
    if (installed == "yes") 
    {
        cout << "Please reseat any components that may have come loose during shipping -DONE.\nRebooting the server - DONE." << endl;
    }
        cout << "Does the condition still exists:";
        cin >> exists;
        if (exists == "yes")
        {
            cout << "were options added or was the configuration changes recently?";
            cin >> changed;

        }
        else
        {
            cout << "record action taken \n end " << endl;
        }
        if (changed == "yes")
        {
            cout << "Isolate what has changed. Verify installation and restore to last known good state " << endl;
        }
        else
        {
            cout << "Check for service notification \n download the latest software and firmware from the HP website" << endl;
        }
        cout << "Does the condition still exists:";
        cin >> exists;
        if (exists == "yes")
        {
            cout << "isolate and minimize the memory configuration" << endl;
            cout << "Does the condition still exists:";
            cin >> exists;
            if (exists == "yes")
            {
                cout << "Break server down to minimal configuration" << endl;
                cout << "isolate and minimize the memory configuration" << endl;
                cout << "Does the condition still exists:";
                cin >> exists;
                if (exists == "yes")
                {
                    cout << "troubleshoot or replace the basic server spare parts" << endl;
                    cout << "Ensure the following information is available : \nsurvey configuration snapshots \n Os event log file \n full crash dump \n call HP server provider \n END" << endl;
                    cout << "Does the condition still exists:";
                    cin >> exists;
                    if (exists == "yes")
                    {
                        cout << "Ensure the following information is available : \nsurvey configuration snapshots \n Os event log file \n full crash dump \n call HP server provider \n END" << endl;
                    }
                    else {
                        cout << "Record symptoom and error information on a repair tag if sending back a failed part\n end" << endl;
                    }
                }
                else {
                    cout << "Add one part at a time to configuration to isolate faulty component" << endl;
                

                    cout << "Does the condition still exists:";
                    cin >> exists;
                    if (exists == "yes")
                    {
                        cout << "Ensure the following information is available : \nsurvey configuration snapshots \n Os event log file \n full crash dump \n call HP server provider \n END" << endl;
                        cout << "Does the condition still exists:";
                        cin >> exists;
                        if (exists == "yes")
                        {
                            cout << "Ensure the following information is available : \nsurvey configuration snapshots \n Os event log file \n full crash dump \n call HP server provider \n END" << endl;
                        }

                    }
                    else
                    {
                        cout << "record action taken \n end " << endl;
                    }
                }
            }
            else
            {
                cout << "record action taken \n end " << endl;
            }
        }
        else
        {
            cout << "record action taken \n end " << endl;
            
        }
        return 0;
    

    }


