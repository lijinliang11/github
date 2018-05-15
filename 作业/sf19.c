void ListInitiate(DLNode **head)
{
    if((*head=(DLNode*)malloc(sizaof(DLNode)))==NULL) exit(0);
    (*head)->prior=*head;
    (*head)->next=*head;
}
int ListInsert(DLNode *head,DataType x)
{
    DLNode *p,*s;
    int j;
    p=head->next;
    j=0;
    while(p!=head&&j<i)
    {
        p=p->next;
        j++;
    }
    if(j!=i)
    {
        printf("插入位置参数出错！");
        return 0;
    }
    if((s=(DLNode *)malloc(sizeof(DLNode)))==NULL) exit(0);
    s->data=x;
    s->prior=p->prior;
    p->prior->next=s;
    s->next=p;
    p->prior=s;
    return 1;
}
int ListDelete(DLNode *head,int i,DataType *x)
{
    DLNode *p;
    int j;
    p=head->next;
    j=0;
    while(p->next!=head&&j<i)
    {
        p=p->next;
        j++;
    }
    if(j!=i)
    {
        printf("删除位置参数出错！");
        return 0;
    }
    p->prior->next=p->next;
    p->next->prior=p->prior;
    *x=p->data;
    free(p);
    return 1;
}
