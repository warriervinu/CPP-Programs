//#include <iostream>
//using namespace std;
//
//
//class Observer {
//
//public:
//
//	/**
//	 * Update the state of this observer
//	 * @param temp new temperaure
//	 * @param humidity new humidity
//	 * @param pressure new pressure
//	 */
//	virtual void update(float temp, float humidity, float pressure) = 0;
//
//};
//class Subject {
//public:
//
//	/**
//	 * Register an observer
//	 * @param observer the observer object to be registered
//	 */
//	virtual void registerObserver(Observer *observer) = 0;
//
//	/**
//	 * Unregister an observer
//	 * @param observer the observer object to be unregistered
//	 */
//	virtual void removeObserver(Observer *observer) = 0;
//
//	/**
//	 * Notify all the registered observers when a change happens
//	 */
//	virtual void notifyObservers() = 0;
//
//};