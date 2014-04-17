#include "stdafx.h"
#include "LSlider.h"

void LSlider::wrapForLua (lua_State *L)
{
	using namespace luabind;

	module(L)
    [
		class_<Slider, bases<Component> >("Slider")
			.def("setSliderStyle", &Slider::setSliderStyle)
			.def("getSliderStyle", &Slider::getSliderStyle)
			.def("setRotaryParameters", &Slider::setRotaryParameters)
			.def("setMouseDragSensitivity", &Slider::setMouseDragSensitivity)
			.def("getMouseDragSensitivity", &Slider::getMouseDragSensitivity)
			.def("setVelocityBasedMode", &Slider::setVelocityBasedMode)
			.def("getVelocityBasedMode", &Slider::getVelocityBasedMode)
			.def("setVelocityModeParameters", &Slider::setVelocityModeParameters)
			.def("getVelocitySensitivity", &Slider::getVelocitySensitivity)
			.def("getVelocityThreshold", &Slider::getVelocityThreshold)
			.def("getVelocityOffset", &Slider::getVelocityOffset)
			.def("getVelocityModeIsSwappable", &Slider::getVelocityModeIsSwappable)
			.def("setSkewFactor", &Slider::setSkewFactor)
			.def("setSkewFactorFromMidPoint", &Slider::setSkewFactorFromMidPoint)
			.def("getSkewFactor", &Slider::getSkewFactor)
			.def("setIncDecButtonsMode", &Slider::setIncDecButtonsMode)
			.def("setTextBoxStyle", &Slider::setTextBoxStyle)
			.def("getTextBoxPosition", &Slider::getTextBoxPosition)
			.def("getTextBoxWidth", &Slider::getTextBoxWidth)
			.def("getTextBoxHeight", &Slider::getTextBoxHeight)
			.def("setTextBoxIsEditable", &Slider::setTextBoxIsEditable)
			.def("isTextBoxEditable", &Slider::isTextBoxEditable)
			.def("showTextBox", &Slider::showTextBox)
			.def("hideTextBox", &Slider::hideTextBox)
			.def("setValue", (void (Slider::*)(double,NotificationType))&Slider::setValue)
			.def("getValue", &Slider::getValue)
			.def("getValueObject", &Slider::getValueObject)
			.def("setRange", &Slider::setRange)
			.def("getMaximum", &Slider::getMaximum)
			.def("getMinimum", &Slider::getMinimum)
			.def("getInterval", &Slider::getInterval)
			.def("getMinValue", &Slider::getMinValue)
			.def("getMinValueObject", &Slider::getMinValueObject)
			.def("setMinValue", (void (Slider::*)(double,NotificationType,bool))&Slider::setMinValue)
			.def("getMaxValue", &Slider::getMaxValue)
			.def("getMaxValueObject", &Slider::getMaxValueObject)
			.def("setMaxValue", (void (Slider::*)(double,NotificationType,bool))&Slider::setMaxValue)
			.def("setMinAndMaxValues", (void (Slider::*)(double,double,NotificationType))&Slider::setMinAndMaxValues)
			.def("addListener", &Slider::addListener)
			.def("removeListener", &Slider::removeListener)
			.def("setDoubleClickReturnValue", &Slider::setDoubleClickReturnValue)
			.def("getDoubleClickReturnValue", &Slider::getDoubleClickReturnValue)
			.def("setChangeNotificationOnlyOnRelease", &Slider::setChangeNotificationOnlyOnRelease)
			.def("setSliderSnapsToMousePosition", &Slider::setSliderSnapsToMousePosition)
			.def("getSliderSnapsToMousePosition", &Slider::getSliderSnapsToMousePosition)
			.def("setPopupDisplayEnabled", &Slider::setPopupDisplayEnabled)
			.def("getCurrentPopupDisplay", &Slider::getCurrentPopupDisplay)
			.def("setPopupMenuEnabled", &Slider::setPopupMenuEnabled)
			.def("setScrollWheelEnabled", &Slider::setScrollWheelEnabled)
			.def("getThumbBeingDragged", &Slider::getThumbBeingDragged)
			.def("startedDragging", &Slider::startedDragging)
			.def("stoppedDragging", &Slider::stoppedDragging)
			.def("valueChanged", &Slider::valueChanged)
			.def("getValueFromText", &Slider::getValueFromText)
			.def("getTextFromValue", &Slider::getTextFromValue)
			.def("setTextValueSuffix", &Slider::setTextValueSuffix)
			.def("getTextValueSuffix", &Slider::getTextValueSuffix)
			.def("proportionOfLengthToValue", &Slider::proportionOfLengthToValue)
			.def("valueToProportionOfLength", &Slider::valueToProportionOfLength)
			.def("getPositionOfValue", &Slider::getPositionOfValue)
			.def("updateText", &Slider::updateText)
			.def("isHorizontal", &Slider::isHorizontal)
			.def("isVertical", &Slider::isVertical)
	];
}
