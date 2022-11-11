
struct node* search_node(struct Node* node,int No){

    struct Node* current ;
     while (current != NULL)
    {
        if (current->ogrenci_no == No){
            printf("Yazdiginiz ogrenci no:%d ogrenci bilgileri: %s %s %s %d",No,current->ad,current->soyad,current->bolum,current->sinif);
            break;
        }
        current=node;
        current = current->next;
    }
    return 0;
};
