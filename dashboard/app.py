from flask import Flask, render_template
import json

app = Flask(__name__)

@app.route("/")
def index():

    with open("data/sample_nodes.json") as f:
        network = json.load(f)

    avg_health = sum(
        n["health"]
        for n in network["nodes"]
    ) / len(network["nodes"])

    weak_nodes = len([
        n for n in network["nodes"]
        if n["health"] < 60
    ])

    return render_template(
        "index.html",
        network=network,
        avg_health=round(avg_health, 2),
        weak_nodes=weak_nodes
    )

if __name__ == "__main__":
    app.run(debug=True)
