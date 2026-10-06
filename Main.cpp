#include <memory>
#include "GameManager.h"
#include "StartUpState.h"

int main()
{
	GameManager manager(std::make_unique<StartUpState>());

	while (1)
	{
		manager.Update(0.0f);
	}

	return 0;
}