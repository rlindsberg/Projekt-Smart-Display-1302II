# Vad är en bra projektmetod för små IT-projekt? v1.1

Ett försök att besvara frågan görs i kursen II1302 &quot;Projekt och projektmetoder&quot; vid EECS-skolan

Roderick Karlemstrand, William Lewin, Raman Salih, Robin Nilsson och Bassel Afrem

_Kungliga Tekniska Högskolan_

[Robinil@kth.se](mailto:Robinil@kth.se)

[Ramans@kth.se](mailto:Ramans@kth.se)

[bassela@kth.se](mailto:bassela@kth.se)

williamlewin@kth.se

[ruliu@kth.se](mailto:ruliu@kth.se)



**Abstract (Roderick)****—**

**Projektgruppen har i uppgift från KTH Campus Kista att utveckla en inbygg elektronik, som hänger utanför användarens kontor och visar ett meddelande på en liten display. Projektgruppen är studenter på KTH som läser andra året på högskoleingenjörsprogram i elektronik och datorteknik eller datateknik. Projektdeltagarna läser kursen II1302 Projekt och projektmetoder halv fart i tio veckor.**

**Syfte och mål med kursen (Roderick)–**

**Syftet till projektet är att vara en del av gruppdeltagarnas introduktion till ingenjörsarbetet, som ofta sker i projekt, och därmed förbereda gruppdeltagarna för framtida uppdrag. Man ska i specifik lära sig och tillämpa teorier vad gäller SCRUM och genomföra ett projekt genom iterationer och tydlig rolluppdelning.**

**Kursens huvudsakliga mål är att besvara på frågan &quot;Vad är en bra projektmetod för små IT-projekt?&quot;. Andra delmålen listas nedanför:**

1. **Tillämpa en lämplig projektprocess.**
2. **Kunna upprätta, följa och utvärdera en projektplan, riskanalys och testspecifikationer för typiska IT-projekt.**
3. **Kunna fånga, dokumentera och organisera krav i typiska IT-projekt.**
4. **Kunna bygga en prototyp och felsöka en produkt som är typisk inom IT.**
5. **Personligen kunna konstruera/utveckla en del i ett större system.**
6. **Kunna söka och utvärdera information om komponenter, kommunikationsprotokoll eller andra tekniska specifikationer aktuella för IT-projektet.**
7. **Kunna utvärdera, dokumentera och presentera genomförd konstruktion.**
8. **Kunna reflektera över det sociala samspelet mellan individ, grupp och ledare i en mindre projektgrupp.**
9. **Kunna analysera och föreslå hur man säkerställer att samhällets mål för ekonomiskt, socialt och ekologiskt hållbar utveckling beaktas i projektprodukt och projektprocess.**
10. **Förklara och använda bra personlig arbetsergonomi.**
11. **Uppnått ökade färdigheter i muntlig och skriftlig presentation.**
12. **Kunna delta i IT-projektets ekonomi- och tids-redovisning.**

**Kursens metod för att uppnå kursens syfte och mål. Resultat av kursens metod (Roderick)-  **

**Scrum är en agilt ramverk för att hantera utvecklingen av komplexa produkter. Projektgruppen har valt att använda olika metoder inom Scrum för att ta fram vår produkt och samtidigt tillämpa och utvärdera dem valda metoderna. Under kursens gång har projektgruppen upprättat projektplan och andra dokument för ett typiskt IT-projekt och framgångsrikt färdigställt en prototyp av den produkt kunden hade beställt. Mindre presentation, så kallad sprint-demo och slutpresentation har ägt rum i slutet av en och varje iteration och i slutet av projektet.**

**Agil-utveckling i jämförelse med traditionell utvecklingsmetod t.ex. vattenfall har färre och mindre dokument att upprätta. Anledningen till detta är att man inte behöver att strikt följa planerna, utan de ändras oftast efter kundmötet i slutet av en iteration. Nackdelen med det är att man arbetar mindre strukturerat. Rollfördelning i Scrum fungerade övergripligt bra, dock kan en projektmedlem få en roll som denna är mindre bekväm med och därför omotiverad att arbeta och ta sitt ansvar. Scrum är en projektmetodik som fungerar för små IT-projekt. Men man bör se över bristerna och anpassa efter projektgruppen.**

**Keywords** — **Rollspel, projekt, rollansvar, kursmål, Scrum, Projekttavla, sprint, klassdiagram, arkitektursbeskrivning**

1. **I.**** Om detta dokument och undersökning (Raman, Roderick)**

