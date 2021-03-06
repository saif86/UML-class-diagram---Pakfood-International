#include "AirTransportT3.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// AirTransport Default+Overloaded Constructor
AirTransport::AirTransport(int aWeight, int aCapacity, int aSpeed, const string& aAircraftType, const string& aAircraftName) : mAircraftType(aAircraftType), mAircraftName(aAircraftName), Transport(aWeight, aCapacity, aSpeed) {
	this->SetAirTransport(aAircraftType, aAircraftName);
}
// end AirTransport constructor 

//============================= ACESS      ===================================

// function that sets Weight
void AirTransport::SetWeight(int aWeight) {
	Transport::SetWeight(aWeight);
}
// end function SetWeight

// function that sets Capacity
void AirTransport::SetCapacity(int aCapacity) {
	Transport::SetCapacity(aCapacity);
}
// end function SetCapacity

// function that sets Speed
void AirTransport::SetSpeed(int aSpeed) {
	Transport::SetSpeed(aSpeed);
}
// end function SetSpeed

// function that sets Transport
void AirTransport::SetTransport(int aWeight, int aCapacity, int aSpeed) {
	Transport::SetTransport(aWeight, aCapacity, aSpeed);
}
// end function SetTransport

// Overloaded function that sets Transport
void AirTransport::SetTransport(const Transport& aTransport) {
	Transport::SetTransport(aTransport);
}
// end function SetTransport

// function that sets type of Aircraft
void AirTransport::SetAircraftType(const string& aAircraftType) {
	this->mAircraftType = aAircraftType;
}
// end function SetAircraftType

// function that sets name of Aircraft
void AirTransport::SetAircraftName(const string& aAircraftName) {
	this->mAircraftName = aAircraftName;
}
// end function SetAircraftName

// function that sets AirTransport
void AirTransport::SetAirTransport(int aWeight, int aCapacity, int aSpeed, const string& aAircraftType, const string& aAircraftName) {
	this->SetWeight(aWeight);
	this->SetCapacity(aCapacity);
	this->SetSpeed(aSpeed);
	this->SetAircraftType(aAircraftType);
	this->SetAircraftName(aAircraftName);
}
// end function SetAirTransport

// Overloaded function that sets AirTransport
void AirTransport::SetAirTransport(const string& aAircraftType, const string& aAircraftName) {
	this->SetAircraftType(aAircraftType);
	this->SetAircraftName(aAircraftName);
}
// end function SetAirTransport

// Overloaded function that sets AirTransport
void AirTransport::SetAirTransport(const AirTransport& aAirTransport) {
	this->SetAirTransport(aAirTransport.GetWeight(), aAirTransport.GetCapacity(), aAirTransport.GetSpeed(), aAirTransport.GetAircraftType(), aAirTransport.GetAircraftName());
}
// end function SetAirTransport

// function that gets Weight
int AirTransport::GetWeight() const {
	return Transport::GetWeight();
}
// end function GetWeight

// function that gets Capacity
int AirTransport::GetCapacity() const {
	return Transport::GetCapacity();
}
// end function GetCapacity

// function that gets Speed
int AirTransport::GetSpeed() const {
	return Transport::GetSpeed();
}
// end function GetSpeed

// function that gets the Transport
const Transport& AirTransport::GetTransport()const {
	return Transport::GetTransport();
}
// end function GetTransport

// function that gets type of Aircraft
const string& AirTransport::GetAircraftType() const {
	return this->mAircraftType;
}
// end function GetAircraftType

// function that gets name of Aircraft
const string& AirTransport::GetAircraftName() const {
	return this->mAircraftName;
}
// end function GetAircraftType

// function that gets the AirTransport
const AirTransport& AirTransport::GetAirTransport()const {
	return *this;
}
// end function GetAirTransport