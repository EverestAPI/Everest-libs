# Everest Libraries

Provides third-party libraries used by Everest, using trusted sources such as GitHub Actions or offical downloads to obtain them.
Some libraries have patches applied to them, to account for Everest-specific needs.

## Libraries Versions

### Open-Source Libraries
These libraries are open source and are built in CI.  

- SDL2 `2.28.5`
- FNA `24.01`
- FNA3D `24.01` with patches
- FAudio `24.01`
- Theorafile [48d74af](https://github.com/FNA-XNA/Theorafile/tree/48d74afcbf838fe95ca56cec142efae07bb56f65)
- MoltenVK `1.2.11`
- Vulkan Loader `1.3.296`
- Piton [21c7868](https://github.com/Popax21/Piton/tree/21c7868d06007f0c5e7d9030a0109fe892df1bf3)
- NLua `1.6.2` with patches
- MonoMod [be053cf](https://github.com/MonoMod/MonoMod/tree/be053cf084f320a0cd5b516288e1e332b855471d)

### Closed-Source Libraries
These libraries are closed source and cannot be _built_ in CI.  
Some are not accessible without an account, and therefore need to be vendored as a binary blob.

- DiscordGameSDK `3.2.1` (downloaded: https://dl-game-sdk.discordapp.net/3.2.1/discord_game_sdk.zip)
- FMOD Engine `1.10.14` (vendored: [Download (Requires account)](https://www.fmod.com/download#fmodengine), [License](https://github.com/EverestAPI/Everest-libs/blob/main/binaries/fmod/EULA-FMOD.txt))
- Steamworks SDK `1.40` (with Steamworks.NET `10.0.0`) (vendored: [Download (Official, Requires account)](https://partner.steamgames.com/downloads/list), [Download (via Steamworks.NET)](https://github.com/rlabrecque/Steamworks.NET/releases/tag/10.0.0))
