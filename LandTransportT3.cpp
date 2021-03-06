#include "LandTransportT3.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// LandTransport Default+Overloaded Constructor
LandTransport::LandTransport(int aWeight, int aCapacity, int aSpeed, const string& aTransportationMode, const string& aVehicleType) : mTransportationMode(aTransportationMode), mVehicleType(aVehicleType), Transport(aWeight, aCapacity, aSpeed) {
	this->SetLandTransport(aTransportationMode, aVehicleType);
}
// end LandTransport constructor 

//============================= ACESS      ===================================

// function that sets Weight
void LandTransport::SetWeight(int aWeight) {
	Transport::SetWeight(aWeight);
}
// end function SetWeight

// function that sets Capacity
void LandTransport::SetCapacity(int aCapacity) {
	Transport::SetCapacity(aCapacity);
}
// end function SetCapacity

// function that sets Speed
void LandTransport::SetSpeed(int aSpeed) {
	Transport::SetSpeed(aSpeed);
}
// end function SetSpeed

// function that sets Transport
void LandTransport::SetTransport(int aWeight, int aCapacity, int aSpeed) {
	Transport::SetTransport(aWeight, aCapacity, aSpeed);
}
// end function SetTransport

// Overloaded function that sets Transport
void LandTransport::SetTransport(const Transport& aTransport) {
	Transport::SetTransport(aTransport);
}
// end function SetTransport

// function that sets mode of Transportation
void LandTransport::SetTransportationMode(const string& aTransportationMode) {
	this->mTransportationMode = aTransportationMode;
}
// end function SetTransportationMode

// function that sets type of Vehicle
void LandTransport::SetVehicleType(const string& aVehicleType) {
	this->mVehicleType = aVehicleType;
}
// end function SetVehicleType

// function that sets LandTransport
void LandTransport::SetLandTransport(int aWeight, int aCapacity, int aSpeed, const string& aTransportationMode, const string& aVehicleType) {
	this->SetWeight(aWeight);
	this->SetCapacity(aCapacity);
	this->SetSpeed(aSpeed);
	this->SetTransportationMode(aTransportationMode);
	this->SetVehicleType(aVehicleType);
}
// end function SetLandTransport

// Overloaded function that sets LandTransport
void LandTransport::SetLandTransport(const string& aTransportationMode, const string& aVehicleType) {
	this->SetTransportationMode(aTransportationMode);
	this->SetVehicleType(aVehicleType);
}
// end function SetLandTransport

// Overloaded function that sets LandTransport
void LandTransport::SetLandTransport(const LandTransport& aLandTransport) {
	this->SetLandTransport(aLandTransport.GetWeight(), aLandTransport.GetCapacity(), aLandTransport.GetSpeed(), aLandTransport.GetTransportationMode(), aLandTransport.GetVehicleType());
}
// end function SetLandTransport

// function that gets Weight
int LandTransport::GetWeight() const {
	return Transport::GetWeight();
}
// end function GetWeight

// function that gets Capacity
int LandTransport::GetCapacity() const {
	return Transport::GetCapacity();
}
// end function GetCapacity

// function that gets Speed
int LandTransport::GetSpeed() const {
	return Transport::GetSpeed();
}
// end function GetSpeed

// function that gets the Transport
const Transport& LandTransport::GetTransport()const {
	return Transport::GetTransport();
}
// end function GetTransport

// function that gets mode of Transportation
const string& LandTransport::GetTransportationMode() const {
	return this->mTransportationMode;
}
// end function GetTransportationMode

// function that gets type of Vehicle
const string& LandTransport::GetVehicleType() const {
	return this->mVehicleType;
}
// end function GetVehicleType

// function that gets the AirTransport
const LandTransport& LandTransport::GetLandTransport()const {
	return *this;
}
// end function GetLandTransport