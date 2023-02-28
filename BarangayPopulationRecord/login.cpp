#include "login.h"

using namespace BarangayPopulationRecord;

[STAThreadAttribute]

int main() {

	Application::Run(gcnew login());

	return 0;
}