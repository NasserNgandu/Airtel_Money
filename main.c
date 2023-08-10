#include <stdio.h>
#include <string.h>

void airtel_money() {
    int choix_menu, sous_menu;
    int solde_compte_USD = 1000; // Solde initial en dollars
    int solde_compte_CDF = 1000000; // Solde initial en francs congolais
    int mot_de_passe = 2000;
    int retrait_USD, envoi_USD, balance_USD;
    int retrait_CDF, envoi_CDF, balance_CDF;
    
    // Tableau des membres du groupe
    char * nom_groupe[] = {
                            "MAKANDA SWEDI MICHEL", 
                            "BALANGE MUYENGA DORCAS", 
                            "LUKWESA KASHOBA JOSUE", 
                            "SADIKI YENGAYENGA ALBERT", 
                            "MASENGO BIKONDAMA AMOS",
                            "NGOSA KABANGE AMOS",
                            "NTAMBWE LIYA ELIE",
                            "MUKAJI MWENYI FLORENCE",
                            "KASWING KANVAND JUDITH",
                            "LUPITY NGOY KISULA ELIE",
                            "KAILI MUTITI JULES",
                            "NGONGO MUHIYA PIERRE",
                            "KANKU TSHIBOLA MAGLOIRE",
                            "KASONGO MIHALI FIDEL",
                            "DHATA OBOLO DONNA",
                            "ZAWADI KASOLE SYLVIE",
                            "MALALA KALANDA DELICIA",
                            "NDEMBA MWAMBA ANNIFA",
                            "KALOMBO KOMBE LAETITIA",
                            "KANDA MAKANDA GUELORD",
                            "MULEKA BUKASA FRANCIS",
                            "APOLINE MIKIT"
                        };
    int taille = sizeof(nom_groupe) / sizeof(nom_groupe[0]);

    printf("Menu principal Airtel Money :\n");
    printf("1. USD\n");
    printf("2. CDF\n");
    printf("3. Mot de passe\n");
    printf("4. 1GB 24h-100u\n");
    printf("5. Achat unités/forfait\n");
    printf("6. Nom des membres du groupe\n");
    printf("Entrez votre choix : ");
    scanf("%d", &choix_menu);

    switch (choix_menu) {
        case 1:
            printf("Menu USD :\n");
            printf("1. Retirer argent en USD\n");
            printf("2. Envoyer l'argent USD\n");
            printf("3. Balance\n");
            printf("Entrez votre choix : ");
            scanf("%d", &sous_menu);

            switch (sous_menu) {
                case 1:
                    printf("Entrez le montant à retirer en USD : ");
                    scanf("%d", &retrait_USD);
                    if (retrait_USD > solde_compte_USD) {
                        printf("Votre solde est insuffisant.\n");
                    } else {
                        solde_compte_USD -= retrait_USD;
                        printf("Votre nouveau solde est : %d USD\n", solde_compte_USD);
                    }
                    break;
                case 2:
                    printf("Entrez le montant à envoyer en USD : ");
                    scanf("%d", &envoi_USD);
                    if (envoi_USD > solde_compte_USD) {
                        printf("Votre solde est insuffisant.\n");
                    } else {
                        solde_compte_USD -= envoi_USD;
                        printf("Votre nouveau solde est : %d USD\n", solde_compte_USD);
                    }
                    break;
                case 3:
                    printf("Entrez le mot de passe : ");
                    scanf("%d", &balance_USD);
                    if (balance_USD != mot_de_passe) {
                        printf("Mot de passe incorrect.\n");
                    } else {
                        printf("Votre solde est : %d USD\n", solde_compte_USD);
                    }
                    break;
                default:
                    printf("Choix invalide.\n");
                    break;
            }
            break;
        case 2:
            printf("Menu CDF :\n");
            printf("1. Retirer argent en CDF\n");
            printf("2. Envoyer l'argent CDF\n");
            printf("3. Balance\n");
            printf("Entrez votre choix : ");
            scanf("%d", &sous_menu);

            switch (sous_menu) {
                case 1:
                    printf("Entrez le montant à retirer en CDF : ");
                    scanf("%d", &retrait_CDF);
                    if (retrait_CDF > solde_compte_CDF) {
                        printf("Votre solde est insuffisant.\n");
                    } else {
                        solde_compte_CDF -= retrait_CDF;
                        printf("Votre nouveau solde est : %d CDF\n", solde_compte_CDF);
                    }
                    break;
                case 2:
                    printf("Entrez le montant à envoyer en CDF : ");
                    scanf("%d", &envoi_CDF);
                    if (envoi_CDF > solde_compte_CDF) {
                        printf("Votre solde est insuffisant.\n");
                    } else {
                        solde_compte_CDF -= envoi_CDF;
                        printf("Votre nouveau solde est : %d CDF\n", solde_compte_CDF);
                    }
                    break;
                case 3:
                    printf("Entrez le mot de passe : ");
                    scanf("%d", &balance_CDF);
                    if (balance_CDF != mot_de_passe) {
                        printf("Mot de passe incorrect.\n");
                    } else {
                        printf("Votre solde est : %d CDF\n", solde_compte_CDF);
                    }
                    break;
                default:
                    printf("Choix invalide.\n");
                    break;
            }
            break;
        case 3:
            printf("Menu Mot de passe :\n");
            printf("1. Entrer le nouveau mot de passe\n");
            printf("Entrez votre choix : ");
            scanf("%d", &sous_menu);

            switch (sous_menu) {
                case 1:
                    printf("Entrez le nouveau mot de passe : ");
                    scanf("%d", &mot_de_passe);
                    printf("Mot de passe mis à jour.\n");
                    break;
                default:
                    printf("Choix invalide.\n");
                    break;
            }
            break;
        case 4:
            printf("Menu 1GB 24h-100u :\n");
            // Traiter le choix 4 ici
            break;
        case 5:
            printf("Menu Achat unités/forfait :\n");
            // Traiter le choix 5 ici
            break;
        case 6:
            printf("Liste des membres :\n");
            for (int i = 0; i < taille; i++) {
                printf("%d. %s\n", i+1, nom_groupe[i]);
            }
            break;
        default:
            printf("Choix invalide.\n");
            break;
    }
}

int main() {
    char code[10];

    printf("Bienvenue sur Airtel Money !\n");
    printf("Veuillez entrer le code Airtel Money (*501#).\n");
    // code Airtel Money sera entré ici
    scanf("%s", code);

    if (strcmp(code, "*501#") == 0) {
        airtel_money();
    } else {
        printf("Code invalide.\n");
    }

    return 0;
}
