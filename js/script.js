document.addEventListener("DOMContentLoaded", function () {
    const burger = document.querySelector(".burger");
    const navlist = document.querySelector("nav");

    burger.addEventListener("click", () => {
        navlist.classList.toggle("nav-active");
        burger.classList.toggle("toggle-burger");
    });
});

// const scroll = new SmoothScroll('a[href*="#"]', {
//     speed: 1000,
//     speedAsDuration: true,
// });
