MOLPay
======

Based on the latest API from MOLPay. The dummy account in the code is bundled with the API. Just do not pay to the account.

Instead, I created a dismiss button to go to the next ViewController (ThanksViewController).
Then I call ViewWillDisappear method to dismiss the stubborn UIWebView of MOLPay. It works. You guys try commenting the method and the MOLPay view will stay on top forever.

However, when u tap on a control (let's say choose payment channel) and tap dismiss or back, the MOLPay view stays. Shit! HAHA.


## Downloads
Latest library from MOLPay here https://www.onlinepayment.com.my/MOLPay/merchant/PDF/MOLPay_SDK_Library_v3.0.zip
