void insert_First(struct Node** head_ref, int No,char Ad[],char Soyad[],char Bolum[],int Sinif)
{
    struct Node* new_node
        = (struct Node*)malloc(sizeof(struct Node));

    new_node->ogrenci_no = No;
    new_node->ad = Ad;
    new_node->soyad = Soyad;
    new_node->bolum = Bolum;
    new_node->sinif = Sinif;
    new_node->next = (*head_ref);
    new_node->prev = NULL;

    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    (*head_ref) = new_node;
}
