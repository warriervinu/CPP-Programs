//#include <iostream>
//using namespace std;
//
//class Button
//{
//public:
//	virtual void paint() = 0;
//};
//class WinButton :public Button
//{
//public:
//	void paint()
//	{
//		cout << "WinButton:Paint" << endl;
//	}
//};
//class MacButton :public Button
//{
//public:
//	void paint()
//	{
//		cout << "MacButton:Paint" << endl;
//	}
//};
//class ScrollBar
//{
//public:
//	virtual void paint() = 0;
//};
//class WinScrollBar :public ScrollBar
//{
//public:
//	void paint()
//	{
//		cout << "WinscrollBar:Paint" << endl;
//	}
//};
//class MacScrollBar :public ScrollBar
//{
//public:
//	void paint()
//	{
//		cout << "MacscrollBar:Paint" << endl;
//	}
//};
//class GUIFactory
//{
//public:
//	virtual Button* createButton() = 0;
//	virtual ScrollBar* createScrollBar() = 0;
//};
//class WinFactory :public GUIFactory
//{
//public:
//	Button* createButton()
//	{
//		return new WinButton;
//	}
//	ScrollBar* createScrollBar()
//	{
//		return new WinScrollBar;
//	}
//};
//class MacFactory :public GUIFactory
//{
//public:
//	Button* createButton()
//	{
//		return new MacButton;
//	}
//	ScrollBar* createScrollBar()
//	{
//		return new MacScrollBar;
//	}
//};
//int main()
//{
//	GUIFactory* gf;
//	Button* btn;
//	ScrollBar* sbar;
//	gf = new WinFactory();
//	btn = gf->createButton();
//	sbar = gf->createScrollBar();
//	btn->paint();
//	sbar->paint();
//	gf = new MacFactory();
//	btn = gf->createButton();
//	sbar = gf->createScrollBar();
//	btn->paint();
//	sbar->paint();
//	return 0;
//}