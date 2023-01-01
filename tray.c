#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <cs50.h>

bool check_phrase(string i);
string phrase;
int main(void)
{
 phrase =get_string("Enter teh passw?");
   bool correct =check_phrase(phrase);


    if (correct == true)
    {
        printf("hell");
        return true ;

    }

}

bool check_phrase(string i){
    i password="hussin";

    if (strcmp(phrase,password)==0 )
    {
        printf("hell");
        return true;
    }
   return false;
}
// ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABgQDmjhU+kBRFKyAca8fxZf1wVkQsqXHx362YTx1lacZAL/cMWxdm19J60SxKARzRW9D3wUJpsbPfAdT20PWlsVPw7nWIA4wGSylZhqsNHccma0VNuyGGfmO7yUZGBFbS3suWhVRPsbatxI4QYpfssX6rqRQZhj80YKUd2de+ZlaCXsGvpMauUVCXlh1uWzAeOKONtKe7NUajnSxVCtbwIvrK4WHzAdLZFgv+dPYDe4xVPKd1Kbni17RbCL1EWjxJuul3DuqnsYV1DqfEs/zGlaAVwtqx2+DimjAz+ntor0pnYxMEcKQgkSnjL7Fq3TPjqnWul8yO37dXa+h+nf9H8sqD2U0jKg9qgw3bXqmHAp3zJdaNlIufQ8e5vCLzDclGNPO3Neyup9eLwLxncMJmOapeluLUhg8VOQIVIK1uFK7tIv5OChiw6xnkdgzbszPtZ9E11nMAsXHLXPezganEaD2D6VoBJ+C7SQUOgESjgtLUCxCkvRpQhQLSpgPYRd5fFb0= ubuntu@codespaces-5df492

// SHA256:9lBNDsxC87cAeLt1eRO9gQz/HO4SiQzs4RyhgQAXz4g