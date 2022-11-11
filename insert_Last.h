void insert_Last(struct Node** head_ref, int No,char Ad[],char Soyad[],char Bolum[],int Sinif)
{
    struct Node* new_node
        = (struct Node*)malloc(sizeof(struct Node));

    struct Node* last = *head_ref;

    new_node->ogrenci_no = No;
    new_node->ad = Ad;
    new_node->soyad = Soyad;
    new_node->bolum = Bolum;
    new_node->sinif = Sinif;

    new_node->next = NULL;

    if (*head_ref == NULL) {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;

    last->next = new_node;

    new_node->prev = last;

    return;
}
