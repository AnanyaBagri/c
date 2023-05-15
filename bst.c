#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int info;
    struct node *left,*right;
}bst;
void insert(bst **rt,int num)
{
    if((*rt)==NULL)
    {
        (*rt)=malloc(sizeof(bst));
        (*rt)->left=NULL;
        (*rt)->right=NULL;
        (*rt)->info=num;
    }
    else if(((*rt)->info)>num)
    {
        insert((&(*rt)->left),num);
    }
    else
    {
        insert((&(*rt)->right),num);
    }
}
void inorder(bst *rt)
{
    if(rt!=NULL)
    {
        inorder((rt)->left);
        printf("%d ",((rt)->info));
        inorder((rt)->right);

    }
}
void preorder(bst *rt)
{
    if(rt!=NULL)
    {
        printf("%d ",((rt)->info));
        preorder((rt)->left);
        preorder((rt)->right);
    }
}
void postorder(bst *rt)
{
    if(rt!=NULL)
    {
        postorder((rt)->left);
        postorder((rt)->right);
        printf("%d ",((rt)->info));
    }
}
main()
{
    bst *root=NULL;
    int ch,num,k=1;
    while(k==1)
    {
        printf("1.insert\n2.print in inorder\n3.print in preorder\n4.print in postorder\nEnter a valid choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the number to insert\n");
            scanf("%d",&num);
            insert(&root,num);
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            preorder(root);
            break;
        case 4:
            postorder(root);
            break;
        }
        printf("\nPress 1 to continue\n");
        scanf("%d",&k);
    }
    return 0;
}
