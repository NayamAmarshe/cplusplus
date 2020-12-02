The vulnerability allows anyone to get a **permanent link to a netflix account** and login without any issues with **just one click**. This vulnerability uses the **Windows 10, Android or iOS app** to exploit and use a token that doesn't expire. In our tests, the **link has been valid for months** and it's still usable.
___

## Steps to reproduce:

1. Download Netflix app from the Microsoft Store.

2. Login to the app, then go to settings -> Account Details 

![image.png](https://bugcrowd-attachments-us-east-1-production.s3.us-east-1.amazonaws.com/attachments/temp/8e096490-1bb9-46d0-8d61-d86cc66c5b9c/image.png?response-content-disposition=inline&X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAJH4NERGAPHTPIWGA%2F20201202%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20201202T104052Z&X-Amz-Expires=3600&X-Amz-SignedHeaders=host&X-Amz-Signature=d81e3494661ba42f7a4351cc97272cc1c40067181d8fd6274b5bb72c1867ae37 "image.png")

3. This will open a browser window and redirect you to your netflix Account details page, **WITHOUT ANY NEED TO ENTER THE PASSWORD IN THE BROWSER**.

![Screenshot 2020-12-02 164346.png](https://bugcrowd-attachments-us-east-1-production.s3.us-east-1.amazonaws.com/attachments/temp/96d73845-c245-4a2b-9e57-99b7b903e297/Screenshot%202020-12-02%20164346.png?response-content-disposition=inline&X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAJH4NERGAPHTPIWGA%2F20201202%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20201202T112541Z&X-Amz-Expires=3600&X-Amz-SignedHeaders=host&X-Amz-Signature=3e08d9f702385db9de18e598ced72a22ed3cdbbd82079cc471c053fb02ed4264 "Screenshot 2020-12-02 164346.png")

4. This link starts like this: `https://www.netflix.com/YourAccount?nftoken=` and after that follows a string of encrypted token.

5. You can copy the link and paste it in any device's browser and it will log you into the said netflix account **WITHOUT ANY PASSWORD!**

### After opening the link, you can freely browse the account as the browser automatically logs you in. You can watch the videos, see the account activity, create new profile and do this on any device or browser you open the link in.
