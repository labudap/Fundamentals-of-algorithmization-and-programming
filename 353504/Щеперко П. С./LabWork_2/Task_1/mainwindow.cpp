#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->plainTextEdit->setPlainText(
        "Летописные упоминания города с 1142 г. и по XVI век присутствуют в формах Гомь, Гомъ, "
        "Гомье, Гомъе, Гомей, Гомьи, Гомій, Гомін, Гомень, Гомин, Гомий, Гомен, Гомин. В этих "
        "формах исследователи усматривают древне-славянское слово гом «холм, бугор».  Река Ипуть, "
        "впадающая в Сож, прорезает каменистую мель. Шум реки, прорывающейся через камни, слышен и "
        "сегодня. Эта мель и перевоз, возможно, дала название городу. Гомей — название порога на "
        "Ипути. От него и пошло название городка (Павловский А. Т. 24.06.2013 г.).  Современная "
        "форма утвердилась только в XVII-XVШ веках. В VІІІ—Х вв. междуречье Десны и Днепра — "
        "территория восточнославянского племеми Радимичи.  «…Радим сел на Соже, от него назвались "
        "радимичи» («Повесть временных лет»).  Восточнославянское племя, которое в ІХ – Х вв. жило "
        "в междуречье верхнего течения Днепра и Десны, в бассейне реки Сож. Занимались "
        "земледелием, скотоводством, промыслами, ремеслами. Название, вероятно, от имени "
        "героя-родоначальника Радима (Радимира). Главные города: Гомель (Гомий), Вжищ на Десне, "
        "Чичерск на Соже.  В VІІІ—ІХ вв. были под властью хазар. В 885 г. покорены киевским князем "
        "Олегом, входят в состав Киевской державы. Добиваются независимости, но в 984 г. киевский "
        "князь Владимир во второй раз покорил радимичей и присоединил их земли к Киевской Руси. В "
        "ХІ в. земли радимичей вошли в состав Смоленского и Черниговского княжеств.  Последнее "
        "упоминание в летописи 1169 г.  «Очевидно они (радимичи) действительно являют собой "
        "некоторое новообразование, что возникло на последней стадии формирования Руси вследствие "
        "каких-нибудь специфических условий. К этому склоняет и то, что территория радимичей "
        "значительно меньше, чем территория любого другого летописного племени» (Михаил "
        "Брайчевский).  Tilda Publishing 1142 – Первое упоминание в Ипатьевской летописи как "
        "владение Черниговского князя в связи с борьбой Ольговичей (потомков черниговского князя "
        "Олега Святославича) и Мономаховичей (потомков великого князя киевского Владимира "
        "Мономаха) за обладание великокняжеским престолом в Киеве. Когда черниговцы сражались с "
        "Мономаховичами на степном пограничье, Ростислав Мстиславович смоленский поддержал своих "
        "родственников погромом окрестностейГомия. И слышавъ оже билися Ольговичи у Переяславля с "
        "стрыем его с Вячеславомъ, и с братом его Изяславом, и поиде на волость их, и взя около "
        "Гомия волость их всю [ПСРЛ, т. ІІ — Ипатьевская летопись. М., стб. 311]Князь Ростислав "
        "МстиславичТаким образом, в середине XII в. Гомий принадлежал Черниговскому княжеству и "
        "имел крепость (о взятии города летопись не говорит).Одно время городом правил внук "
        "Владимира Мономаха, сын Мстислава Владимировича Великого от шведской принцессы Христины — "
        "князь Ростислав Мстиславич (ок. 1108-1167 гг.). Затем его занял второй сын черниговского "
        "князя Давыда Святославича — Изяслав (дата рожд. неизв. — 1161 гг.). Встреча суздальского "
        "князя Юрия Долгорукого с князем Святославом Ольговичем в Москве (4 апреля 1147 г.). "
        "Второе упоминание о Гомии в Ипатьевской летописи датировано 1159 годом. Потерпев "
        "поражение от Изяслава Мстиславовича, великий князь Изяслав Давидович  (бывший князь "
        "черниговский) бежит в Гомий, где собирает дружину и продолжает борьбу за киевский стол.  "
        "Князь же великий киевский Изяслав Давидович, видев беду и напасть на себя, устрашися и "
        "вострепета зело. И восплакав, побеже скоро з братаничем своим со князем Святославом "
        "Владимиричем на Вышеград в Гомью, а по княгиню свою посла гонцев зелоскоро в Киев. Она же "
        "бежа из Киева к зятю своему ко князю Глебу Юрьевичу сыну Долгорукага во град Переяславль "
        "Руский, он же проводи ея до Гомья.В 1161 году власть над Гомелем сначала получил сын "
        "черниговского князя Олега Святославича (Гориславича) — черниговский князь Святослав "
        "Ольгович (ум. 15 февраля 1164 г.), а потом — его сын Олег, при котором город отошёл к "
        "Новгород-Северскому княжеству.  Есть сведения, что в 1335 году Гомельщина находилась под "
        "властью сына Гедимина — великого князя литовского Ольгерда (ок. 1296 — 1377 гг.). Гомей "
        "еще несколько раз упоминался в источниках, но уже без связи с окружающей местностью. В "
        "качестве города «Гомiй» назван в «Списке русских городов дальних и ближних» конца XIV в. "
        "До 1406 года город принадлежал сыновьям Патрикия Ивану и Александру (по другим данным во "
        "2-й половине XIV века Гомелем владел подольский князь Фёдор Кориатович).");
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*

*/
