#include <iostream>
#include <unistd.h>

using namespace std;

int main(){
	pid_t pid = fork();

	if (pid < 0)
		cerr << "fork() error";
	else if (pid  == 0)
	{
		cout << "Process " << getpid() << " is zombie!" << endl;
		exit(0);
	}
	else 
	{
		sleep(1);
		cout << "For exit press Return" << endl;
		cin.get();
	}

	return 0;
}
