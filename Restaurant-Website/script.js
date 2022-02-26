let displayNav = false;
let displayAbout = true;
let aboutFrance = document.querySelector(".about-content");
let body = document.querySelector("body");

function dropDownAbout() { 
    if (displayAbout){
        aboutFrance.style.display = "none";
        displayAbout = false;
    } else {
        aboutFrance.style.display = "flex";
        displayAbout = true;
    }
 }

function dropDownMenu(){
    navbar = document.querySelector(".nav-bar-dropdown");
    
    if (!displayNav){
        navbar.style.display = "flex";
        displayNav = true;
    } else {
        navbar.style.display = "none";
        displayNav = false;
    }
}