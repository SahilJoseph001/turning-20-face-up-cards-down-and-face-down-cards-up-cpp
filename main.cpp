// *** Coded By SahilJoseph *** //
# include <iostream>
# include <string>

class Cards {

    private:
        std::string s;
    
    public:
        void read(void) {

            s = "11111111111111111111";

            check_binary(); // Nesting Member Funtion.

        }

        void check_binary(void) {

            for (int i = 0; i < s.length(); i++) {

                if (s.at(i) != '0' && s.at(i) != '1') {

                    std::cout<<"Invalid Binary "<<std::endl;
                    exit(0);

                }
                
            }
            
        }

        void exchange_0_1(void) {

            for (int i = 0; i < s.length(); i++) {

                if(s.at(i) == '0') {

                    s.at(i) = '1';

                } else {

                    s.at(i) = '0';

                }

            }

        }

        void print(void) {
            
            std::cout<<"All Cards are Faced Up and The Algorithn Stopped. : "<<s<<std::endl;

        }

};

int main(int argc, char const *argv[]) {

    while (true) {

        Cards b; 

        std::cout<<"20 Cards was faced down and When one card face up then right card also should be up. There should be a time where this algorithm stop. Prove it. 1 - Face Down, 0 - Face Up."<<std::endl;
        std::cout<<" The Current State of Cards is : 11111111111111111111 "<<std::endl;

        b.read();
        // b.check_binary(); // Manually Calling Method/Function.
        b.exchange_0_1();
        b.print();

        int a;

        std::cout<<"For executing again, Enter 1."<<std::endl;
        std::cin>>a;

    }

    return 0;
}
