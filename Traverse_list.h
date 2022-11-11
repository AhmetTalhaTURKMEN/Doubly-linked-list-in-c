void printList(struct Node* node)
{
    struct Node* last;
    printf("\n\n");
    while (node != NULL) {
        printf("%d ", node->ogrenci_no);
        printf(" %s ", node->ad);
        printf(" %s ", node->soyad);
        printf(" %s ", node->bolum);
        printf(" %d \n", node->sinif);
        last = node;
        node = node->next;
    }
}
