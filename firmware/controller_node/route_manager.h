#ifndef ROUTE_MANAGER_H
#define ROUTE_MANAGER_H

int calculate_link_score(
    int rssi,
    int snr,
    float packet_loss,
    float latency,
    float battery);

#endif
