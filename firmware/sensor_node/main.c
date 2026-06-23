#include "rf_metrics.h"
#include "telemetry.h"

int main(void)
{
    RFMetrics metrics;

    while(1)
    {
        collect_rf_metrics(&metrics);

        send_metrics(&metrics);

        sleep(5);
    }

    return 0;
}
