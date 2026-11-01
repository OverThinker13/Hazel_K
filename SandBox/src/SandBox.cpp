#include <Hazel_K.h>

class SandBox : public Hazel_K::Application
{
	public:
		SandBox()
		{
		}
		~SandBox()
		{
		}

};

Hazel_K::Application* Hazel_K:: CreateApplication()
{
	return new SandBox();
}