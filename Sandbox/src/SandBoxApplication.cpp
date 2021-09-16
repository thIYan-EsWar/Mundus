#include "Mundus.h"

class SandBox : public Mundus::Application {
	
public:
	SandBox() {

	}

	~SandBox() {

	}
};

Mundus::Application* Mundus::CreateApplication() {
	return new SandBox();
}