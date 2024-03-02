//C언어 노드를 위한 예제
#include <stdio.h>
#include <stdlib.h>

// 정수 값을 저장하는 노드 구조체 정의
struct Node {
    int data;
    struct Node* next;
};

// 새로운 노드를 생성하고 값을 설정하는 함수
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// 링크드 리스트에 노드를 추가하는 함수
void addNode(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// 링크드 리스트를 출력하는 함수
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // 노드 추가
    addNode(&head, 10);
    addNode(&head, 20);
    addNode(&head, 30);

    // 링크드 리스트 출력
    printf("링크드 리스트: ");
    printList(head);

    return 0;
}
