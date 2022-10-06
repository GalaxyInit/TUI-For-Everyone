import instaloader

username = ""
password = ""

L = instaloader.Instaloader()
L.login(username, password)
profile = instaloader.Profile.from_username(L.context, username)
following = profile.get_followees()
followers = profile.get_followers()

arr = []

for following_profile in following:
    arr.append(following_profile.username)
for follower_profile in followers:
    try:
        arr.remove(follower_profile.username)
    except:
        pass

print("These idots don't follow you back")
for i, user in enumerate(arr):
    print(i+1,user)