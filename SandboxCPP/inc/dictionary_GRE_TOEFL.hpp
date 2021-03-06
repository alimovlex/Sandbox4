//
// Created by alimovlex
//

//
#import <Foundation/Foundation.h>
#include <vector>
using namespace std;
void speechSynthesizerTest();
void sentence_shuffle(vector<string> &personal_qualities, vector<string> &thoughts, vector<string> &objects, vector<string> &actions);
class Dictionary
{
public:
    //TOEFL words
vector<string> TOEFL_vocabulary{"Function", "Substitute", "Nevertheless", "Issue", "Hypothesis",
                      "Hence", "Require", "Lecture", "Theory", "Emphasize",
                      "Establish", "Capable", "Involve", "Fundamental", "Analyze",
                      "Approach", "Indicate", "Investigate", "Feature", "Restrict",
                      "Assess", "Significant", "Contrast", "Modify", "Sufficient",
                      "Stress", "Despite", "Identify", "Adequate", "Assume",
                      "Data", "Select", "Furthermore", "Instance", "Method",
                      "Context", "Overall", "Consume", "Constant", "Predict",
                      "Illustrate", "Accurate", "Adjust", "Whereas", "Brief",
                      "Brief", "Register", "Demonstrate", "Trend", "Concept", "Project",
                      "Acquire", "Participate", "Major", "Previous", "Maintain",
                      "Expand", "Access", "Available", "Relevant", "Obvious",
                      "Region", "Research", "Strategy", "Imply", "Source",
                      "Occupy", "Remove", "Minor", "Evident", "Specify",
                      "Achieve", "Complex", "Individual", "Resource", "Contact",
                      "Resolve", "Physical", "Period", "Mental", "Occur",
                      "Consequence", "Conduct", "Transfer", "Respond", "Section",
                      "Reject", "Affect", "Maximize", "React", "Challenge",
                      "Construct", "Rely", "Primary", "Assist", "Evaluate",
                      "Comment", "Focus", "Culture", "Label", "Circumstance",
                      "Notion", "Obtain", "Element", "Shift", "Benefit",
                      "Link", "Expose", "Community", "Initial", "Vary",
                      "Invest", "Contribute", "Alternative", "Decline", "Role",
                      "Administration", "Internal", "Aware", "Regulate", "Precise",
                      "Site", "Equivalent", "Proceed", "Philosophy", "Range",
                      "Distribute", "Distinct", "Network", "Considerable", "Annual",
                      "Status", "Reside", "Prior", "Debate", "Layer",
                      "Enable", "Sustain", "Potential", "Tradition", "Concentrate",
                      "Secure", "Stable", "Attribute", "Conflict", "Attitude",
                      "Labor", "Authority", "Correspond", "Interpret", "Estimate",
                      "Overwhelm", "Downfall", "Provoke", "Complement", "Behalf",
                      "Ornamental", "Drawback", "Constraint", "Migrate", "Overcome",
                      "Defective", "Scarce", "Absent", "Displace", "Era",
                      "Hazard", "Gratify", "Elegant", "Readily", "Coherent",
                      "Reconcile", "Convey", "Persist", "Advocate", "Controversy",
                      "Consent", "Momentum", "Compel", "Ambiguous", "Foster",
                      "Emit", "Impose", "Rigid", "Concede", "Scrap",
                      "Slender", "Culminate", "Tint", "Undertake", "Tentative",
                      "Convoluted", "Hierarchy", "Prestigious", "Deter", "Endeavor",
                      "Via", "Specimen", "Linger", "Accumulate", "Perpetual",
                      "Disperse", "Foe", "Resent", "Demolish", "Vast",
                      "Impending", "Endure", "Conform", "Abrupt", "Durable",
                      "Defiant", "Bulky", "Shimmer", "Provided", "Coincide",
                      "Inclination", "Eccentric", "Extravagant", "Impede", "Integral",
                      "Distort", "Warp", "Disparate", "Persevere", "Robust",
                      "Trigger", "Stunning", "Preemptive", "Impartial", "Indifference",
                      "Complementary", "Dusk", "Overlap", "Conducive", "Cling",
                      "Extract", "Widespread", "Mend", "Crude", "Persistent",
                      "Obscure", "Devoid", "Courteous", "Roam", "Sketch",
                      "Revolutionary", "Protocol", "Extinct", "Abundant", "Controversial",
                      "Deduce", "Welfare", "Generate", "Area", "Capacity",
                      "Orient", "Perspective", "Perceive", "Seek", "Retain",
                      "Apparent", "Justify", "Compensate", "Grant", "Enforce",
                      "Integrate", "Entity", "Negate", "External", "Derive",
                      "Scheme", "Valid", "Component", "Pursue", "Coordinate",
                      "Monitor", "Diverse", "Institute", "Consist", "Alter",
                      "Discrete", "Facilitate", "Underlying", "Factor", "Proportion",
                      "Constitute", "Framework", "Commit", "Objective", "Phase",
                      "Emerge", "Subsequent", "Aspect", "Impact", "Constrain",
                      "Policy", "Exclude", "Core", "Principle", "Criteria",
                      "Dynamic", "Mundane", "Plead", "Fraudulent", "Rustic",
                      "Strenuous", "Vivid", "Detrimental", "Counterpart", "Covert",
                      "Relic", "Congregate", "Analogous", "Induce", "Jolt",
                      "Cherish", "Perplex", "Strive", "Tedious", "Sloping",
                      "Delusion", "Entice", "Twilight", "Dissipate", "Illusory",
                      "Outgoing", "Successor", "Compulsory", "Transitory", "Astute",
                      "Encroach", "Blunt", "Exhaustive", "Ailment", "Anomaly",
                      "Secrete", "Meticulous", "Grave", "Propagate", "Vanquish",
                      "Append", "Carve", "Incentive", "Pale", "Recede",
                      "Instrumental", "Fatigue", "Probe", "Preposterous", "Fluctuate",
                      "Turbulent", "Ragged", "Analogy", "Futile", "Remnant",
                      "Scores", "Consensus", "Devise", "Endorse", "Potent",
                      "Clumsy", "Fracture", "Amend", "Prevail", "Upheaval",
                      "Brisk", "Irrevocable", "Meager", "Tenacious", "Rugged",
                      "Deviate", "Ingenuity", "Synthesize", "Implausible", "Harness",
                      "Profound", "Cozy", "Obsolete", "Novel", "Barren",
                      "Invoke", "Pivotal", "Intersperse", "Paradox", "Apprehension",
                      "Outlook", "Waive", "Viable", "Dormant", "Apathetic",
                      "Serene", "Derivative", "Superfluous", "Eradicate", "Striking",
                      "Affluent", "Feasible", "Colossal", "Elicit", "Faint",
                      "Refute", "Oversee", "Adjacent", "Sheer", "Hue",
                      "Fasten", "Proliferate", "Ominous", "Ensue", "Undermine",
                      "Comprise", "Evade", "Anomalous", "Flee", "Conspicuous",
                      "Innate", "Calamity", "Rural", "Abstain", "Dreary",
                      "Plausible", "Medium", "Intrinsic", "Perpetuate", "Intervene",
                      "Apathy", "Procure", "Oblong", "Predominant", "Jagged",
                      "Arduous", "Blatant", "Diffuse", "Shred", "Thrive",
                      "Liable", "Elude", "Drowsy", "Agile", "Confer",
                      "Esteem", "Desist", "Secluded", "Tame", "Vicarious",
                      "Subsume", "Incline", "Fragrant", "Stall", "Yield", "Prevalent",
                      "Excavate", "Elective", "Lull", "Thwart", "Trivial",
                      "Baffle", "Impetus", "Infinitesimal", "Morph", "Lavish",
                      "Pseudonym", "So-called", "Rife", "Rebound", "Seasoned",
                      "Marked", "Inept", "Ruthless", "Beckon", "Augment",
                      "Urbane", "Strife", "Wane", "Swivel", "Erode",
                      "Abolish", "Brittle", "Accrete", "Indigenous", "Fastidious",
                      "Forgo", "Overt", "Hamper", "Irrefutable", "Offset",
                      "Apt", "Despondent", "Dwell", "Hinder", "Exacting",
                      "Drench", "Forge", "Celebrated", "Plague", "Overshadow",
                      "Convene", "Flourish", "Craze", "Profuse", "Nuance",
                      "Avert", "Feeble", "Fable", "Quaint", "Prose",
                      "Undergo", "Innocuous", "Deplete", "Tactful", "Seep",
                      "Pressing", "Ornate", "Coax", "Adept", "Wares",
                      "Sound", "Lure", "Arid", "Hoist", "Adorn",
                      "Indignant", "Advent", "Cope", "Drought", "Telling",
                      "Verge", "Adverse", "Erratic", "Murky", "Jeopardy",
                      "Dwelling", "Wary", "Haphazard", "Juxtapose", "Fuse",
                      "Salvage", "Prolific", "Paramount", "Remote", "Disingenuous",
                      "Gaudy", "Forage", "Torrent", "Elusive", "Levy",
                      "Banish", "Wither", "Sever", "Bleak", "Minute",
                      "Forthcoming", "Bombard", "Endow", "Spearhead", "Propulsion",
                      "Dwindle", "Dubious", "Dismal", "Thaw", "Catalyst",
                      "Savage", "Supplant", "Inexorable", "Involved", "Qualify",
                      "Cohesive", "Spur", "Spawn", "Trappings", "Adhere",
                      "Cull", "Lucid", "Knack", "Crave", "Morale",
                      "Mushroom", "Aroma", "Notwithstanding", "Foremost", "Apex",
                      "Eerie", "Incessant", "Pretext", "Fleeting", "Overlook",
                      "Hurl", "Retract", "Facet", "Vessel", "Trickle",
                      "Depress", "Raze", "Audacious", "Barter", "Exacerbate",
                      "Grueling", "Peril", "Hazy", "Lurk", "Uphold"};
//GRE words
vector<string> GRE_vocabulary {"Aberration", "Restive", "Iconoclast", "Ambiguous", "Laconic",
                      "Amalgam", "Profligate", "Qualify", "Chastise", "Impertinent",
                      "Extant", "Venerate", "Harangue", "Venality", "Egregious",
                      "Intimate", "Acrimony", "Calumny", "Ambivalent", "Undermine",
                      "Veracious", "Parsimonious", "Auspicious", "Castigate", "Vindicate",
                      "Innocuous", "Demur", "Mercurial", "Wanting", "Involved",
                      "Galvanize", "Betray", "Maintain", "Censure", "Disinterested",
                      "Equivocal", "Amorphous", "Amenable", "Belie", "Gregarious",
                      "Parochial", "Prevaricate", "Enervate", "Commensurate", "Anomalous",
                      "Ingenuous", "Frugal", "Upbraid", "Artful", "Prodigal",
                      "Eschew", "Mitigate", "Prescience", "Perfidy", "Concede",
                      "Vociferous", "Volubility", "Recondite", "Mawkish", "Frivolous",
                      "Rustic", "Gainsay", "Obscure", "Incisive", "Reticent",
                      "Impudent", "Banal", "Apathetic", "Superfluous", "Germane",
                      "Gossamer", "Predilection", "Querulous", "Aesthete", "Engender",
                      "Dogmatic", "Fortuitous", "Dictatorial", "Glut", "Didactic",
                      "Decorous", "Audacious", "Preclude", "Entrenched", "Meticulous",
                      "Inexorable", "Diffident", "Exacerbate", "Bucolic", "Chortle",
                      "Deferential", "Gall", "Cryptic", "Culminate", "Platitude",
                      "Torpor", "Lambast", "Aesthetic", "Conspicuous", "Culpability",
                      "Abstain", "Ameliorate", "Apathy", "Ascetic", "Avaricious",
                      "Belligerent", "Circumvent", "Contrive", "Delineate", "Derivative",
                      "Derive", "Disaffected", "Eclectic", "Elucidate", "Eminent",
                      "Fallacious", "Forlorn", "Frustrate", "Guile", "Guileless",
                      "Haughty", "Heretic", "Immutable", "Incongruous", "Insidious",
                      "Itinerant", "Jingoism", "Jubilant", "Juxtapose", "Languid",
                      "Magnanimous", "Mollify", "Negligible", "Panache", "Precocious",
                      "Quotidian", "Refractory", "Spurious", "Staunch", "Subsume",
                      "Supplant", "Tantamount", "Tenacious", "Travesty", "Treacherous",
                      "Vehemence", "Vilify", "Rudimentary", "Unequivocal", "Denote",
                      "Aberrant", "Abstruse", "Acerbic", "Adamant", "Admonitory",
                      "Apocryphal", "Blatant", "Bumbling", "Burgeon", "Confound",
                      "Construe", "Contingent", "Copious", "Decorum", "Denigrate",
                      "Discrete", "Exalt", "Eradicate", "Espouse", "Exacting",
                      "Pundit", "Exonerate", "Expound", "Forthcoming", "Hackneyed",
                      "Iconoclastic", "Idiosyncrasy", "Ignoble", "Implacable", "Implausible",
                      "Incorrigible", "Indifference", "Ingratiate", "Intransigent", "Largess",
                      "Laudable", "Myopic", "Opaque", "Ostentatious", "Pedantic",
                      "Pragmatic", "Provincial", "Reconcile", "Soporific", "Temperance",
                      "Tortuous", "Underscore", "Unscrupulous", "Refute", "Petulant",
                      "Accolade", "Admonish", "Antithetical", "Arcane", "Audacity",
                      "Brazen", "Constituent", "Dilettante", "Foment", "Garrulous",
                      "Haphazard", "Hegemony", "Inimical", "Inscrutable", "Insolent",
                      "Intrepid", "Inveterate", "Irrevocable", "Munificent", "Obsequious",
                      "Ostracize", "Pedestrian", "Pernicious", "Poignant", "Precipitous",
                      "Prolific", "Propitious", "Ravenous", "Repudiate", "Rescind",
                      "Resurgent", "Scrupulous", "Sporadic", "Subversive", "Sycophant",
                      "Tempered", "Trite", "Winsome", "Reverent", "Vacillate",
                      "Austere", "Gauche", "Taciturn", "Arbitrary", "Myriad",
                      "Lionize", "Sanction", "Circumscribe", "Prodigious", "Tractable",
                      "Arduous", "Askance", "Bolster", "Clumsy", "Contrition",
                      "Craven", "Deleterious", "Duress", "Edifying", "Efficacious",
                      "Elicit", "Flux", "Harried", "Ignominious", "Maladroit",
                      "Maverick", "Mendacity", "Misconstrue", "Mundane", "Nonplussed",
                      "Nuance", "Opulence", "Placate", "Posit", "Rebuke",
                      "Specious", "Stringent", "Sullen", "Transient", "Fastidious",
                      "Furtive", "Anomaly", "Timorous", "Pejorative", "Esoteric",
                      "Imprudent", "Truncate", "Economical", "Dilatory", "Dispassionate",
                      "Disseminate", "Jovial", "Capricious", "Polemic", "Reproach",
                      "Impartial", "Indecorous", "Appease", "Erudite", "Banality",
                      "Indignant", "Acme", "Embroiled", "Indict", "Slapdash",
                      "Demure", "Inundate", "Screed", "Macabre", "Inflammatory",
                      "Voracious", "Remiss", "Peruse", "Insolvent", "Reprobate",
                      "Dupe", "Pine", "Serendipity", "Affable", "Vindictive",
                      "Telling", "Unnerve", "Profuse", "Bleak", "Summit",
                      "Dog", "Amiable", "Thrifty", "Erratic", "Stipend",
                      "Diabolical", "Candid", "Pinnacle", "Variance", "Tender",
                      "Mesmerize", "Miser", "Underwrite", "Indigenous", "Err",
                      "Retiring", "Hound", "Demean", "Telltale", "Thoroughgoing",
                      "Spendthrift", "Tirade", "Censor", "Affluent", "Zenith",
                      "Start", "Sanctimonious", "Avarice", "Catalyst", "Unconscionable",
                      "Misanthrope", "Stem", "Aboveboard", "Heyday", "Immaterial",
                      "Scintillating", "Badger", "Chauvinist", "Apex", "Corroborate",
                      "Becoming", "Exhort", "Cardinal", "Errant", "Imponderable",
                      "Bellicose", "Pugnacious", "Junta", "Pittance", "Check",
                      "Desecrate", "Amuck", "Virago", "Melee", "Hodgepodge",
                      "Animosity", "Checkered", "Cogent", "Ferret", "Moment",
                      "Flush", "Replete", "Vicarious", "Powwow", "Contrite",
                      "Beatific", "Preemptive", "Sanguine", "Cadaverous", "Disparate",
                      "Raft", "Wax", "Extenuating", "Fleece", "Paucity",
                      "Advocate", "Deter", "Thwart", "Boon", "Transitory",
                      "Apprehension", "Renege", "Jocular", "Inclement", "Patronize",
                      "Guffaw", "Avid", "Dearth", "Consummate", "Obdurate",
                      "Moot", "Ornate", "Endemic", "Malady", "Archaic",
                      "Resolve", "Disheartened", "Ascendancy", "Appreciable", "Impermeable",
                      "Fledgling", "Stolid", "Raffish", "Discriminate", "Incessant",
                      "Muted", "Robust", "Respite", "Impede", "Plodding",
                      "Pithy", "Meander", "Morose", "Flounder", "Elusive",
                      "Autonomously", "Quandary", "Fete", "Ingenuity", "Proponent",
                      "Malleable", "Degrade", "Disenfranchise", "Snide", "Entice",
                      "Altruism", "Genial", "Egotist", "Irresolute", "Pristine",
                      "Contemptuous", "Perpetuate", "Jargon", "Spurn", "Precedent",
                      "Impeccable", "Inadvertent", "Cornucopia", "Detrimental", "Fickle",
                      "Unruly", "Lucid", "Smattering", "Perennial", "Elaborate",
                      "Martial", "Illicit", "Glib", "Buck", "Vacuous",
                      "Debase", "Grovel", "Urbane", "Hamstrung", "Benign",
                      "Pertinent", "Sentimental", "Assuage", "Conducive", "Commendable",
                      "Banish", "Genteel", "Surly", "Assail", "Empathetic",
                      "Uncompromising", "Rankle", "Whimsical", "Euphoria", "Tawdry",
                      "Augment", "Facetious", "Tumult", "Credence", "Derisive",
                      "Retract", "Irk", "Presumption", "Foible", "Credulity",
                      "Impending", "Tact", "Discord", "Brusquely", "Placid",
                      "Destitute", "Tarnish", "Complacent", "Tout", "Connive",
                      "Aphoristic", "Embellish", "Leery", "Derogative", "Goad",
                      "Eke", "Rash", "Smug", "Savvy", "Travail",
                      "Collusion", "Quip", "Exemplify", "Elude", "Devolve",
                      "Pastoral", "Enmity", "Candidness", "Obstinate", "Convoluted",
                      "Peevish", "Unseemly", "Serene", "Squander", "Unprecedented",
                      "Impregnable", "Maxim", "Malevolent", "Steadfast", "Ploy",
                      "Diligent", "Exasperate", "Perturb", "Reservation", "Taxing",
                      "Redress", "Docile", "Incense", "Humdrum", "Eccentric",
                      "Fawn", "Coalesce", "Preempt", "Ascribe", "Implicate",
                      "Foolhardy", "Consecrate", "Veneer", "Evenhanded", "Tribulation",
                      "Wanton", "Behoove", "Besmirch", "Conundrum", "Buttress",
                      "Rakish", "Forthright", "Cohesive", "Rile", "Incumbent",
                      "Presumptuous", "Clemency", "Emulate", "Finagle", "Begrudge",
                      "Cavalier", "Lethargic", "Antedate", "Analogous", "Insipid",
                      "Profusion", "Delegate", "Industrious", "Cerebral", "Precarious",
                      "Prevail", "Deride", "Avert", "Uncanny", "Glean",
                      "Melancholy", "Belittle", "Intermittent", "Piquant", "Irascible",
                      "Discreet", "Hamper", "Dilapidated", "Laborious", "Cumbersome",
                      "Miscreant", "Besiege", "Debunk", "Enumerate", "Abysmal",
                      "Evasive", "Compound", "Antiquated", "Malodorous", "Complementary",
                      "Carping", "Morph", "Stymie", "Futile", "Deliberate",
                      "Qualm", "Vie", "Obliging", "Constraint", "Inkling",
                      "Paradoxical", "Vanquish", "Convivial", "Excruciating", "Resignation",
                      "Creditable", "Misogynist", "Colossal", "Balk", "Perquisite",
                      "Provisional", "Chivalrous", "Decimation", "Champion", "Cosmopolitan",
                      "Differentiate", "Boorish", "Sordid", "Staid", "Snub",
                      "Aphorism", "Inarticulate", "Relegate", "Dispatch", "Amply",
                      "Beg", "Conciliate", "Fractious", "Sedulous", "Apogee",
                      "Jingoist", "Choleric", "Penurious", "Hector", "Attenuate",
                      "Catholic", "Turpitude", "Prosaic", "Diatribe", "Nadir",
                      "Vicissitude", "Artless", "Churlish", "Alacrity", "Apostate",
                      "Cow", "Contentious", "Lascivious", "Indigent", "Zeitgeist",
                      "Supercilious", "Anathema", "Chary", "Equivocate", "Malfeasance",
                      "Byzantine", "Pariah", "Kowtow", "Base", "Expansive",
                      "Imbibe", "Untoward", "Exegesis", "Saturnine", "Insufferable",
                      "Ponderous", "Perfunctory", "Arrant", "Factious", "Truculent",
                      "Feckless", "Expunge", "Defray", "Overweening", "Precipitate",
                      "Jaundiced", "Phantasmagorical", "Blinkered", "Tendentious", "Sybarite",
                      "Gerrymander", "Invective", "Apotheosis", "Excoriate", "Malapropism",
                      "Schadenfreude", "Benighted", "Parvenu", "Sartorial", "Histrionic",
                      "Remonstrate", "Cupidity", "Sangfroid", "Maudlin", "Sententious",
                      "Propitiate", "Vituperate", "Peremptory", "Martinet", "Execrate",
                      "Impecunious", "Juggernaut", "Arch", "Imbroglio", "Hedge",
                      "Quisling", "Venial", "Fell", "Arriviste", "Mellifluous",
                      "Bilious", "Jejune", "Mulct", "Protean", "Disabuse",
                      "Palimpsest", "Curmudgeon", "Pollyannaish", "Quixotic", "Mettlesome",
                      "Picayune", "Pyrrhic", "Expurgate", "Limpid", "Factitious",
                      "Perspicacious", "Litany", "Prolixity", "Solecism", "Semblance",
                      "Importune", "Probity", "Vitriolic", "Plucky", "Bowdlerize",
                      "Punctilious", "Quail", "Unforthcoming", "Umbrage", "Enthrall",
                      "Epiphany", "Mordant", "Portentous", "Maunder", "Duplicity",
                      "Artlessness", "Lugubrious", "Anodyne", "Enjoin", "Effrontery",
                      "Raconteur", "Pecuniary", "Redoubtable", "Hagiographic", "Moribund",
                      "Lampoon", "Cede", "Grandiloquent", "Gaffe", "Charlatan",
                      "Sinecure", "Temerity", "Insouciance", "Derelict", "Approbatory",
                      "Recapitulation", "Anemic", "Provident", "Hail", "Impute",
                      "Flummox", "Prognostication", "Sagacious", "Primacy", "Illustrious",
                      "Lacerate", "Subterfuge", "Unpropitious", "Stalwart", "Nonchalant",
                      "Inviolate", "Peripatetic", "Rarefied", "Puissant", "Flippant",
                      "Encumber", "Incontrovertible", "Hobble", "Patent", "Invidious",
                      "Machinate", "Imperious", "Obstreperous", "Spartan", "Unviable",
                      "Ossify", "Hubris", "Equitable", "Denouement", "Firebrand",
                      "Ribald", "Apposite", "Puerile", "Inure", "Dispensation",
                      "Dovetail", "Surreptitious", "Irrefutable", "Impetuous", "Presentiment",
                      "Cosseted", "Decry", "Unflappable", "Magisterial", "Asperity",
                      "Crestfallen", "Immure", "Crystallize", "Untenable", "Recrimination",
                      "Celerity", "Tempestuous", "Improvident", "Corollary", "Intimation",
                      "Browbeat", "Inanity", "Effervescent", "Ersatz", "Apothegm",
                      "Arrogate", "Atavism", "Vitriol", "Unprepossessing", "Besotted",
                      "Artifice", "Hoary", "Meteoric", "Reprisal", "Empiricism",
                      "Gambit", "Anachronism", "Philistine", "Epigram", "Paragon",
                      "Pith", "Deign", "Disingenuous", "Untrammeled", "Phlegmatic",
                      "Doleful", "Percipient", "Exemplar", "Solicitude", "Truculence",
                      "Appurtenant", "Squelch", "Bemoan", "Ineffable", "Inchoate",
                      "Languish", "Baleful", "Recrudesce", "Objurgate", "Unstinting",
                      "Debonair", "Antic", "Embryonic", "Nettlesome", "Broadside",
                      "Rapprochement", "Brook", "Bristle", "Chagrin", "Chimera",
                      "Panegyric", "Gumption", "Bromide", "Coterminous", "Enormity",
                      "Pontificate", "Transmute", "Bridle", "Impervious", "Ethereal",
                      "Inviolable", "Vaunted", "Inequity", "Autocratic", "Tyro",
                      "Stultify", "Complicit", "Noisome", "Afford", "Elegiac",
                      "Malingerer", "Abjure", "Pellucid", "Facile", "Impugn",
                      "Conflate", "Complaisant", "Unimpeachable", "Discursive", "Internecine",
                      "Callow", "Dolorous", "Desideratum", "Assiduously", "Proscribe",
                      "Obtuse", "Desiccated", "Appropriate", "Fecund", "Aplomb",
                      "Conflagration", "Hauteur", "Unassailable", "Mendicant", "Doughty",
                      "Proselytize", "Solicitous", "Palatable", "Self-effacing", "Turgid",
                      "Trenchant", "Extrapolate", "Evanescent", "Row", "Exiguity",
                      "Obtain", "Bastardization", "Concomitant", "Modicum", "Veritable",
                      "Pillory", "Bereft", "Enamored", "Halcyon", "Capitulate",
                      "Chauvinism", "Demonstrative", "Officious", "Infelicitous", "Diminutive",
                      "Hoodwink", "Adjudicate", "Graft", "Dissemble", "Panacea",
                      "Raillery", "Oblique", "Cataclysm", "Palaver", "Lachrymose",
                      "Abrogate", "Dissolution", "Countermand", "Loath", "Dissipate",
                      "Misattribute", "Ineluctable", "Despot", "Surfeit", "Simulacrum",
                      "Verisimilitude", "Sardonic", "Exorbitant", "Splenetic", "Ebullient",
                      "Flag", "Promulgate", "Eponym", "Canard", "Estimable"};
};
