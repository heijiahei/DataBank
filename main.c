int main()
{
    int count = 0;
    Contact contact_list[N];
    count = load_data(contact_list);
    if (count == -1)
    {
        return 0;
    }

    show_menu();

    char ch;
    printf("���ݼ��سɹ�, ��������Ҫ�Ĳ���:\n");
    scanf("%c", &ch);

    while (ch != 'q')
    {
        switch (ch)
        {
        case 'a':
            add_new_contact();
            count = load_data(contact_list);
            break;
        case 'd':
            delete_contact(contact_list, count);
            count = load_data(contact_list);
            break;
        case 'f':
            find_contact(contact_list, count);
            break;
        case 'm':
            modify_contact(contact_list, count);
            count = load_data(contact_list);
            break;
        case 'p':
            print_contact(contact_list, count);
            break;
        default:
            printf("�������������!\n");
            break;
        }
        
        printf("\n��������Ҫ�Ĳ���:\n");
        fflush(stdin);
        scanf("%c", &ch);
    }
    printf("�˳�ϵͳ!\n");
    return 0;
}
