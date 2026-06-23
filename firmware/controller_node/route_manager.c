#include "route_manager.h"

int calculate_link_score(
    int rssi,
    int snr,
    float packet_loss,
    float latency,
    float battery)
{
    int score = 100;

    if(rssi < -80)
        score -= 25;

    if(packet_loss > 10)
        score -= 30;

    if(latency > 50)
        score -= 20;

    if(battery < 20)
        score -= 15;

    return score;
}
