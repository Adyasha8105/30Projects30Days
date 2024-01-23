let gamenum=85;
let x=prompt("guess  the two digit  number  like as 34");
while(x!=gamenum) {
    x=prompt("wrong guess again  two digit number like as 34");
}

console.log("congratulation  you entered the right number");
let divs=document.querySelector("div1");
divs.innerText= divs.innerText+" over";
let gh=document.querySelector("div2");
gh.innerText=gh.innerText+"congratulation  you entered the right number";