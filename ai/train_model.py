
import pandas as pd
from sklearn.ensemble import RandomForestClassifier
import joblib

data = pd.read_csv("sample_dataset.csv")

X = data.drop("healthy", axis=1)
y = data["healthy"]

model = RandomForestClassifier(
    n_estimators=100,
    random_state=42
)

model.fit(X, y)

joblib.dump(model, "routing_model.pkl")

print("Model trained successfully.")
