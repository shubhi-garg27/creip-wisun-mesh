import joblib
import pandas as pd

model = joblib.load("routing_model.pkl")

sample = pd.DataFrame([{
    "rssi": -78,
    "snr": 17,
    "latency": 40,
    "packet_loss": 8,
    "battery": 82,
    "congestion": 20
}])

prediction = model.predict(sample)

if prediction[0] == 1:
    print("Healthy Route")
else:
    print("Route Degradation Predicted")
