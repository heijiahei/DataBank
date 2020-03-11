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
    printf("数据加载成功, 输入你需要的操作:\n");
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
            printf("输入的命令有误!\n");
            break;
        }
        
        printf("\n输入你需要的操作:\n");
        fflush(stdin);
        scanf("%c", &ch);
    }
    printf("退出系统!\n");
    return 0;
}
