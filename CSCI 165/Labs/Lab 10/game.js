function reset() {
  var rd=document.getElementsByName("rsp");
  for(var i=0; i<rd.length;i++){
    rd[i].checked=false;
    document.getElementById("disp").src="https://images.pexels.com/photos/56866/garden-rose-red-pink-56866.jpeg?auto=compress&cs=tinysrgb&w=1260&h=750&dpr=1";
    document.getElementById("comDisp").src="https://images.pexels.com/photos/56866/garden-rose-red-pink-56866.jpeg?auto=compress&cs=tinysrgb&w=1260&h=750&dpr=1";
    document.getElementById("result").innerHTML="";
  }
}
function rock() {
  document.getElementById("disp").src = "r.jpg";
}
function Paper() {
  document.getElementById("disp").src = "p.jpg";
}
function Scissor() {
  document.getElementById("disp").src = "s.jpg";
}
function display() {
  console.log("Yup it's working");
  computer = Math.floor(Math.random() * 3) + 1;
  if (document.getElementById("r").checked) user = 1;
  else if (document.getElementById("p").checked) user = 2;
  else if (document.getElementById("s").checked) user = 3;
  else user = 0;
  if (computer == 1) {
    document.getElementById("comDisp").src = "r.jpg";
    if (user == 1) document.getElementById("result").innerHTML = "Tie!";
    else if (user == 2)
      document.getElementById("result").innerHTML = "You Win!";
    else if (user == 3)
      document.getElementById("result").innerHTML = "You Lose!";
    else document.getElementById("result").innerHTML = "User needs to select!";
  } else if (computer == 2) {
    document.getElementById("comDisp").src = "p.jpg";
    if (user == 1) document.getElementById("result").innerHTML = "You Lose!";
    else if (user == 2) document.getElementById("result").innerHTML = "Tie!";
    else if (user == 3)
      document.getElementById("result").innerHTML = "You Win!";
    else document.getElementById("result").innerHTML = "User needs to select!";
  } else if (computer == 3) {
    document.getElementById("comDisp").src = "s.jpg";
    if (user == 1) document.getElementById("result").innerHTML = "You Win!";
    else if (user == 2)
      document.getElementById("result").innerHTML = "You Lose!";
    else if (user == 3) document.getElementById("result").innerHTML = "Tie!";
    else document.getElementById("result").innerHTML = "User needs to select!";
  }
}
var ps = new Array(3);
ps[0] = new Image;
ps[0].src = "r.jpg";
ps[1] = new Image;
ps[1].src = "p.jpg";
ps[2] = new Image;
ps[2].src = "s.jpg";
var w = 0;
var cc = 0;
function anim2() {
  document.getElementById("comDisp").src = ps[w].src;
  w = (w + 1) % 3;
  // w = Math.floor(Math.random() * 3);
  cc += 1;
  if (cc == 20) {
    clearInterval(timer);
    cc = 0;
    display();
  }
}
