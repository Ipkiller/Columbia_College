document.querySelector(".menu_bar").onclick = function () {
    this.classList.add("nav_menu_rotate");
    document.querySelector(".menu_box").classList.add("menu_box_action");
};

document.querySelector(".full_window").onclick = function () {
    document.querySelector(".menu_bar").classList.remove("nav_menu_rotate");
    document.querySelector(".menu_box").classList.remove("menu_box_action");
}
