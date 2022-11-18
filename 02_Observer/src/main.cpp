#include "weather_data.h"
#include "current_conditions_display.h"
#include "statistics_display.h"
#include "forecast_display.h"
#include "heat_index_display.h"

int main() {
    std::shared_ptr<WeatherData> weather_data {std::make_shared<WeatherData>()};
    std::shared_ptr<DisplayElement> current_display {std::make_shared<CurrentConditionsDisplay>(weather_data)};
    std::shared_ptr<DisplayElement> statistics_display {std::make_shared<StatisticsDisplay>(weather_data)};
    std::shared_ptr<DisplayElement> forecast_display {std::make_shared<ForecastDisplay>(weather_data)};
    std::shared_ptr<DisplayElement> heat_index_display {std::make_shared<HeatIndexDisplay>(weather_data)};

    weather_data->set_measurements(80, 64, 30.4f);
    weather_data->set_measurements(82, 70, 29.2f);
    weather_data->set_measurements(78, 90, 29.2f);
}