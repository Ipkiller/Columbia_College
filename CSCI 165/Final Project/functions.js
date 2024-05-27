// Default code while loading the site

{
    // Jquery has been used

    $("#window2").hide();
    $("#window").hide();
}

// Popup Display when click on the Cart Button

function popup() {
    // Decleration to blur the window when click on Cart button

    const a = document.getElementById("blur").classList;
    // Class has been given to the element
    a.add("active");

    // Jquery effect has been used
    $("#window").fadeIn();
}

// To remove the popup window

function back() {

    document.getElementById("blur").classList.remove("active");

    // Jquery effect has been used
    $("#window").fadeOut();
}

// Code for social media popup window
{
function social_media() {

    // Jquery effect
    $("#window2").show();
}
function off() {

    // Jquery effect
    $("#window2").hide();
}
}


// Function of Men page to make table products

// Arrey hs been decleared for products info
const products = [
    {
        id: 0,
        image: 'Source/Images/products/purepng.com-nike-logologobrand-logoiconslogos-251519940082eoxxs.jpeg',
        title: 'Nike Air Max 270',
        prize: 210,
    },

    {
        id: 1,
        image: 'Source/Images/products/onetake.webp',
        title: 'Nike Zoom Mercurial Vapor',
        prize: 115,
    },
    {
        id: 2,
        image: 'Source/Images/products/Jumpman.webp',
        title: 'Jumpman MVP',
        prize: 215,
    },
    {
        id: 3,
        image: 'Source/Images/products/Nike-air-max-plus.webp',
        title: 'Nike Air Max Plus',
        prize: 190,
    },
    {
        id: 4,
        image: 'Source/Images/products/nike-infinity.webp',
        title: 'Nike InfinityRN 4 GORE-TEX',
        prize: 235,
    },
    {
        id: 5,
        image: 'Source/Images/products/air-max-90.webp',
        title: 'Nike Air Max 90 GORE-TEX',
        prize: 210,
    },
    {
        id: 6,
        image: 'Source/Images/products/1low.jpeg',
        title: 'Air Jordan 1 Low',
        prize: 145,
    },
    {
        id: 7,
        image: 'Source/Images/products/force.webp',
        title: 'Nike Lunar Force 1',
        prize: 240,
    },
    {
        id: 8,
        image: 'Source/Images/products/312.jpeg',
        title: 'Air Jordan Legacy 312 Low',
        prize: 185,
    },
    {
        id: 9,
        image: 'Source/Images/products/stud.webp',
        title: 'Nike Mercurial Superfly 9 Elite',
        prize: 375,
    },
    {
        id: 10,
        image: 'Source/Images/products/stud2.webp',
        title: 'Nike Phantom GX Elite',
        prize: 340,
    },
    {
        id: 11,
        image: 'Source/Images/products/blaze.webp',
        title: 'Nike Blazer Mid 77',
        prize: 100,
    },
];

// Loop has been applied to make list of products

let result = "";
for (i = 0; i < products.length; i++) {
    var code = "<div id='display'>";
    code += "<img style='height: 300px; width='200px' src='" + products[i].image + "'>";
    code += "<p>" + products[i].title + "</p>";
    code += "<p>Prize:- $ " + products[i].prize + "</p>";
    code += "<button onclick='call(" + i + ")'>Add to Cart</button>";
    code += "</div>";
    result += code;
}
$("#products").html(result);

// Add to cart program 

var content = "", total = 0;
function call(x) {
    for (i = -1; i < products.length; i++) {
        if (x == i) {
            console.log(i);
            content += "<table><tr><td><img class='limit' src='" + products[i].image + "'><td><td>" + products[i].title + "</td><td>Prize:-$" + products[i].prize + "</td></tr ></table >";

            total += products[i].prize
        }
    }
    $(".con").html(content);
    $("#window").find("table").addClass("appear");
    $(".amount").html("Total:-$ " + total);
}   
