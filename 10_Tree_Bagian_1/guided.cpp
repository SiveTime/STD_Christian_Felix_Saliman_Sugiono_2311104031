#include <iostream>
using namespace std;

struct Pohon{
    char data;
    Pohon *left, *right, *parent;
};

Pohon *root, *baru;

void init(){
    root = NULL;
}

bool isEmpty (){
    return root == NULL;
}

void buatNode(char data){
    if (isEmpty()){
        root = new Pohon{data, NULL, NULL, NULL};
        cout << "\nNode "<< data << "berhasil dibuat menjadi root." << endl;
    }else{
        cout<<"\n Pohon sudah dibuat."<<endl;
    }
}

Pohon *insertLeft(char data, Pohon *node){
    if (isEmpty()){
        cout<<"\n Buat tree terlebih dahulu uy"<< endl;
        return NULL;
    }if(node->left != NULL){
        cout << "\n Node " << node->data << " sudah ada child kiri." << endl;
        return NULL;
    }
    baru = new Pohon{data, NULL, NULL, node};
    node->left = baru;
    cout << "\n Node " << data << "berhasil ditambahkan ke child kiri "<< node->data<< endl;
    return baru;
}

Pohon *insertRight (char data, Pohon *node){
    if (isEmpty()){
        cout<<"\n Buat tree terlebih dahulu uy"<< endl;
        return NULL;
    }if(node->right != NULL){
        cout << "\n Node " << node->data << " sudah ada child kanan." << endl;
        return NULL;
    }
    baru = new Pohon{data, NULL, NULL, node};
    node->left = baru;
    cout << "\n Node " << data << "berhasil ditambahkan ke child kanan "<< node->data<< endl;
    return baru; 
}

void update(char data, Pohon *node){
    if (isEmpty()){
        cout << "\nBuat tree terlebih dahulu" << endl;
        return;
    }if (!node){
        cout << "\nNode yang ingin diganti takda"<< endl;
        return;
    }
    char temp = node->data;
    node->data = data;
    cout << "\nNode "<< temp << " Berhasil diubah menjadi " << data << endl;
}

void retrieve(Pohon *node){
    if (isEmpty()){
        cout<<"\n Buat tree terlebih dahulu uy"<< endl;
        return;
    }if (!node){
        cout << "\nNode yang ditunjuk ga ono"<< endl;
        return;
    }
    cout << "\nData node: "<< node->data << endl;
}

void find(Pohon *node){
    if (isEmpty()){
        cout<<"\n Buat tree terlebih dahulu bang -_-"<< endl;
        return;
    }if (!node){
        cout << "\nNode yang ingin dilihat takda"<< endl;
        return;
    }
    cout << "\nData node: "<< node->data << endl;
    cout << "Root: "<< root->data << endl;
    cout<<"Parent: "<< (node->parent ? node->parent->data: '(tidak punya parent)') << endl;

    if (node->parent){
        if(node->parent->left == node && node->parent->right)
        cout<< "Sibling: " << node->parent->right->data << endl;
        else if(node->parent->right == node && node->parent->left)
        cout<< "Sibling: " << node->parent->left->data << endl;
        else cout << "Sibling: (gak ada sibling)" << endl;
    }
}

int main(){
    init();
    buatNode('A');
    Pohon *nodeB = insertLeft('B', root);
    Pohon *nodeC = insertRight('C', root);
    insertLeft ('D', nodeB);
    insertRight ('E', nodeB);
    insertLeft ('F', nodeC);
    insertRight ('G', nodeC);

    cout << "\n== Pemanggilan retrieve";
    retrieve(root);
    retrieve(nodeB);
    retrieve(nodeC);

    cout<<"\n== pemanggilan find (nodeB)";
    find(nodeB);

    cout<<"\n== pemanggilan find (nodeC)";
    find(nodeC);

    cout<<"\n== pemanggilan update (Mengubah nodeB menjadi Z)";
    update('z', nodeB);

    cout << "\n== Pemanggilan retrieve sesudah update";
    retrieve(nodeB);

    return 0;
}