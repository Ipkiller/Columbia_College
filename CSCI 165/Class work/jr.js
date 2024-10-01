function rock() {
  document.getElementById("disp").src =
    "https://media.istockphoto.com/id/170215830/photo/limestone.jpg?s=2048x2048&w=is&k=20&c=gID_1I41O-YC4bayjgeWHBUsZUG9_eLBfeyDdQF2QgI=";
}
function Paper() {
  document.getElementById("disp").src =
    "https://rollandinc-production.s3.ca-central-1.amazonaws.com/app/uploads/2019/07/22142424/digital-paper-1.jpg";
}
function Scissor() {
  document.getElementById("disp").src =
    "https://www.collinsdictionary.com/images/thumb/scissors_100136453_250.jpg?version=5.0.21";
}
function display() {
  computer = Math.floor(Math.random() * 3) + 1;
  if (document.getElementById("r").checked) user = 1;
  else if (document.getElementById("p").checked) user = 2;
  else if (document.getElementById("s").checked) user = 3;
  else user = 0;
  if (computer == 1) {
    document.getElementById("comDisp").src =
      "https://media.istockphoto.com/id/170215830/photo/limestone.jpg?s=2048x2048&w=is&k=20&c=gID_1I41O-YC4bayjgeWHBUsZUG9_eLBfeyDdQF2QgI=";
    if (user == 1) document.getElementById("result").innerHTML = "Tie!";
    else if (user == 2)
      document.getElementById("result").innerHTML = "You Win!";
    else if (user == 3)
      document.getElementById("result").innerHTML = "You Lose!";
    else
      document.getElementById(("result".innerHTML = "User needs to Select!"));
  } else if (computer == 2) {
    document.getElementById("comDisp").src =
      "https://rollandinc-production.s3.ca-central-1.amazonaws.com/app/uploads/2019/07/22142424/digital-paper-1.jpg";
    if (user == 1) document.getElementById("result").innerHTML = "Tie!";
    else if (user == 2)
      document.getElementById("result").innerHTML = "You Win!";
    else if (user == 3)
      document.getElementById("result").innerHTML = "You Lose!";
    else
      document.getElementById(("result".innerHTML = "User needs to Select!"));
  } else if (computer == 3) {
    document.getElementById("comDisp").src =
      "https://www.collinsdictionary.com/images/thumb/scissors_100136453_250.jpg?version=5.0.21";
    if (user == 1) document.getElementById("result").innerHTML = "Tie!";
    else if (user == 2)
      document.getElementById("result").innerHTML = "You Win!";
    else if (user == 3)
      document.getElementById("result").innerHTML = "You Lose!";
    else
      document.getElementById(("result".innerHTML = "User needs to Select!"));
  }
}
var ps = new Array(3);
ps[0] = new Image();
ps[0].src = "r.jpg";
ps[1] = new Image();
ps[1].src = "p.jpg";
ps[2] = new Image();
ps[2].src = "s.jpg";
var w = 0;
var cc = 0;
function anim2() {
  document.getElementById("comDisp").src = ps[w].src;
  w = (w + 1) % 3;
  //w=Math.floor(Math.random()*3);
  cc += 1;
  if (cc == 20) {
    {
      clearInterval(timer);
      cc = 0;
      display();
    }
  }
}
