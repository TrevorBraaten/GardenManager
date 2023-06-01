#include "Plant.h"


Plant::Plant(const std::string& name, PlantType type, i32 watering_interval, i32 sunlight_needed, float soil_moisture, float pH)
    : m_name(name), m_type(type), m_watering_interval(watering_interval), m_sunlight_needed(sunlight_needed), m_soil_moisture(soil_moisture), m_pH(pH)
{
    // Generate a unique id for the plant (you can implement your own logic)
    static i32 previous_id = 0;
    m_id = ++previous_id;
}
