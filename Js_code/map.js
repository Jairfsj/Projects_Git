let products = [
   {barCode: 1, name:'Sabão em pó', brand: 'OMO', qtd: 2, price: 15.00},
   {barCode: 2, name:'Laranja' , brand: 'Fazenda Capão', qtd: 2, price: 4.99 },
   {barCode: 3, name:'Arroz', brand: 'Prato Fino', qtd:3 , price: 19.90 },
   {barCode: 4, name:'Contra Filé', brand: 'Friboi', qtd: 1, price: 32.00 },


];

const names = products.map(product => product.name);
const prices = products.map(product => product.price);
const brands = products.map(product => product.brand);
const qtds = products.map(product => product.qtd);
//const price = products.map(product => product.price);



console.log(names,  prices , brands , qtds);

