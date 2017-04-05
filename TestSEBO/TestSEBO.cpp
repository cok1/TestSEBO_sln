#include "TestSEBO.h"

TestSEBO::TestSEBO(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	connect(ui.btnAjouter, SIGNAL(clicked()), SLOT(valider()));

	majAffichageTable();
}

void TestSEBO::valider()
{
	// Création du template de la chaîne de connexion
	QString connectionTemplate = "DRIVER={SQL SERVER};SERVER=%1;DATABASE=%2;";

	// Remplissage des paramètres
	QString connectionString = connectionTemplate.arg("serveur-sql2012\\server2012").arg("Sebo_Carys");

	// Création de l'instance
	QSqlDatabase db = QSqlDatabase::addDatabase("QODBC3");

	// paramétrage de la connexion
	db.setDatabaseName(connectionString);
	db.setUserName("capelli");
	db.setPassword("developpeur");

	if (db.open())
	{
		ui.lblResultat->setText("Connexion établie");
		
		QSqlQuery query;
		query.prepare("INSERT INTO Categorie (LibelleCategorie, Tva) VALUES(:libelle, :tauxTva)");

		query.bindValue(":libelle", ui.leSaisieLibelle->text());
		query.bindValue(":tauxTva", ui.spTauxTva->value());
		query.exec();

		db.close();
	}
	else
	{
		ui.lblResultat->setText(db.lastError().text());
	}

	majAffichageTable();
}

void TestSEBO::majAffichageTable()
{
	// Création du template de la chaîne de connexion
	QString connectionTemplate = "DRIVER={SQL SERVER};SERVER=%1;DATABASE=%2;";

	// Remplissage des paramètres
	QString connectionString = connectionTemplate.arg("serveur-sql2012\\server2012").arg("Sebo_Carys");

	// Création de l'instance
	QSqlDatabase db = QSqlDatabase::addDatabase("QODBC3");

	// paramétrage de la connexion
	db.setDatabaseName(connectionString);
	db.setUserName("capelli");
	db.setPassword("developpeur");

	// création du model à partir de la base de donnée
	QSqlTableModel *model = new QSqlTableModel();

	// sélection de la table à afficher
	model->setTable("Categorie");
	model->setEditStrategy(QSqlTableModel::OnManualSubmit);

	// Récupération des données
	model->select();

	// Ajustement des titres des colonnes
	model->setHeaderData(0, Qt::Horizontal, trUtf8("Id cat"));
	model->setHeaderData(1, Qt::Horizontal, trUtf8("Libellé"));
	model->setHeaderData(2, Qt::Horizontal, trUtf8("Tva"));

	// Application du modèle à la table View
	ui.tvCategorie->setModel(model);

	// Masquage du header vertical(nom des lignes)
	ui.tvCategorie->verticalHeader()->hide();
	// Masquage d'une colonne
	//ui.tvCategorie->hideColumn(0);

	// Ajustement de la taille des colonnes pour remplir l'espace dispo
	ui.tvCategorie->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);
	//ui.tvCategorie->resizeColumnsToContents();

	// affichage de la table
	ui.tvCategorie->show();
}
