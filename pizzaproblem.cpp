#include<bits/stdc++.h>

using namespace std;

class customerin{
    private:
        int likes;
        int dislikes;
        string *like_ing;
        string *dislike_ing;
    public:
        void put_like(int i)
        {
            likes = i;
            like_ing= new string[likes];   
        }
        int get_like()
        {
            return likes;
        }
        string get_like_ing(int i)
        {
            return like_ing[i];
        }
        void input_like()
        {
            for(int i=0; i<likes; i++){
                cin >> *(like_ing+i);
            }
        }  
         void put_dislike(int i)
        {    
            dislikes = i;
            dislike_ing = new string[dislikes];
        }
        int get_dislike()
        {
            return dislikes;
        }
        void input_dislike()
        {
            for(int i=0; i<dislikes; i++){
                cin >> *(dislike_ing+i);
            }
        }  
        
};


int main()
{
    int n;
    cin>>n;
    int likes;
    int dislikes;
    int var=0;
    customerin customerpref[n];
    
    for(int i=0; i<n;i++){
        cin>>likes;
        customerpref[i].put_like(likes);
        customerpref[i].input_like();
        cout << endl;
        cin >> dislikes;
        var+=dislikes;
        customerpref[i].put_dislike(likes);
        customerpref[i].input_dislike();
        cout << endl;
    }
    
    string total_dislike[var];
    for(int i =0;i<n;i++)
    {   
        for(int j=0;j<customerpref[i].get_dislike();j++)
        if(customerpref[i].)
    }
    return 0;
}

[1,2,3]


