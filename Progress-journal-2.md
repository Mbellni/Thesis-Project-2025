# Weekly Progress Journal (15th to 21st September)

This was my first week having a more hands-on approach to my project and actually creating something that I can soon start experimenting with.

## Character creation and prompts

Firstly, I proceeded with my initial plan and subscribed to the developer plan of Convai. A platform/plugin that allows me to integrate AI-powered characters in game engines like Unity or Unreal Engine. Soon, I started experimenting with the basic character creation options and using them to create a quick Agent that I could talk to online. 

I started by picking a random avatar that I could use for testing.

<p align="center">
  <img src="docs/Screenshot 2025-09-12 203425.png" alt="Week 1 Concept Sketch" width="1000"/>
</p>

Afterwards, I arranged a series of prompt descriptions that linked my character with the research proposal, by giving it a primary goal: to ask the user about a question (I chose firstly "right-handed people breathe more oxygen") and no matter if they say true or false, the AI must try to convince the user of the opposite response. I also added further prompts that defined the character's speaking style and some speech samples so as to go more in-depth and achieve my vision.

<p align="center">
  <img src="docs/Stuart_Prompt1_srct.png" width="500"/>
  <img src="docs/Stuart_Prompt2_srct.png" width="500"/>
</p>

Fun fact: It could be considered "cheating", but I thought it would be pretty hilarious and conceptually interesting if the prompts for the AI were also created by AI, and give this full circle sort of ironic feel to it. I could have written the prompts, and it would have been fairly easy, but I was too tempted to add this easter egg within my project. So that is exactly what I did. Despite some alterations I had to make, the AI was prompted by another AI. That is pretty funny...

Here is the first test I did with the AI avatar, through the Convai Call feature on their page. This allowed me to understand of accuarte the character was going to be in relation to the prompts previously mentioned. Honestly, I was a little bit astonished by how well this worked. It is a pretty remarkable platform.

[![Watch on YouTube](https://img.youtube.com/vi/wljIaCmqhEE/0.jpg)](https://youtu.be/wljIaCmqhEE)

[![▶️ Click to Watch](https://img.shields.io/badge/Play-Video-red?logo=youtube&style=for-the-badge)](https://youtu.be/wljIaCmqhEE)

The only issue that is apparent here is that the character would cite fake studies to convince the user. Unfortunately, the vaatr would always say they were fictional when I needed it to lie for the sake of the experiment. This was probably done by Convai to avoid the spread of fake information, and it makes absolute sense. But I was able to prompt my way out of it after a few tries. It didn't work in the beginning, though, and I had to play around with the words until it finally avoided saying "fictional" or "fake" before study.


## French Version Creation (relevant for testing in France)

Since I am creating and testing my project in France, I decided to adapt my project to the context that I am in and make the most out of it. As a result, I created a French version of the character prompts by translating them and adding French as the target language. This also involved creating a French verion of my Google questionnaires so that I could test the experiment subjects accordingly and without any information lost in translation or misunderstanding.

This allows my research and project to show off the capabilities of my project through a diverse background, not only in age and personality, but also in a multicultural perspective, making it more relevant.

<p align="center">
  <img src="docs/French_translation_scrct.png" width="500"/>
</p>

I still intend to test people of other nationalities and backgrounds; otherwise, this richness in my research won't apply as much. I may add Portuguese language support as well, for when I go back home and test it.


## Unreal Integration
### First Steps - Plug-in Integration and Issues

To achieve the first successful Unreal integration, I followed a YouTube tutorial posted by the official Convai channel. This is where they keep developers updated about new features and how they work, and can be manipulated by anyone wishing to work with them. As a result, this was my main source of guidance during the creation of my project. 

- [Watch the Tutorial]([docs/research_proposal.pdf](https://youtu.be/HHhkBd6NOlo?si=e8E-GpeND85q9KS2))

This first step involved creating a quick VR-supported experinece that used my Convai avatar (the one I chose and that you can watch on the first video) as an adapted Convai Unreal asset. The process was quite simple and worked overall well. Unfortunately, there was an issue that arose, visible in the following video.

NOTE: Initially, I started this project on Unreal's latest update (aka 5.6.1); however, due to Convai's plugins for the VR character integration version support, I had to downgrade to 5.3.

[![Watch on YouTube](https://img.youtube.com/vi/m3JfUQHXQjQ/0.jpg)](https://youtu.be/m3JfUQHXQjQ)

[![▶️ Click to Watch](https://img.shields.io/badge/Play-Video-red?logo=youtube&style=for-the-badge)](https://youtu.be/m3JfUQHXQjQ)

As you can see, the avatar wasn't at all looking like the one on the Convai website, and I did not know how to fix this, even after multiple tries with different Convai avatars. Fortunately, I had a plan.

### Metahuman Integration 

My initial plan involved using Metahuman characters as the avatars for my experiment, so I quickly discarded the previous approach and started working on Convai-powered Metahumans in Unreal Engine. To achieve this, I once again used the Convai channel as my main guidance towards a working iteration.

- Metahuman Integration: screenshots + Tutorial

### Metahuman Animation and Issues

- Issue with retargetting animation in 5.3 and change to 5.6.1 again (explain retargeting option added after 5.4) screenshots of f***** up character retargeting on Unreal Engine 5.3
- successful retargeting in 5.6 and screenshots
- problems changing the idle animation and screenshots

### Github and Issues

- Problems uploading project to GitHub and LGF

### Scene Creation and Asset Issues

- Scene creation (search for good 3d assets): software screenshots
- Desired asset issue (optimisation for 4.2.7 and adaptation into 5.6.1 solution - screenshots





- Issue 2: lighting issues in 5.6.1 adaptation + solution


