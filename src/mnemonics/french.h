// Copyright (c) 2014-2017, The Monero Project
// Copyright (c) 2017-2018, Karbo developers
// Copyright (c) 2018, Novocoincoin developers
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

/*!
 * \file french.h
 *
 * \brief French word list and map.
 */

#pragma once

#include "language_base.h"
#include <vector>
#include <unordered_map>
#include <string>

 /*!
  * \namespace Language
  * \brief Mnemonic language related namespace.
  */
namespace Language {

class French : public Base
{
public:
	const static std::string c_name;

	French() : Base(c_name, std::vector<std::string>({
		"abandon",
		"abattre",
		"aboi",
		"abolir",
		"aborder",
		"abri",
		"absence",
		"absolu",
		"abuser",
		"acacia",
		"acajou",
		"accent",
		"accord",
		"accrocher",
		"accuser",
		"acerbe",
		"achat",
		"acheter",
		"acide",
		"acier",
		"acquis",
		"acte",
		"action",
		"adage",
		"adepte",
		"adieu",
		"admettre",
		"admis",
		"adorer",
		"adresser",
		"aduler",
		"affaire",
		"affirmer",
		"afin",
		"agacer",
		"agent",
		"agir",
		"agiter",
		"agonie",
		"agrafe",
		"agrume",
		"aider",
		"aigle",
		"aigre",
		"aile",
		"ailleurs",
		"aimant",
		"aimer",
		"ainsi",
		"aise",
		"ajouter",
		"alarme",
		"album",
		"alcool",
		"alerte",
		"algue",
		"alibi",
		"aller",
		"allumer",
		"alors",
		"amande",
		"amener",
		"amie",
		"amorcer",
		"amour",
		"ample",
		"amuser",
		"ananas",
		"ancien",
		"anglais",
		"angoisse",
		"animal",
		"anneau",
		"annoncer",
		"apercevoir",
		"apparence",
		"appel",
		"apporter",
		"apprendre",
		"appuyer",
		"arbre",
		"arcade",
		"arceau",
		"arche",
		"ardeur",
		"argent",
		"argile",
		"aride",
		"arme",
		"armure",
		"arracher",
		"arriver",
		"article",
		"asile",
		"aspect",
		"assaut",
		"assez",
		"assister",
		"assurer",
		"astre",
		"astuce",
		"atlas",
		"atroce",
		"attacher",
		"attente",
		"attirer",
		"aube",
		"aucun",
		"audace",
		"auparavant",
		"auquel",
		"aurore",
		"aussi",
		"autant",
		"auteur",
		"autoroute",
		"autre",
		"aval",
		"avant",
		"avec",
		"avenir",
		"averse",
		"aveu",
		"avide",
		"avion",
		"avis",
		"avoir",
		"avouer",
		"avril",
		"azote",
		"azur",
		"badge",
		"bagage",
		"bague",
		"bain",
		"baisser",
		"balai",
		"balcon",
		"balise",
		"balle",
		"bambou",
		"banane",
		"banc",
		"bandage",
		"banjo",
		"banlieue",
		"bannir",
		"banque",
		"baobab",
		"barbe",
		"barque",
		"barrer",
		"bassine",
		"bataille",
		"bateau",
		"battre",
		"baver",
		"bavoir",
		"bazar",
		"beau",
		"beige",
		"berger",
		"besoin",
		"beurre",
		"biais",
		"biceps",
		"bidule",
		"bien",
		"bijou",
		"bilan",
		"billet",
		"blanc",
		"blason",
		"bleu",
		"bloc",
		"blond",
		"bocal",
		"boire",
		"boiserie",
		"boiter",
		"bonbon",
		"bondir",
		"bonheur",
		"bordure",
		"borgne",
		"borner",
		"bosse",
		"bouche",
		"bouder",
		"bouger",
		"boule",
		"bourse",
		"bout",
		"boxe",
		"brader",
		"braise",
		"branche",
		"braquer",
		"bras",
		"brave",
		"brebis",
		"brevet",
		"brider",
		"briller",
		"brin",
		"brique",
		"briser",
		"broche",
		"broder",
		"bronze",
		"brosser",
		"brouter",
		"bruit",
		"brute",
		"budget",
		"buffet",
		"bulle",
		"bureau",
		"buriner",
		"buste",
		"buter",
		"butiner",
		"cabas",
		"cabinet",
		"cabri",
		"cacao",
		"cacher",
		"cadeau",
		"cadre",
		"cage",
		"caisse",
		"caler",
		"calme",
		"camarade",
		"camion",
		"campagne",
		"canal",
		"canif",
		"capable",
		"capot",
		"carat",
		"caresser",
		"carie",
		"carpe",
		"cartel",
		"casier",
		"casque",
		"casserole",
		"cause",
		"cavale",
		"cave",
		"ceci",
		"cela",
		"celui",
		"cendre",
		"cent",
		"cependant",
		"cercle",
		"cerise",
		"cerner",
		"certes",
		"cerveau",
		"cesser",
		"chacun",
		"chair",
		"chaleur",
		"chamois",
		"chanson",
		"chaque",
		"charge",
		"chasse",
		"chat",
		"chaud",
		"chef",
		"chemin",
		"cheveu",
		"chez",
		"chicane",
		"chien",
		"chiffre",
		"chiner",
		"chiot",
		"chlore",
		"choc",
		"choix",
		"chose",
		"chou",
		"chute",
		"cibler",
		"cidre",
		"ciel",
		"cigale",
		"cinq",
		"cintre",
		"cirage",
		"cirque",
		"ciseau",
		"citation",
		"citer",
		"citron",
		"civet",
		"clairon",
		"clan",
		"classe",
		"clavier",
		"clef",
		"climat",
		"cloche",
		"cloner",
		"clore",
		"clos",
		"clou",
		"club",
		"cobra",
		"cocon",
		"coiffer",
		"coin",
		"colline",
		"colon",
		"combat",
		"comme",
		"compte",
		"conclure",
		"conduire",
		"confier",
		"connu",
		"conseil",
		"contre",
		"convenir",
		"copier",
		"cordial",
		"cornet",
		"corps",
		"cosmos",
		"coton",
		"couche",
		"coude",
		"couler",
		"coupure",
		"cour",
		"couteau",
		"couvrir",
		"crabe",
		"crainte",
		"crampe",
		"cran",
		"creuser",
		"crever",
		"crier",
		"crime",
		"crin",
		"crise",
		"crochet",
		"croix",
		"cruel",
		"cuisine",
		"cuite",
		"culot",
		"culte",
		"cumul",
		"cure",
		"curieux",
		"cuve",
		"dame",
		"danger",
		"dans",
		"davantage",
		"debout",
		"dedans",
		"dehors",
		"delta",
		"demain",
		"demeurer",
		"demi",
		"dense",
		"dent",
		"depuis",
		"dernier",
		"descendre",
		"dessus",
		"destin",
		"dette",
		"deuil",
		"deux",
		"devant",
		"devenir",
		"devin",
		"devoir",
		"dicton",
		"dieu",
		"difficile",
		"digestion",
		"digue",
		"diluer",
		"dimanche",
		"dinde",
		"diode",
		"dire",
		"diriger",
		"discours",
		"disposer",
		"distance",
		"divan",
		"divers",
		"docile",
		"docteur",
		"dodu",
		"dogme",
		"doigt",
		"dominer",
		"donation",
		"donjon",
		"donner",
		"dopage",
		"dorer",
		"dormir",
		"doseur",
		"douane",
		"double",
		"douche",
		"douleur",
		"doute",
		"doux",
		"douzaine",
		"draguer",
		"drame",
		"drap",
		"dresser",
		"droit",
		"duel",
		"dune",
		"duper",
		"durant",
		"durcir",
		"durer",
		"eaux",
		"effacer",
		"effet",
		"effort",
		"effrayant",
		"elle",
		"embrasser",
		"emmener",
		"emparer",
		"empire",
		"employer",
		"emporter",
		"enclos",
		"encore",
		"endive",
		"endormir",
		"endroit",
		"enduit",
		"enfant",
		"enfermer",
		"enfin",
		"enfler",
		"enfoncer",
		"enfuir",
		"engager",
		"engin",
		"enjeu",
		"enlever",
		"ennemi",
		"ennui",
		"ensemble",
		"ensuite",
		"entamer",
		"entendre",
		"entier",
		"entourer",
		"entre",
		"envelopper",
		"envie",
		"envoyer",
		"erreur",
		"escalier",
		"espace",
		"espoir",
		"esprit",
		"essai",
		"essor",
		"essuyer",
		"estimer",
		"exact",
		"examiner",
		"excuse",
		"exemple",
		"exiger",
		"exil",
		"exister",
		"exode",
		"expliquer",
		"exposer",
		"exprimer",
		"extase",
		"fable",
		"facette",
		"facile",
		"fade",
		"faible",
		"faim",
		"faire",
		"fait",
		"falloir",
		"famille",
		"faner",
		"farce",
		"farine",
		"fatigue",
		"faucon",
		"faune",
		"faute",
		"faux",
		"faveur",
		"favori",
		"faxer",
		"feinter",
		"femme",
		"fendre",
		"fente",
		"ferme",
		"festin",
		"feuille",
		"feutre",
		"fiable",
		"fibre",
		"ficher",
		"fier",
		"figer",
		"figure",
		"filet",
		"fille",
		"filmer",
		"fils",
		"filtre",
		"final",
		"finesse",
		"finir",
		"fiole",
		"firme",
		"fixe",
		"flacon",
		"flair",
		"flamme",
		"flan",
		"flaque",
		"fleur",
		"flocon",
		"flore",
		"flot",
		"flou",
		"fluide",
		"fluor",
		"flux",
		"focus",
		"foin",
		"foire",
		"foison",
		"folie",
		"fonction",
		"fondre",
		"fonte",
		"force",
		"forer",
		"forger",
		"forme",
		"fort",
		"fosse",
		"fouet",
		"fouine",
		"foule",
		"four",
		"foyer",
		"frais",
		"franc",
		"frapper",
		"freiner",
		"frimer",
		"friser",
		"frite",
		"froid",
		"froncer",
		"fruit",
		"fugue",
		"fuir",
		"fuite",
		"fumer",
		"fureur",
		"furieux",
		"fuser",
		"fusil",
		"futile",
		"futur",
		"gagner",
		"gain",
		"gala",
		"galet",
		"galop",
		"gamme",
		"gant",
		"garage",
		"garde",
		"garer",
		"gauche",
		"gaufre",
		"gaule",
		"gaver",
		"gazon",
		"geler",
		"genou",
		"genre",
		"gens",
		"gercer",
		"germer",
		"geste",
		"gibier",
		"gicler",
		"gilet",
		"girafe",
		"givre",
		"glace",
		"glisser",
		"globe",
		"gloire",
		"gluant",
		"gober",
		"golf",
		"gommer",
		"gorge",
		"gosier",
		"goutte",
		"grain",
		"gramme",
		"grand",
		"gras",
		"grave",
		"gredin",
		"griffure",
		"griller",
		"gris",
		"gronder",
		"gros",
		"grotte",
		"groupe",
		"grue",
		"guerrier",
		"guetter",
		"guider",
		"guise",
		"habiter",
		"hache",
		"haie",
		"haine",
		"halte",
		"hamac",
		"hanche",
		"hangar",
		"hanter",
		"haras",
		"hareng",
		"harpe",
		"hasard",
		"hausse",
		"haut",
		"havre",
		"herbe",
		"heure",
		"hibou",
		"hier",
		"histoire",
		"hiver",
		"hochet",
		"homme",
		"honneur",
		"honte",
		"horde",
		"horizon",
		"hormone",
		"houle",
		"housse",
		"hublot",
		"huile",
		"huit",
		"humain",
		"humble",
		"humide",
		"humour",
		"hurler",
		"idole",
		"igloo",
		"ignorer",
		"illusion",
		"image",
		"immense",
		"immobile",
		"imposer",
		"impression",
		"incapable",
		"inconnu",
		"index",
		"indiquer",
		"infime",
		"injure",
		"inox",
		"inspirer",
		"instant",
		"intention",
		"intime",
		"inutile",
		"inventer",
		"inviter",
		"iode",
		"iris",
		"issue",
		"ivre",
		"jade",
		"jadis",
		"jamais",
		"jambe",
		"janvier",
		"jardin",
		"jauge",
		"jaunisse",
		"jeter",
		"jeton",
		"jeudi",
		"jeune",
		"joie",
		"joindre",
		"joli",
		"joueur",
		"journal",
		"judo",
		"juge",
		"juillet",
		"juin",
		"jument",
		"jungle",
		"jupe",
		"jupon",
		"jurer",
		"juron",
		"jury",
		"jusque",
		"juste",
		"kayak",
		"ketchup",
		"kilo",
		"kiwi",
		"koala",
		"label",
		"lacet",
		"lacune",
		"laine",
		"laisse",
		"lait",
		"lame",
		"lancer",
		"lande",
		"laque",
		"lard",
		"largeur",
		"larme",
		"larve",
		"lasso",
		"laver",
		"lendemain",
		"lentement",
		"lequel",
		"lettre",
		"leur",
		"lever",
		"levure",
		"liane",
		"libre",
		"lien",
		"lier",
		"lieutenant",
		"ligne",
		"ligoter",
		"liguer",
		"limace",
		"limer",
		"limite",
		"lingot",
		"lion",
		"lire",
		"lisser",
		"litre",
		"livre",
		"lobe",
		"local",
		"logis",
		"loin",
		"loisir",
		"long",
		"loque",
		"lors",
		"lotus",
		"louer",
		"loup",
		"lourd",
		"louve",
		"loyer",
		"lubie",
		"lucide",
		"lueur",
		"luge",
		"luire",
		"lundi",
		"lune",
		"lustre",
		"lutin",
		"lutte",
		"luxe",
		"machine",
		"madame",
		"magie",
		"magnifique",
		"magot",
		"maigre",
		"main",
		"mairie",
		"maison",
		"malade",
		"malheur",
		"malin",
		"manche",
		"manger",
		"manier",
		"manoir",
		"manquer",
		"marche",
		"mardi",
		"marge",
		"mariage",
		"marquer",
		"mars",
		"masque",
		"masse",
		"matin",
		"mauvais",
		"meilleur",
		"melon",
		"membre",
		"menacer",
		"mener",
		"mensonge",
		"mentir",
		"menu",
		"merci",
		"merlu",
		"mesure",
		"mettre",
		"meuble",
		"meunier",
		"meute",
		"miche",
		"micro",
		"midi",
		"miel",
		"miette",
		"mieux",
		"milieu",
		"mille",
		"mimer",
		"mince",
		"mineur",
		"ministre",
		"minute",
		"mirage",
		"miroir",
		"miser",
		"mite",
		"mixte",
		"mobile",
		"mode",
		"module",
		"moins",
		"mois",
		"moment",
		"momie",
		"monde",
		"monsieur",
		"monter",
		"moquer",
		"moral",
		"morceau",
		"mordre",
		"morose",
		"morse",
		"mortier",
		"morue",
		"motif",
		"motte",
		"moudre",
		"moule",
		"mourir",
		"mousse",
		"mouton",
		"mouvement",
		"moyen",
		"muer",
		"muette",
		"mugir",
		"muguet",
		"mulot",
		"multiple",
		"munir",
		"muret",
		"muse",
		"musique",
		"muter",
		"nacre",
		"nager",
		"nain",
		"naissance",
		"narine",
		"narrer",
		"naseau",
		"nasse",
		"nation",
		"nature",
		"naval",
		"navet",
		"naviguer",
		"navrer",
		"neige",
		"nerf",
		"nerveux",
		"neuf",
		"neutre",
		"neuve",
		"neveu",
		"niche",
		"nier",
		"niveau",
		"noble",
		"noce",
		"nocif",
		"noir",
		"nomade",
		"nombre",
		"nommer",
		"nord",
		"norme",
		"notaire",
		"notice",
		"notre",
		"nouer",
		"nougat",
		"nourrir",
		"nous",
		"nouveau",
		"novice",
		"noyade",
		"noyer",
		"nuage",
		"nuance",
		"nuire",
		"nuit",
		"nulle",
		"nuque",
		"oasis",
		"objet",
		"obliger",
		"obscur",
		"observer",
		"obtenir",
		"obus",
		"occasion",
		"occuper",
		"ocre",
		"octet",
		"odeur",
		"odorat",
		"offense",
		"officier",
		"offrir",
		"ogive",
		"oiseau",
		"olive",
		"ombre",
		"onctueux",
		"onduler",
		"ongle",
		"onze",
		"opter",
		"option",
		"orageux",
		"oral",
		"orange",
		"orbite",
		"ordinaire",
		"ordre",
		"oreille",
		"organe",
		"orgie",
		"orgueil",
		"orient",
		"origan",
		"orner",
		"orteil",
		"ortie",
		"oser",
		"osselet",
		"otage",
		"otarie",
		"ouate",
		"oublier",
		"ouest",
		"ours",
		"outil",
		"outre",
		"ouvert",
		"ouvrir",
		"ovale",
		"ozone",
		"pacte",
		"page",
		"paille",
		"pain",
		"paire",
		"paix",
		"palace",
		"palissade",
		"palmier",
		"palpiter",
		"panda",
		"panneau",
		"papa",
		"papier",
		"paquet",
		"parc",
		"pardi",
		"parfois",
		"parler",
		"parmi",
		"parole",
		"partir",
		"parvenir",
		"passer",
		"pastel",
		"patin",
		"patron",
		"paume",
		"pause",
		"pauvre",
		"paver",
		"pavot",
		"payer",
		"pays",
		"peau",
		"peigne",
		"peinture",
		"pelage",
		"pelote",
		"pencher",
		"pendre",
		"penser",
		"pente",
		"percer",
		"perdu",
		"perle",
		"permettre",
		"personne",
		"perte",
		"peser",
		"pesticide",
		"petit",
		"peuple",
		"peur",
		"phase",
		"photo",
		"phrase",
		"piano",
		"pied",
		"pierre",
		"pieu",
		"pile",
		"pilier",
		"pilote",
		"pilule",
		"piment",
		"pincer",
		"pinson",
		"pinte",
		"pion",
		"piquer",
		"pirate",
		"pire",
		"piste",
		"piton",
		"pitre",
		"pivot",
		"pizza",
		"placer",
		"plage",
		"plaire",
		"plan",
		"plaque",
		"plat",
		"plein",
		"pleurer",
		"pliage",
		"plier",
		"plonger",
		"plot",
		"pluie",
		"plume",
		"plus",
		"pneu",
		"poche",
		"podium",
		"poids",
		"poil",
		"point",
		"poire",
		"poison",
		"poitrine",
		"poivre",
		"police",
		"pollen",
		"pomme",
		"pompier",
		"poncer",
		"pondre",
		"pont",
		"portion",
		"poser",
		"position",
		"possible",
		"poste",
		"potage",
		"potin",
		"pouce",
		"poudre",
		"poulet",
		"poumon",
		"poupe",
		"pour",
		"pousser",
		"poutre",
		"pouvoir",
		"prairie",
		"premier",
		"prendre",
		"presque",
		"preuve",
		"prier",
		"primeur",
		"prince",
		"prison",
		"priver",
		"prix",
		"prochain",
		"produire",
		"profond",
		"proie",
		"projet",
		"promener",
		"prononcer",
		"propre",
		"prose",
		"prouver",
		"prune",
		"public",
		"puce",
		"pudeur",
		"puiser",
		"pull",
		"pulpe",
		"puma",
		"punir",
		"purge",
		"putois",
		"quand",
		"quartier",
		"quasi",
		"quatre",
		"quel",
		"question",
		"queue",
		"quiche",
		"quille",
		"quinze",
		"quitter",
		"quoi",
		"rabais",
		"raboter",
		"race",
		"racheter",
		"racine",
		"racler",
		"raconter",
		"radar",
		"radio",
		"rafale",
		"rage",
		"ragot",
		"raideur",
		"raie",
		"rail",
		"raison",
		"ramasser",
		"ramener",
		"rampe",
		"rance",
		"rang",
		"rapace",
		"rapide",
		"rapport",
		"rarement",
		"rasage",
		"raser",
		"rasoir",
		"rassurer",
		"rater",
		"ratio",
		"rature",
		"ravage",
		"ravir",
		"rayer",
		"rayon",
		"rebond",
		"recevoir",
		"recherche",
		"record",
		"reculer",
		"redevenir",
		"refuser",
		"regard",
		"regretter",
		"rein",
		"rejeter",
		"rejoindre",
		"relation",
		"relever",
		"religion",
		"remarquer",
		"remettre",
		"remise",
		"remonter",
		"remplir",
		"remuer",
		"rencontre",
		"rendre",
		"renier",
		"renoncer",
		"rentrer",
		"renverser",
		"repas",
		"repli",
		"reposer",
		"reproche",
		"requin",
		"respect",
		"ressembler",
		"reste",
		"retard",
		"retenir",
		"retirer",
		"retour",
		"retrouver",
		"revenir",
		"revoir",
		"revue",
		"rhume",
		"ricaner",
		"riche",
		"rideau",
		"ridicule",
		"rien",
		"rigide",
		"rincer",
		"rire",
		"risquer",
		"rituel",
		"rivage",
		"rive",
		"robe",
		"robot",
		"robuste",
		"rocade",
		"roche",
		"rodeur",
		"rogner",
		"roman",
		"rompre",
		"ronce",
		"rondeur",
		"ronger",
		"roque",
		"rose",
		"rosir",
		"rotation",
		"rotule",
		"roue",
		"rouge",
		"rouler",
		"route",
		"ruban",
		"rubis",
		"ruche",
		"rude",
		"ruelle",
		"ruer",
		"rugby",
		"rugir",
		"ruine",
		"rumeur",
		"rural",
		"ruse",
		"rustre",
		"sable",
		"sabot",
		"sabre",
		"sacre",
		"sage",
		"saint",
		"saisir",
		"salade",
		"salive",
		"salle",
		"salon",
		"salto",
		"salut",
		"salve",
		"samba",
		"sandale",
		"sanguin",
		"sapin",
		"sarcasme",
		"satisfaire",
		"sauce",
		"sauf",
		"sauge",
		"saule",
		"sauna",
		"sauter",
		"sauver",
		"savoir",
		"science",
		"scoop",
		"score",
		"second",
		"secret",
		"secte",
		"seigneur",
		"sein",
		"seize",
		"selle",
		"selon",
		"semaine",
		"sembler",
		"semer",
		"semis",
		"sensuel",
		"sentir",
		"sept",
		"serpe",
		"serrer",
		"sertir",
		"service",
		"seuil",
		"seulement",
		"short",
		"sien",
		"sigle",
		"signal",
		"silence",
		"silo",
		"simple",
		"singe",
		"sinon",
		"sinus",
		"sioux",
		"sirop",
		"site",
		"situation",
		"skier",
		"snob",
		"sobre",
		"social",
		"socle",
		"sodium",
		"soigner",
		"soir",
		"soixante",
		"soja",
		"solaire",
		"soldat",
		"soleil",
		"solide",
		"solo",
		"solvant",
		"sombre",
		"somme",
		"somnoler",
		"sondage",
		"songeur",
		"sonner",
		"sorte",
		"sosie",
		"sottise",
		"souci",
		"soudain",
		"souffrir",
		"souhaiter",
		"soulever",
		"soumettre",
		"soupe",
		"sourd",
		"soustraire",
		"soutenir",
		"souvent",
		"soyeux",
		"spectacle",
		"sport",
		"stade",
		"stagiaire",
		"stand",
		"star",
		"statue",
		"stock",
		"stop",
		"store",
		"style",
		"suave",
		"subir",
		"sucre",
		"suer",
		"suffire",
		"suie",
		"suite",
		"suivre",
		"sujet",
		"sulfite",
		"supposer",
		"surf",
		"surprendre",
		"surtout",
		"surveiller",
		"tabac",
		"table",
		"tabou",
		"tache",
		"tacler",
		"tacot",
		"tact",
		"taie",
		"taille",
		"taire",
		"talon",
		"talus",
		"tandis",
		"tango",
		"tanin",
		"tant",
		"taper",
		"tapis",
		"tard",
		"tarif",
		"tarot",
		"tarte",
		"tasse",
		"taureau",
		"taux",
		"taverne",
		"taxer",
		"taxi",
		"tellement",
		"temple",
		"tendre",
		"tenir",
		"tenter",
		"tenu",
		"terme",
		"ternir",
		"terre",
		"test",
		"texte",
		"thym",
		"tibia",
		"tiers",
		"tige",
		"tipi",
		"tique",
		"tirer",
		"tissu",
		"titre",
		"toast",
		"toge",
		"toile",
		"toiser",
		"toiture",
		"tomber",
		"tome",
		"tonne",
		"tonte",
		"toque",
		"torse",
		"tortue",
		"totem",
		"toucher",
		"toujours",
		"tour",
		"tousser",
		"tout",
		"toux",
		"trace",
		"train",
		"trame",
		"tranquille",
		"travail",
		"trembler",
		"trente",
		"tribu",
		"trier",
		"trio",
		"tripe",
		"triste",
		"troc",
		"trois",
		"tromper",
		"tronc",
		"trop",
		"trotter",
		"trouer",
		"truc",
		"truite",
		"tuba",
		"tuer",
		"tuile",
		"turbo",
		"tutu",
		"tuyau",
		"type",
		"union",
		"unique",
		"unir",
		"unisson",
		"untel",
		"urne",
		"usage",
		"user",
		"usiner",
		"usure",
		"utile",
		"vache",
		"vague",
		"vaincre",
		"valeur",
		"valoir",
		"valser",
		"valve",
		"vampire",
		"vaseux",
		"vaste",
		"veau",
		"veille",
		"veine",
		"velours",
		"velu",
		"vendre",
		"venir",
		"vent",
		"venue",
		"verbe",
		"verdict",
		"version",
		"vertige",
		"verve",
		"veste",
		"veto",
		"vexer",
		"vice",
		"victime",
		"vide",
		"vieil",
		"vieux",
		"vigie",
		"vigne",
		"ville",
		"vingt",
		"violent",
		"virer",
		"virus",
		"visage",
		"viser",
		"visite",
		"visuel",
		"vitamine",
		"vitrine",
		"vivant",
		"vivre",
		"vocal",
		"vodka",
		"vogue",
		"voici",
		"voile",
		"voir",
		"voisin",
		"voiture",
		"volaille",
		"volcan",
		"voler",
		"volt",
		"votant",
		"votre",
		"vouer",
		"vouloir",
		"vous",
		"voyage",
		"voyou",
		"vrac",
		"vrai",
		"yacht",
		"yeti",
		"yeux",
		"yoga",
		"zeste",
		"zinc",
		"zone",
		"zoom"
		}), 4)
	{
		populate_maps();
	}
};

} //Language