void insert_After(struct Node* prev_node, int No,char Ad[],char Soyad[],char Bolum[],int Sinif)
{
    if (prev_node == NULL) {
        printf("the given previous node cannot be NULL");
        return;
    }

    struct Node* new_node
        = (struct Node*)malloc(sizeof(struct Node));

    new_node->ogrenci_no = No;
    new_node->ad = Ad;
    new_node->soyad = Soyad;
    new_node->bolum = Bolum;
    new_node->sinif = Sinif;

    new_node->next = prev_node->next;

    prev_node->next = new_node;

    new_node->prev = prev_node;

    if (new_node->next != NULL)
        new_node->next->prev = new_node;
}
