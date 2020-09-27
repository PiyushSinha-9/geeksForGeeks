
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
typedef pair<long long,long long> pll;



#define F first
#define S second
#define print(x) for(auto iuiuiuiuiui:x){ cout<<iuiuiuiuiui<<" ";}br;
#define print_array(array,size) for(ll i=0;i<size;i++){ cout<<array[i]<<" ";}br;
#define br cout<<"\n"
#define max_val 1000000
#define mod 1000000007
#define pb(a) push_back(a)
#define mp(asd,fgh) make_pair(asd,fgh)
#define all(c) c.begin(),c.end()
#define check_ cout<<"yo";

#define FILE_READ_IN freopen("input.txt","r",stdin);
#define FILE_READ_OUT freopen("output.txt","w",stdout);

#define INF LONG_LONG_MAX
#define N_INF LONG_LONG_MIN


#pragma GCC target("popcnt")


class LinkedList{
    public:
    int value;
    LinkedList *next;

    LinkedList(int val){
        value=val;
        next=NULL;
    }

     LinkedList(){
        next=NULL;
    }
};


void insert(LinkedList *&temp, int val){
    
    LinkedList *t= new LinkedList(val);

    if(temp==NULL){
        temp=t;
        return;
    }


    LinkedList *copy= temp;

    while(copy->next!=NULL){
        copy=copy->next;
    }
    copy->next=t;
    
}


void show(LinkedList *t){
    while(t!=NULL){
        cout<<t->value<<" ";
        t=t->next;
    }
    br;
}

void reserveLinkedList(LinkedList *&head){
    LinkedList *t=NULL;
    LinkedList *store=NULL;
    while(head!=NULL){
        store=head->next;
        head->next=t;
        t=head;
        head=store;
    }
    head=t;

}

LinkedList *reserveRecursion(LinkedList *&head, LinkedList *prev){
    if(head==NULL) return prev;
    LinkedList *newHead=NULL;
    newHead= reserveRecursion(head->next,head);
    head->next=prev;
    return newHead;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    LinkedList *temp = new LinkedList(10);
    
    show(temp);
    for(int i=20;i<60;i+=10){
        insert(temp,i);
    }

    show(temp);

    reserveLinkedList(temp);
    show(temp);

    temp= reserveRecursion(temp,NULL);

    show(temp);

    
}


/*

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	
	
	return 0;
}

*/