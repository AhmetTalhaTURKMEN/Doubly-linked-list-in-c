typedef struct Node {
    void* ogrenci_no;
    void* ad;
    void* soyad;
    void* bolum;
    void* sinif;
    struct Node* next;
    struct Node* prev;
}NODE;
	typedef struct
	   {
	    int   count;
	    NODE* pos;
	    NODE* head;
	    NODE* rear;
	    int    (*compare) (void* argu1, void* argu2);
	   } LIST;
