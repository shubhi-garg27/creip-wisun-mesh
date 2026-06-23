#ifndef RF_METRICS_H
#define RF_METRICS_H

typedef struct
{
    int rssi;              // Received Signal Strength Indicator
    int snr;               // Signal-to-Noise Ratio

    float latency;         // ms

    float packet_loss;     // %

    float battery;         // %

    int congestion;        // %

} RFMetrics;

/*
 * Collect RF and network health metrics
 */
void collect_rf_metrics(RFMetrics *metrics);

/*
 * Calculate link quality score
 */
int calculate_link_health(RFMetrics *metrics);

#endif
