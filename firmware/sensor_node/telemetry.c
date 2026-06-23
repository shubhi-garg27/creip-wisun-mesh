#include <stdio.h>
#include "telemetry.h"

void send_metrics(RFMetrics *metrics)
{
    printf(
        "RSSI=%d SNR=%d LAT=%.2f LOSS=%.2f BAT=%.2f CONG=%d\n",
        metrics->rssi,
        metrics->snr,
        metrics->latency,
        metrics->packet_loss,
        metrics->battery,
        metrics->congestion
    );
}
