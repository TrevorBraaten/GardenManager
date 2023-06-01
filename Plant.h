#include "GlobalFunctions.h"
#include <iostream>
#include <string>



enum class PlantType
{
    NA = 0,
    Flower = 1,
    Fruit = 2,
    Vegetable = 3,
    Herb = 4,
    Tree = 5,
};

class Plant
{
    std::string m_name;
    i32 m_id;
    PlantType m_type;
    i32 m_watering_interval;
    i32 m_sunlight_needed;
    float m_soil_moisture;
    float m_pH;
    public:
    Plant(const std::string& name, PlantType type, i32 watering_interval, i32 sunlight_needed, float soil_moisture, float pH);
    const std::string& GetName() const;
    i32 GetID() const;
    PlantType m_type;
    i32 GetWateringInterval() const;
    i32 GetSunlightNeeded() const;
    float GetSoilMoisture() const;
    float GetPH() const;
};

