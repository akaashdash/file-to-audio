# File <--> WAV

A few days ago, I was scrolling youtube and came across a trend where people were trying to store their files in all kinds of creative ways (such as [this](https://www.youtube.com/watch?v=c_arQ-6ElYI), [this](https://www.youtube.com/watch?v=z16rzIF5J40), and [this](https://www.youtube.com/watch?v=qFZQPvdL5fQ)). The one that stood out to me the most was [this video](https://www.youtube.com/watch?v=szLk6hLaj6E) where files were encoded as audio, which was then uploaded to streaming platforms to take advantage of their storage (code here: https://github.com/D408-bot/File-to-audio). I thought this was very interesting. 

The author used [Multiple frequency-shift keying (MFSK)](https://en.wikipedia.org/wiki/Multiple_frequency-shift_keying) which is when multiple frequencies are chosen and each one represents a specific value of bits. However, the author did it using [one-hot encoding](https://en.wikipedia.org/wiki/One-hot), in which $k$ frequencies are chosen so that each frequency represents a possible value of $log_2k$ bits. The author then played one bit over a discrete time.

I thought that this was not as efficient as we can get. Using [Fast Fourier Transform (FFT)](https://en.wikipedia.org/wiki/Fast_Fourier_transform) we can distinctively read multiple frequencies simultaneously. We can seperate the channel into multiple frequency bands and have each band represent a bit. Then, if we were to have $k$ frequences, we can encode $k$ bits at once. We can use discrete time steps and for each step, if the frequency is present then the bit is $1$, else $0$.

## Orignal

This project is based off of the video Storing Files on Spotify (https://www.youtube.com/watch?v=szLk6hLaj6E), for which the source code can be found at https://github.com/D408-bot/File-to-audio.

## Disclaimers

1. This was made for fun and should not be used in any serious manner.
2. I do not encourage using this to store your files in free audio file hosting services.