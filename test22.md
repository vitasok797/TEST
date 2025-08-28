We recommend always installing the latest version. At a minimum, install version 2.29 or higher, which is the first version offering OAuth support for GitHub.
The next time you clone an HTTPS URL that requires authentication,
Git will prompt you to log2 in using a browser window. You may first be asked to authorize an OAuth app.
If your account or organization requires two-factor auth, you'll also need to complete the 2FA challenge.
Once you've authenticated successfully, your credentials are stored in the Windows credential manager and will be used every time you clone an HTTPS URL.
Git will not require you to type your credentials in the command line again unless you change your credentials.xxx