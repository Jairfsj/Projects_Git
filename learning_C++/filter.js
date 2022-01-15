let idades = [25, 10, 15, 30, 19, 8];
var idade = function (item){
return item < 19;
}
var num = idades.filter(idade);
console.log(num);
