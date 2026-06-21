fetch("destinations.json")
.then(response => response.json())
.then(data => {

    let output = "";

    data.forEach(place => {

        output += `
        <div class="card">
            <img src="${place.image}">
            <h2>${place.name}</h2>
            <p>💰 Price: $${place.price}</p>
            <p>⭐ Rating: ${place.rating}</p>
        </div>
        `;
    });

    document.getElementById("places").innerHTML = output;
});