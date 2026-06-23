const ctx =
document.getElementById(
    'healthChart'
).getContext('2d');

new Chart(ctx,
{
    type: 'bar',

    data:
    {
        labels: nodeLabels,

        datasets:
        [{
            label: 'Health Score',

            data: healthData
        }]
    },

    options:
    {
        responsive: true,

        scales:
        {
            y:
            {
                beginAtZero: true,
                max: 100
            }
        }
    }
});
