from flask import Flask, render_template
import random

app = Flask(__name__)

@app.route("/")
def dashboard():

    data = {
        "rssi": random.randint(-90, -60),
        "latency": random.randint(10, 100),
        "packet_loss": random.randint(0, 20),
        "congestion": random.randint(0, 100)
    }

    return render_template(
        "index.html",
        data=data
    )

if __name__ == "__main__":
    app.run(debug=True)