Denna rapport är resultatet av ett projektarbete på tio veckor som utförts på halvfart under vårterminen 2018 på KTH Campus Kista. I rapporten beskriver vi metoden vi använde för att besvara frågan &quot;Vad är en bra projektmetod för små IT-projekt?&quot;. I del I, …. del II ... del III, listar vi de litteraturerna som vi har läst och utgick ifrån, för att hitta ingång och möjligheter i undersökningen. Även vilka ansatser som var ett underlag inför undersökningen. Del IV innehåller en beskrivning av metoden vi använde oss av i undersökningen. Del V innehåller framställningen av rollerna vi tog på oss i syfte av att genomföra projektmetoderna.  Del VI innehåller resultatet vi fick från undersökningen, där vi analyserar vilka rollspecifika arbetssätt vi fick använda under ett och varje ansvarsområde samt vilka alternativa arbetssätt vi föreslår. Sedan värderar vi subjektivt deras bidrag till projektet.

Efter fyra iterationer har projektgruppen tagit fram produkten &quot;smart display&quot; som är en digital display inbyggd i ett kretskort. Användaren kan lämna meddelande till displayen genom att ansluta sin mobil till produktens trådlösa nätverk, och sedan skriva meddelande i en applikation.

1. **II.**** Introduktion (RAMAN)**

1. **A.**** Bakgrund**

Som ingenjör stöter man förr eller senare på ett IT-projekt. Därför under denna kurs förväntas projektdeltagarna läsa in teorier och tillämpa dem i detta projekt. Utgångspunkten för ett projekt är enligt Dr. Sven Eklund att en grupp människor har en gemensam uppgift att utföra, och baserat på denna uppgift kan man dela upp projekt i olika kategorier [REFERENS TILL EKLUND].

- _Forskningsprojekt_. En sökande typ av projekt med lösa tyglar och tidsramar, ofta är även målet lite diffust då man inte oftast vet vad slut resultatet blir.
- _Utredningsprojekt_. Dessa är även sökande typ av projekt men samtidigt starkt problemorienterande. Då målet är oftast att finna ett resultat till ett visst datum.
- _Utvecklingsprojekt._ Målet med dessa är att utveckla något nytt, de klassas då mer som visionära typer av projekt. Dessa typer av projekt är etapp indelade, och varje etapp är beroende på resultatet från de föregående etapperna.
- _Genomförandeprojekt._ Målet med dessa handlar om att införa något nytt i en verksamhet.
-  _Konstruktionsprojekt._ Ett lyckad utvecklingsprojekt blir ofta ett konstruktionsprojekt. Dessa har en detaljerad planering, tydliga mål och en deadline.

Målet med kursen är att delta i ett rollspel som är ett IT-projekt av typen konstruktionsprojekt. Varje gruppmedlem ska delta från början till slut, varje deltagare antar en specifik roll som den ska agera som under projektets genomgång. Kursens övergripande mål är att se hur det är att vara med i en projektgrupp och testa olika teorier kring projekt och projektmetoder. Önskan är att kunna besvara frågan &quot;Vad är en bra projektmetod för små IT-projekt&quot;?

