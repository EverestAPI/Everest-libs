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
- FMOD_SDL [1f021ce](https://github.com/flibitijibibo/FMOD_SDL/tree/1f021ceb6cc13e3fe93e53e0f87d2673b24e54b7)
- Steamworks.NET [`2024.8.0`](https://github.com/rlabrecque/Steamworks.NET/tree/2024.8.0)

### Closed-Source Libraries
These libraries are closed source and cannot be _built_ in CI.  
Some are not accessible without an account, and therefore need to be vendored as a binary blob.

- DiscordGameSDK `3.2.1` (downloaded: https://dl-game-sdk.discordapp.net/3.2.1/discord_game_sdk.zip)
- FMOD Engine `1.10.14` (binary and headers) (vendored: [Download (Requires account)](https://www.fmod.com/download#fmodengine), [License](https://github.com/EverestAPI/Everest-libs/blob/main/binaries/fmod/EULA-FMOD.txt))
- Steamworks SDK `1.60` (with Steamworks.NET `2024.8.0`) (vendored: [Download (Official, Requires account)](https://partner.steamgames.com/downloads/list), [Download (via Steamworks.NET)](https://github.com/rlabrecque/Steamworks.NET/releases/tag/2024.8.0))
