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

// 这个函数的作用是创建客户端应用程序的实例，告诉引擎"这个 exe 的应用类是什么，客户端应用程序必须实现这个函数，
Hazel_K::Application* Hazel_K:: CreateApplication()
{
	return new SandBox();
}