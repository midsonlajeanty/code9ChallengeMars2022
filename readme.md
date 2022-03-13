# Teste levèl kode w ak enonse sa yo


## Enonse #1
Ou gen yon adrès IP.

Ou dwe rantre nan yon pòt(PORT) ki ouvri. Ou pa gen anpil tan pou skane tout pòt yo, men ou konnen pòt ki ouvri a, li egal total tout dijit yo ki nan adrès IP a, miltiplye pa premye dijit ki nan adrès IP a.

Mande itilizatè a pou l tape adrès IP a, epi afiche pòt ki ouvri a

NB: Tout adrès ip separe ak pwen(.)

    Ekzanp:

    "127.0.0.1" ap bay rezilta
    (1+2+7+0+0+1) * 1 = 11 =>
    Donk pòt ki ouvri a se 11

**Dire: 15 minit**

## Enonse #2
Afiche OK si antye N a PA divizib pa 4, afichye NOK nan lòt ka

**Dire: 5 minit**

## Enonse #3
Mande itilizate non l. Itilize pwòp teknik pa w pou mete non sa nan fòma tit. Sa vle di premye lèt chak mo dwe majiskil, epi lòt yo miniskil. Epi afiche nouvo non an.

    Ekzanp:

    "Ayiti se yon BEL PEYI"  ap vin bay "Ayiti Se Yon Bel Peyi"

**Dire: 10 minit**

## Enonse #4
Ou gen 2 nonb a ak b. Anndan yon entèval (x, y) enklizif, afiche tout nonb ak total nonb ki respekte kondisyon sa yo anndan entèval la:

Miltip a, men ki pa miltip b
Miltip b, men ki pa miltip a
Miltip a ak b
Ki pa miltip ni a ni b

    Ekzanp:

    a = 2
    b = 3
    Epi yon entèval 1 jiska 20
    Repons lan se:

    2,4,8,10,14,16,20 -> total nonb: 7
    3,9,15 -> total nonb: 3
    6,12,18 -> total nonb: 3
    1,5,7,11,13,17,19 -> total nonb: 7 

**Dire: 15 minit**

## Enonse #5
Yo ba w yon chenn karaktè ki gen plizyè nonb ladan ki separe ak espas. Kalkile pwodwi, total chak dijit ki konpoze chak nonb.

    Ekzanp:

    "5 45 123 12"
    ap bay (5) * (4+5) * (1+2+3) * (1+2) => 5*9*6*3
    ki bay total: 810 
    
**Dire: 10 minit**

## Enonse #6
Ou gen yon chenn karaktè, ranvèse tout karaktè yo san pa gen okenn espas,

    Ekzanp:

    "Ayibobo Ayiti" => "itiyAobobiyA" 

**Dire: 5 minit**

Enonse #7
Yo ba w yon chenn karaktè, ranplase tout karaktè ki plase devan yon vwayèl pa asteriks(*). Epi afiche nouvo chenn karaktè a.

**Dire: 10 minit**

## Enonse #8
Retire tout espas blan ki nan yon blok tèks.

**Dire: 5 minit**

## Enonse #9
Nan yon entèval enkliziv (a,b). afiche total tout nonb ki pè yo.

**Dire: 5 minit**

## Enonse #10
Gen yon kle nan stokaj lokal navigatè a, ki rele "blast" ki anrejistre token yon itilizatè; rekipere valè sa. Token nan sou fòm: "web-insecure;34829sjdfnsj32984madsdkj"

Fè yon fason pou w retire tout karaktè ki avan pwen-vigil la ansanm ak pwen-vigil la.

Note: window.localStorage se stokaj lokal navigatè a sou fòm objè. Epi getItem, se metòd pou w rekipere yon valè.

**Dire: 15 minit**

## Enonse #11
Nan yon tablo nonb, kreye pwòp fason pa w pou w afiche sa ki pi gran, ak sa ki piti a.

**Dire: 10 minit**

## Enonse #12
Yo ba w antre ak sòti sa yo:

a = 5                 2
b = 2         

a = 3                 3
b = 4

a = 1                 1
b = 1
Kreye kòd pou input ak output sa yo.

**Dire: 10 minit**

## Enonse #13
Ou gen yon sekans ak yon longè L, ki genyen ladan antye 0 jiska L-1 Ou dwe ranvèse sekans lan alanvè nan chak tou iterasyon sou sekans lan.

Ou dwe fe ranvèsman nan lòd sa:

Premye tou i = 0: Tout sekans lan ap ranvèse: Nan lòt tou yo, sèlman i dènye eleman nan sekans lan, kap rete jan yo ye a, epi tout lòt eleman yo ap ranvèse.

Aprè tout ranvèsman, misyon w se retrase kote eleman N pozisyone nan sekans lan. Epi afiche N ak pozisyon l lè w fin trete sekans lan.

    Ekzanp:

    Yon sekans ki gen longè 5 :

    [ 0, 1, 2, 3, 4 ]
    Nap retrase eleman N = 3

    Premye tou: tout sekans lan ranvèse

    0 1 2 3 4 -> 4 3 2 1 0
    Dezyem tou: Dènye eleman rete nan plas li, pandan tout lòt yo ranvèse:

    4 3 2 1 0 -> 1 2 3 4 0
    Twazyem tou: 2 dènye eleman nan plas yo rete nan plas yo, pandan tout lòt yo ranvèse:

    1 2 3 4 0 -> 3 2 1 4 0
    Katriyèm tou: 3 dènye eleman nan plas yo rete nan plas yo, pandan tout lòt yo ranvèse:

    3 2 1 4 0 -> 2 3 1 4 0
    Kounya ou ka wè eleman 3 nan pozisyon 1 nan sekans final la. donk wap afiche 3 ansanm ak endèks li ki se 1

**Dire: 15 minit**

## Enonse #14
Yo ba w antre ak sòti sa yo:

a = 2                 4
b = 16         

a = 3                 4
b = 24

a = 1                 0.5
b = 1
Kreye kòd pou input ak output sa yo.

**Dire: 10 minit**

## Enonse #15
nan yon chenn karaktè, sa wap chache a twouve l nan mitan mo sa yo: 'hidden' ak 'endpass'. Fè yon fason pou w jwenn karaktè ki nan mitan an, epi afiche l.

**Dire: 10 minit**

Sous : [Code9Haiti](https://code9haiti.com/fr/blog/teste-level-kode-w-ak-enonse-sa-yo)