Som deltagare i projektgruppen kommer man vara med och förhoppningsvis leda projektet till framgång, men i vissa fall kommer man tyvärr att misslyckas med sitt mål, det kan bero på saker som överdragna tidsplaner och ouppfyllda funktionalitets-mål. Under senaste tiden har det utvecklats ett flertal projektmetoder som används varierande beroende på hur många som arbetar i projektet, hur mycket tid/pengar som ska investeras och hur produkten ska levereras. Så det finns idag olika metodiker för varje enskilt behov som behöver fyllas av gruppen. De populäraste såsom de agila metoderna [[REFERENS TILL POPULARITET]](https://teamweek.com/blog/2017/09/top-project-management-methodologies/) som är särskilt intressanta för vårt typ av projekt. . [[REFERENS TIll AGILA PROJEKTMETODER](https://media.wiley.com/product_data/excerpt/44/11189910/1118991044-8.pdf)]

1. **B.**** Problemformulering**

En generell beskrivning är att en bra projektmetod är en som tar hänsyn till kundens krav och visioner medan samtidigt låter varje person i utvecklingsteamet vara och jobba som den bästa versionen av sig själv. Det är här rätt typ av projektmetod kommer in i bilden. Med rätt typ menas sättet som projektet leds på och på de regler som gruppen ska följa, t.ex. angående dokumentation, kommunikation och mötesrutiner.

Vår hypotes är att nuvarande undersökta och välutvecklade metoder med eventuella modifikationer kan leda till ett svar på vår fråga. Metoderna vi främst vill testa är då EssUp och Scrum då dessa är både omtalade och har en del kvalitativ bakgrund.

1. **C.**** Undersökningsstrategi/lösningsstrategi**

För att besvara frågan har vi praktiskt testat olika projektmetoder för att kunna besvara frågan &quot;Vad är en bra projektmetod för små IT-projekt&quot;? samt försöka testa hypotesen vi presenterat. Vi gör detta genom att iterativt utföra ett utvecklingsprojekt som går ut på att leverera en färdig teknisk produkt inom en viss tidsram. Genom att på de olika iterationerna utvärdera vad som funkar bra och mindre bra kan vi se vad som är en bra metod för denna typ av projekt. Då alla i gruppen inte har mycket erfarenhet av denna typ av arbete fick vi alla i gruppen var sin roll som den skulle dyka in på djupet på och sedan under kursens gång dela med sig av roll-specifika kunskaper, då det skulle bli ett överflöd av information om alla deltagare lärde sig allt om alla de olika rollerna som ofta dyker upp på konstruktionsprojekt.

1. **D.**** Relaterade arbeten**

Projektmetodikers utveckling och forskning har genom åren blivit alltmer populärt. [Kloppenborg och Opfer](https://www.pmi.org/learning/library/pm-research-trends-interpretations-predictions-2016)utförde en fördjupad granskning av undersökningarna inom projektmetodiker från 1960 till och med 1999, dessa kommer i sin tur från cirka 3500 akademiska avhandlingar, tidskriftsartiklar och rapporter. De procentandel av artiklar publicerade per årtionde är avbildade i Figur 1.

Figur 1:Procentandel av projektlednings forskningsartiklar per årtionde Källa: utvecklad för denna rapport; datakälla [Kloppenborg &amp; Opfer](https://www.pmi.org/learning/library/pm-research-trends-interpretations-predictions-2016)

Här kan man se att forskningen inom projektmetodiker ökar till mängden, med en kraftig ökning på 1990-talet. Faktum är över 60% av all forskning inträffade på 90-talet, vilket visar att det vetenskapliga området för projektledning växer i snabb takt.

[En studie är ett Examensjobb skriven av Annika Katter vid Yrkeshögskolan Novia i Helsingborg om &quot;Förslag till en ekonomiskt hållbar projektmetod, En fallstudie vid Sydweb&quot;](https://kth.instructure.com/courses/5226/files/766877/download?wrap=1) studien kom fram till att det inte går med säkerhet att bekräfta att projekten som hon hade observerad under fallstudiens tidsram gick med förlust pga. bristfällig projektmetod. Hon hävdar dock att det finns utan tvekan ett behov av att förbättra Projektmetoderna som användes vid tillfället, vilket ger oss förtroende att vår hypotes kan stämma då vi hävdar att modifikationer kan behövas för att bestämma vad som är en bra projektmetod för små IT-projekt.

1. **E.**** Avgränsningar**

De slutsatser som dras i denna rapport är en praktisk studie genomförd i ett mindre IT-projekt och bör granskas med detta i åtanke.

Då vi är en grupp på 5 deltagare klassas vi som en mindre grupp, en effektiv grupp storleksmässigt kan beskrivas generellt som en grupp på upp till cirka 7–8 personer där de samarbetar för att leverera en färdig produkt. Enligt Eklund (källa? /William) så hjälper det oftast inte med grupper med mer än 8 deltagare då kommunikationen blir svårare att uppehålla, antalet möten och andelen skriven information måste också öka för att hålla sig i takt med den större gruppen. För att lösa detta kan man göra olika typer av indelningar t.ex. en hierarki med undergrupper.

Då våran grupp är mindre kommer det vara enklare att ge personlig feedback då avståndet mellan deltagarna kommer vara mindre. Den enskildes ansvar kommer även öka så de roll specifika uppgifterna kommer vara av stor vikt för projektets framgång.

1. **III.**** Teori och ingenjörspraxis (WILLIAM OCH RAMAN)**

**Detta kapitel listar och i viss mån beskriver teorier och ingenjörspraxis som använts i undersökningen. Det finns två underkapitel, Litteraturstudie och Förstudie.**

1. **F.**** Litteraturstudie**

**I detta kapitel anges litteratur och andra källor som har använts för att hitta ingångar och möjligheter i undersökningen? Förutom de källor som anges finns förmodligen andra, och kanske bättre, källor som denna studie inte använts sig av.**

**Undersökningens görs utifrån övergripande projektmetoder men också utifrån specifika metoder och arbetssätt som används av olika kompetenser [ref Essence] i projektets team. Vilka dessa kompetenser är framgår av texten nedan.**

En litteraturstudie genomfördes i förberedelse för att börja planera och fundera över vilka metoder som skulle undersökas och testas genom projektets gång. En del litteratur lästes av samtliga deltagare och en del lästes individuellt för att sedan visas praktiskt för de andra deltagarna i gruppen.

**Övergripande källor för hela projektet:**

- [Scrum and XP from the trenches](http://wwwis.win.tue.nl/2R690/doc/ScrumAndXpFromTheTrenchesonline07-31.pdf)
- Grunder inom projektarbete, Arbeta i projekt - individen, gruppen, ledaren
- Essence 1.0
- [Introduction to Agile Project Management](https://media.wiley.com/product_data/excerpt/44/11189910/1118991044-8.pdf)
- [Survey of Agile Tools Usage and Needs](https://kth.instructure.com/courses/5226/files/766879/download?wrap=1)
- Förslag till en ekonomiskt hållbar projektmetod
- [Kanban and Scrum - making the most of both](https://www.infoq.com/minibooks/kanban-scrum-minibook)
- Industrial-Scale Agile from craft to Engineering
- Delar av [Software Engineering](https://www.amazon.com/Software-Engineering-9th-Ian-Sommerville/dp/0137035152)
- [Exjobbsrapport från Finland av Annika Katter, 2015](https://kth.instructure.com/courses/5226/files/766877/download?wrap=1)

- Kund-och-kravansvarig - kompetens enligt Essence 1.0 , [Making sense of the organization](https://books.google.se/books?hl=sv&amp;lr=&amp;id=2IMF4iwKeHoC&amp;oi=fnd&amp;pg=PR3&amp;dq=Weick,+K.+E.+(2001).+Making+Sense+of+the+Organization.+Oxford,+UK:+Blackwell+Publishers.&amp;ots=lpF4aeQT0A&amp;sig=xQsYa3syBgMUpfqW9zWmuZOPg8A&amp;redir_esc=y#v=onepage&amp;q&amp;f=false) , [Återanvändbara use cases inom telekomindustrin](http://lup.lub.lu.se/luur/download?func=downloadFile&amp;recordOId=1337008&amp;fileOId=1646235), [Use Case 2.0](https://www.ivarjacobson.com/publications/white-papers/use-case-ebook).
  - Kravspecifikation
  - &quot;Use cases&quot;, hur de definieras &amp; beprövad erfarenhet
  - &quot;User stories&quot;
  - Visionssamanställning

- Projektledare- [Alpha State Cards- Reference guide](https://kth.instructure.com/courses/5226/files/766895/download?wrap=1), https://practicelibrary.ivarjacobson.com/content/essential-unified-process
  - Alpha State Cards
  - Riskhantering
  - EssUp

- Systemarkitekt- [Systems and software engineering — Architecture description](https://kth.instructure.com/courses/5226/files/766881/download?verifier=xFtD4tQgAmoMqLCuGjZzKPq4vp5ZRfDKz24lAwOK&amp;wrap=1), [Architectural Blueprints—The &quot;4+1&quot; View Model of Software Architecture](https://kth.instructure.com/courses/5226/files/766893/download?verifier=rP5B00U2NNgxiCttnOWayAoL5AuEoi9qZjEzqDqb&amp;wrap=1), [A First Course in Object Oriented Development](http://leiflindback.se/iv1350/object-oriented-development.pdf)
  - 4+1 view modelen
  - Arkitektur - standardisering
  - UML-diagram
- Utvecklingsansvarig - [Info om Git från IN-sektionen](https://kth.instructure.com/groups/33682/files/767876/download?wrap=1), [WebApplicationsWithUML-Conallen1999](https://kth.instructure.com/groups/33682/files/767883/download?wrap=1)
  - Githantering
  - Webbsidans modellering
- Testansvarig,, [Testdriven utveckling för Java-utvecklare](https://kth.instructure.com/groups/33683/files/767944/download?wrap=1)
  - Hur skriver man tester och få dem bli godkända?

1. **G.**** Förstudie**

Enligt undersökningsstrategin så skall någon projektmetod prövas i ett praktiskt projekt och utifrån de erfarenheter som fås görs en värdering av använda metoder. Frågan är då vilken ansats av projektmetod som skall användas. Eftersom erfarenheten av projektarbete hos studenterna är liten så fanns det ett färdigt förslag till ansats av projektmetod. Detta projektmetodförslag kan senare modifieras av projektgruppen.

Tidigare kursomgångar och lärarens förslag har mynnat ut i följande ansats. Projektmetoden framgår med god tydlighet av de arbetstavlor som definierats i ansatsen, se figurer och bilder.

Resultatet av förstudien är att metoderna, som anges i följande kapitel, har valts för undersökningens genomförande.

Eftersom att projektgruppen har en begränsad erfarenhet inom projektarbete i grupp presenterades ett förslag av kursens examinator som ett resultat av tidigare kursomgångar.
Genom att praktiskt genomföra, diskutera och reflektera över de metoderna som undersökts i litteraturstudien kan senare en objektiv sammanställning göras av medlemmarna i gruppen.

För att kunna bestämma vad som är en bra projektmetod utan bred erfarenhet inom gruppen får erfarenheten tas från de som har forskat och jobbat mycket med projektmetoder.

Projektet genomförs i en mindre skala och med hjälp av praktisk övning och teoretiska studier från dokumenterad erfarenhet kan ökad förståelse inom ämnet ökas inom gruppen och leda till bra förhoppningar om att svara på frågeställningen.

**Arbetstavla från SCRUM-metoden**

**Scrum-inspirerad arbetsteknik**

**EssUP-modellen, vilar på Essence 1.0**



1. **IV.**** Undersökningsmetoder(ROBIN/BASSEL)**

**Detta kapitel beskriver vilka metoder som använts i undersökningen. Metoderna är valda och specificerade så att de skall kunna ge svar på ett antal följdfrågor som identifierats i denna undersökning. Först anges frågorna och sedan följer metodbeskrivning.**

1. **H.**** Frågor att besvara i undersökningen (Robin)**

Frågorna kategoriseras i följande kategorier:

1. **1.** Hur skall man bedöma/redovisa om en delprojektmetod eller praktik är bra?
2. **2.** Hur kan man kategorisera, välja, och namnge projektmetoder (projektpraktiker) och (verklighetsbeskrivning) så att diskussionen om dito blir begreppsmässigt konsisten för ingenjörer inom IT-området (s k ontologi?).
3. **3.** Vilka ansvarsroller skall användas som ansats i projektet?
4. **4.** Vad består ett projekt av och vilka metoder/praxis skall användas, undersökas och bedömas? Vilken ansats skall göras?

Här är de frågeställningar som vi har valt att besvara i undersökningen:

- --Vilka delar består ett litet IT-projekt utav och vilka metoder bör användas och bedömas?
- --Hur ska man bedöma att en metod eller praktik funkar bra?
- --Vilka ansvarsroller ska användas i projektet och vilka metoder ska användas för att dessa ska fungera effektivt och fylla sin funktion?

1. **I.**** Metodbeskrivning (Bassel)**

Metoden för att samla data i denna fråga blir induktiv då erfarenheten i gruppen är ytterst liten. Arbetssättet blir att efterhand som projektet fortskrider så förs bedömningsområden som anses vitala och bedömningskriterier in i en tabell kontinuerligt. Tabellen, se kapitel &quot;Resultat&quot;, och dess utformning förbättras också hela tiden.

För att bedöma om en projektmetod är bra bör den prövas och utvärderas för att se vilka delar som var mest värdefulla och vilka som kanske kan förändras, förbättras eller elimineras för det specifika ändamålet. Sedan utvärderar man efter genomförandet av projektmetoden om den är bra eller mindre bra beroende på resultat och effektivitet.

Metoden vi använde i vårt projekt var Scrum. Vi har fördelat ansvar i fem olika kategorier, Projektledning, Kund och krav, Utveckling och design, Arkitektur, och Test. Varje student ska ta ansvaret för sitt område, och se till att organisera, leda och delegera ansvar till de andra studenterna. Innan projektet började hade vi noll erfarenhet och vi fick läsa in oss för att få kunskap om vad våra roller gör...

&quot;Om någon annan ska göra samma tester ska samma resultat uppnås, samma resultat varje gång&quot; (källa? /Roderick)

&quot;Hypotes: EssUP är en bra projektmetod&quot;



**Metod 2: Begrepp som används följer om möjligt OMGs standard (OMG, 2013)**

**Figur 1 Begrepp (Elvesæter, Benguria, &amp; Ilieva, 2013)**

1. **V.**** Genomförande**

**I följande kapitel redovisas viktiga beslut, förändringar och anpassningar som gjorts i projektmetod, projektpraktiker, värderingar, beslut mm som gjorts under studiens genomförande.**

1. **J.**** Kund-och-kravansvarig (William)**

Efter att visionen från vår beställare var färdig, skapades en kravspecifikation inom gruppen för att säkerställa vilka tekniska mål som produkten var tvungen att uppfylla för att nå upp till beställarens vision.
Utifrån kravspecifikationen kunde sedan en riskanalys sammanställas där risker och dess påverkan beskrivs så att arbetet kunde genomföras med detta i åtanke. När vi planerade arbetet som skulle utföras bestämde vi oss för att hålla oss till det iterativa arbetssättet som används i övriga projektet för att driva arbetet mot en färdig produkt så fort som möjligt. Vi diskuterade även vad som krävdes av hårdvaran för att hantera både de krav vi sammanställde och kundens vision.
Det iterativa arbetssättet ledde även till att testning av de olika komponenterna skedde kontinuerligt och lät oss identifiera fel fort och lösa de så fort som möjligt.
Den iterativa lösningen öppnade upp för att introducera hårdvaru-konstruktionen i SCRUM-arbetet. Eftersom att utvecklingen i stories fortsatte krävdes det att hårdvaru-utvecklingen genomfördes i etapper för att inte skapa en flaskhals. När en story var delvis klar kunde det avgöras att det var dags för att utveckla hårdvaran tillhörande just den storyn.
I varje steg av hårdvaruutveckling skrevs även ett test som var produkten var tvungen att klara för att sedan börja jobba på produkten tills testet kunde köras med gott samvete. Om produkten inte klarade testet så fortsattes utvecklingen tills den klarade testet. Denna metod kallas TDD, test driven development och är direkt tagen från [Knibergs häfte.](http://wwwis.win.tue.nl/2R690/doc/ScrumAndXpFromTheTrenchesonline07-31.pdf) I varje SCRUM-möte togs även status för hårdvaruutveckling upp som en mötespunkt för att se till att eventuella problem kunde tas tag i som en enad grupp.

1. **K.**** Projektledning (Roderick)**

Detta projekt sträcker sig i tio veckor och var uppdelat i fem iterationer. Under dem första fyra iterationerna ska projektgruppen ta fram en prototyp för kretskort och sedan utveckla mjukvaran för produkten. I den sista iterationen ska en slutrapport färdigställas och skickas in.

En och varje iteration, så kallad sprint, inleds med ett planeringsmöte. Scrum-mastern går igenom &quot;produkt-backlog&quot; och &quot;sprint-backlog&quot; för att lyfta fram &quot;stories&quot; (= de som produktägaren bryr sig om) som vi skulle utveckla i den aktuella sprinten. Vi använde frasen &quot;Som…, jag vill…, eftersom…&quot; för att förstå kundens behov. Sedan delar vi upp &quot;stories&quot; i många &quot;tasks&quot; (= produktägaren inte bryr sig om). De roller som har koppling till dem &quot;tasks&quot; får uppgift att lösa dem.

Under en och varje sprint arbetade vi ca. 16 timmar i veckan. Arbetspasset börjar med ett scrum-möte för att öka projektdeltagarnas förståelse i sin uppgift och sitt ansvar. Passet slutar med en närvarokontroll och tidrapport. Vid slutet av en sprint släpper vi produkten till produktägaren och presenterar hur mycket vi hade åstadkommit. Direkt efter presentationen samlas hela projektgruppen för en &quot;retrospektive&quot; (= reflektionsmöte), där alla får möjligheten att bidra till utveckling av projektet.

Projektledarens ansvar handlar inte bara om att planera och leda projektet framåt, utan också hantera risker och konflikter, se till att alla blir hörda, skapa förtroende, ta fram utbildningsplan, motivera projektgruppen mot uppsatta mål, fullfölja reglerna och lagstiftningarna och sist men inte minst vara bron mellan projektgruppen och kunden. Därför spelar projektledare en central roll i projektet. Det främsta egenskapen hos en skicklig och lämplig projektledare är ledarskapet. Ett misstag som många projektledare gör är att inte tillräcklig disciplinerad. En kompetent projektledare har fullt självförtroende att lita på sina beslut och ifrågasätta någon annans ursäkt, är inte rädd för att säga nej till en projektdeltagares orimliga krav och vara den som kanske alla hatar. Eftersom en bra projektledare ska veta själv vad som är rätt eller fel och vad som är bäst för projektgruppen.

Detta har visat sig vara svårt i vårt projekt eftersom den person som har varit en vanlig kursare fick nu befogenheter att bestämma över andra. Konsekvensen blev att andra gruppmedlemmar har haft svårt att lita på projektledaren och det uppstod därför konflikter. För en extrovert person innebär det att man konfronterar projektledaren medan för en introvert person innebär det tysta rebeller, dvs. göra tvärtom som projektledaren säger eller helt uteblir att göra sin del i projektet. Det medför också stor risk att andra projektdeltagare börjar &quot;testa gränser&quot;, vilket gör det svårt att komma till tillståndet &quot;samarbeta&quot; i Alpha State Cards.

1. **L.**** Utvecklingsansvar (Robin)**

I min roll som konstruktions- och utvecklingsansvarig var det viktigt att försöka få en helhetsbild över vad för produkt som skulle utvecklas, så jag var tvungen att hela tiden samarbeta med kund-och-kravansvarig samt arkitekt för att planera struktur för hemsidan så att den uppfyller de krav som ställs. I våra scrummöten såg jag till att se till att vi var överens om hur vi vill att utveckling av produkten bör ske. När vi hade en klar bild av upplägg på hemsidan, så delade vi in jobbet i 3 delar. En fick ta huvudansvar för att registrering, inloggning och utloggning, en annan fick ansvar över meddelandehantering. Den tredje fick huvudansvar över webbserver och Raspberrypien. De övriga två medlemmarna fick gemensamt ansvar över display och tillhörande c-kod. Inför både skrivande av php och c skapades en utvecklingsplan som vi hade som utgångspunkt kring några generella regler som skulle följas. Utvecklingsplanen användes också för att sätta lite regler kring github. Så när vi satt samlade som grupp satte vi upp reglerna kring hur vi ska använda github. Men sen under själva kodandet så kunde man bara följa planen och sköta sin del individuellt. Under iteration tre började vi att inse att det fanns problem kring kommunikationen med displayen och raspberrypien och att vi kanske inte skulle få tid nog att lösa detta. Då fick vi komma på plan b, c osv. Därmed uppdaterade vi uml-diagrammet till hemsidans klasser och la till en display-klass som fick agera som potentiell ersättning.

1. **M.**** Arkitet (Raman)**

(saknas innehåll /Roderick)

1. **N.**** Testansvarig (Bassel)**

Som testansvarig hade jag som uppgift att under hela projektet och i varje sprint, att förbereda tester för olika delar och komponenter som är grunden som avgör  att produkten fungerar som den ska, och att dess funktionalitet följer kravspecifikationen. Jag hade förberett en testplan och teststrategi som var underlag till testprocessen genom hela projektet. I senare stadier genom projektet fick jag ändra och  utveckla testplanen på grund av brist på testkunskap i början av projektet, och även avvikelser som vi stötte på under utvecklingen, så att testen ska passa för förändringen i utvecklingsplanen,  arkitekturen, eller i kravspecifikationerna. I varje scrummöte tog vi upp vilka delar som skulle utvecklas och vilka som skulle testas enligt testspecifikation som jag hade redan förberett. I testspecifikationen ingick en tydlig strategi för hur den delen skulle testas, med testinput och förväntat output, och baserad på resultatet från testet så godkände jag testet och fortsatte vi vidare med produktutvecklingen. I fall testet var underkänt, vi felsökte problemet och prioriterade att få den delen att gå igenom testet så att vi kunde gå vidare och följa planen. Testspecifikationerna följde kravspecifikationerna.

1. **VI.**** Resultat**

1. **O.**** Projektgruppen**

**Tabell I
Bedömningar ….**

| **Ansvarsområde** |   |
| --- | --- |
| **Arbetssätt/metod/praxis** | **Omdöme** | **Alternativ** |
| **Ansvarsfördelning** | **Projektroller** | **Bra för att fördela information om roller i en projektgrupp mellan deltagare.**** Rollerna var inte tillräckligt skräddade för att uppfylla sin fulla potential. **|** Gruppledare delar ut ansvar vid varje iteration** |
| **Projektstatus** | **SCRUM-tavla** |   | **Kanban-board** |
| **Projektstatus** | **SCRUM-möten** |   |   |
| **Kommunikation** | **Facebook Messenger** | **Facebook användes redan mycket inom gruppen för kommunikation i övrigt. Enkelheten i att bara skapa en ny grupp med existerande användare gjorde det lätt att implementera.
Möjligheten att planera möten direkt i appen fungerade bra för oss för att våra personliga scheman inte alltid stämde överens.
En negativ aspekt är att det inte finns möjlighet att markera viktiga meddelanden och att det blev svårt att gå tillbaka och hitta de. **|** Slack** |
| **Utvärdering** | **Retrospectives** | **Alla fick en möjlighet att diskutera det som både fungerade bra och behövde förbättras, inom gruppen och rollspecifikt.**** Retrospective hade fungerat bättre om vi hade varit mer kritiska angående vad som inte fungerade och behövde korrigeras. **|** After Action Review** |
| **Tidsrapportering** | **Google-ark** | **Projektledaren kunde se om mycket tid går åt utan vidare resultat, på så sätt kan effektiviteten ökas.** | **toggl.com** |
|   |   |   |   |



1. **P.**** Utvecklingsansvarig (Robin)**

**Tabell 2
Bedömningar ….**

| **Ansvarsområde** |   |
| --- | --- |
| **Arbetssätt/metod/praxis** | **Omdöme** | **Alternativ** |
| **Modellering** | **Klassdiagram** | **Klassdiagrammet som skapades var inte särskilt avancerat och designat på ett sätt som ska effektiviseras programmerandet av webbsidan. Däremot skulle det kunna gjorts utförligare och med bättre struktur om man tänker sig att det projektet ska byggas på av ingenjörer som inte är insatta i projektet.** | **MVC - diagram**** Med högre cohesion och mindre coupling.** |
| **Planering** | **Design och Utvecklingsplan** | **Det bästa som utvecklingsplanen gav, var att det fick oss att sätta oss ner och diskutera hur utvecklingen skulle gå till och vi fick struktur på det hela.** |   |
| **Versionshantering** | **Github** | **Underlättade koduppdelning för de individuella delarna i stora systemet, samt höll projektet objektorienterat** | **OpenCVS** |



1. **Q.**** Kund-och-kravansvarig (William)**

**Tabell 3
Bedömningar ….**

| **Ansvarsområde** |   |
| --- | --- |
| **Arbetssätt/metod/praxis** | **Omdöme** | **Alternativ** |
| **Vision från kunden** | **Use Cases /
User stories** |   |   |
| **Kravhantering** | **Kravspecifikation** |   |   |
| **Kommunikation med kund** | **Sprint demo** |   |   |
|   |   |   |   |
|   |   |   |   |
|   |   |   |   |

1. **R.**** Arkitekt (Raman)**

**Tabell 4
Bedömningar ….**

| **Ansvarsområde** |   |
| --- | --- |
| **Arbetssätt/metod/praxis** | **Omdöme** | **Alternativ** |
| **Arkitektur** | **UML-diagram** | **De olika diagrammen som skapades gav gruppen en bra överblick över hur systemet skulle byggas upp. De visade tydligt hur de olika delsystemen skulle kopplas samman. Men det saknades detaljer så den som ej är insatt i projektet kan i vissa fall ha svårt att hänga med.** |   |
| **Arkitektur** | **4+1-modellen** |   |   |
| **Arkitektur** | **konceptuell modell** |   |   |

1. **S.**** Testansvarig(Bassel)**

**Tabell 5
Bedömningar ….**

| **Ansvarsområde** |   |
| --- | --- |
| **Arbetssätt/metod/praxis** | **Omdöme** | **Alternativ** |
|   | **Test-Driven Development** | **Användandet av detta arbetssätt hjälpte oss att säkra att vår produkt följde kravspecifikationerna,  genom att inkrementellt testa koden och de olika hårdvarudelarna som ingick i projektet.  ** |   |
|   |   |   |   |
|   | **Test-cases** | **Att skapa test-case för varje use-case hjälpte med att säkra att all givna funktionaliteterna från kunden är testade och uppfyller dess krav.** |   |
|   |   |   |   |
|   |   |   |   |
|   |   |   |   |

1. **T.**** Projektledare**

**Tabell 6
Bedömningar ….**

| **Ansvarsområde** |   |
| --- | --- |
| **Arbetssätt/metod/praxis** | **Omdöme** | **Alternativ** |
| **Eliminera risker** | **Riskhantering** |   |   |
| **Projektledning** | **Projektdefinition** |   |   |
| **Projektutveckling** | **scrum-möte** |   |   |
| **Arbetsfokus** | **Burndown-chart** |   |   |
| **Projekttillstånd** | **Alpha State Cards** | **Användbara om de implementeras tidigt i projektet.**  **&quot;Team&quot; &amp; &quot;Way of Working&quot;-korten var mest givande då arbetsmetoderna inte var formellt etablerade på något annat sätt.** |   |
|   |   |   |   |
|   |   |   |   |

1. **VII.**** Diskussion**

**Allmän diskussion. Vad säger resultatet om &quot;Vad är en bra projektmetod för små IT-projekt&quot;?**

**&quot;Det som inte fungerar i ansatsen skall tas upp här&quot;**

**&quot;Var kritisk till undersökningsmetoden  och resultatet&quot;**

1. **U.**** Metoddiskussion**

**Validitet**

&quot;Är det legit att göra som vi gjorde? Samla information, jobba iterativt osv&quot;

**Reliabilitet**

**&quot;Är det säker information? Pålitligheten i resultatet, säkert att metoden leder till samma resultat? Kommer man fram till annat om man gör om samma sak?&quot;**

För att besvara frågan...

Kombinationen av empirisk analys med teoristudier för att värdera och undersöka projektmetoder är ett bra underlag

1. **V.**** Resultatdiskussion**

**Validitet**

&quot;Är det legit att göra som vi gjorde? Samla information, jobba iterativt osv&quot;

**Reliabilitet**

**&quot;Är det säker information? Pålitligheten i resultatet, säkert att metoden leder till samma resultat? Kommer man fram till annat om man gör om samma sak?&quot;**

Frågan som ska besvaras leder en till att tro att det finns en metod som fungerar bra för alla små IT-projekt. Enligt våra beprövade resultat beror metodernas effektivitet mest på hur de implementeras.

Att följa en väldokumenterad projektmetod från pärm till pärm leder nödvändigtvis inte till en bra produkt med felfri utveckling.

1. **W.****&quot;Knyt ihop säcken&quot;**

1. **X.**** Bid****rag till vetenskaplighet, ingenjörserfarenhet (studenterfarenhet?)**

Framtida förbättringar….

**Slutord**

**Eventuella slutord.**

**Berätta något om produkten ni konstruerade, ange en länk till videopresentation?**

I slutändan blev inte produkten det vi hade tänkt oss, men vi lyckades ändå komma med en alternativ lösning, och det viktigaste är erfarenheter av projektarbetet som vi tar med oss.

&quot;Referens till github med resultaten&quot;

Referenser

Eklund, S. (2010). _Arbeta i projekt: individen, gruppen, ledaren_: Studentlitteratur.

Elvesæter, B., Benguria, G., &amp; Ilieva, S. (2013). _A comparison of the Essence 1.0 and SPEM 2.0 specifications for software engineering methods._ Paper presented at the Proceedings of the Third Workshop on Process-Based Approaches for Model-Driven Engineering.

Elvesæter, B., Striewe, M., McNeile, A., &amp; Berre, A.-J. (2012). Towards an Agile Foundation for the Creation and Enactment of Software Engineering Methods: The SEMAT Approach. _Second Workshop on Process-based approaches for Model-Driven Engineering (PMDE 2012)_.

Kruchten, P. B. (1995). The 4+ 1 view model of architecture. _Software, IEEE, 12_(6), 42-50.

OMG. (2013). Kernel and Language for Software Engineering Methods (Essence).  1.0. Retrieved 7 May, 2015, from [http://www.omg.org/spec/Essence/1.0/](http://www.omg.org/spec/Essence/1.0/)
