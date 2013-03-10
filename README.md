<body>
<h1><a href="http://www.facebook.com/OpenHexagon">Open Hexagon</a> - version 1.8</h1>

<h2><a href="http://vittorioromeo.info">by Vittorio Romeo</a></h2>

<p>A free, open source clone of <strong><a href="https://itunes.apple.com/us/app/super-hexagon/id549027629?mt=8">Super Hexagon</a></strong> (by Terry Cavanagh) </br>
Programmed by <strong><a href="http://vittorioromeo.info">Vittorio Romeo</a></br></strong>
Music by <strong><a href="https://soundcloud.com/bossfightswe">BOSSFIGHT</a></br></strong></p>

<hr />

<h2>EPILESPSY WARNING</h2>

<p><em>The game may contain flashing light patterns that could trigger a seizure. Play at your own risk.</em></p>

<hr />

<h2>Links and additional credits</h2>

<p><strong>Official page:</strong> <a href="http://www.facebook.com/OpenHexagon">http://www.facebook.com/OpenHexagon</a> </br>
<strong>Source code page:</strong> <a href="https://github.com/SuperV1234">https://github.com/SuperV1234</a></br>
<strong>Vittorio's website</strong>: <a href="http://vittorioromeo.info">http://vittorioromeo.info</a></br></p>

<p>Special thanks:</br> 
to <strong>BubblegumBalloon</strong> for the announcer sounds </br>
to <strong>Tomaka17</strong> for creating <a href="http://code.google.com/p/luawrapper/">LuaWrapper</a></br>
to <strong>Ethan Lee</strong> for the <a href="https://github.com/flibitijibibo/OpenHexagon-Unix">Unix port</a></br>
to <strong>Jookia</strong> for his help with the CMake files</br>
to <strong>Giuseppe Vinci</strong>, <strong>Jordo Matt</strong>, <strong>Pascal Schuster</strong>, <strong>Sean Pek</strong> for beta-testing</br>
to the <strong>SFML</strong> <a href="http://en.sfml-dev.org/forums/index.php?topic=2997.0">IRC channel</a> community for all the help</p>

<hr />

<h2>Description</h2>

<blockquote>
  <p>"You are a triangle." </br>
  Fast paced, challenging, free to play, open source game.</p>
  
  <p>You control a little triangle, which can be rotated clockwise or counterclockwise. Your goal is to suvive as long as possible by dodging polygons that move towards the center. Things get more difficult as time passes!</p>
  
  <p>Features a lot of variety and full customization: users can create/modify/share levels, patterns, music, sounds, scripts, and more.</p>
  
  <p>Play in Official Mode and submit your highscores to the server. Be the first in the leaderboards!</p>
  
  <p>Clone of the game "Super Hexagon" by Terry Cavanagh.</br>
  Please check it out and consider buying it if you like Open Hexagon!</p>
</blockquote>

<hr />

<h2>Requirements</h2>

<p><strong>Visual C++ Redistributable:</strong>
<a href="http://www.microsoft.com/en-us/download/details.aspx?id=30679">http://www.microsoft.com/en-us/download/details.aspx?id=30679</a></p>

<hr />

<h2>Installation</h2>

<p>Simply extract the contents of the compressed file in a folder.</br>
Open <strong>SSVOpenHexagon.exe</strong> or any of the batch files to play.</p>

<p><em>If you need further assistance post on the official page:</em>
<a href="http://www.facebook.com/OpenHexagon">http://www.facebook.com/OpenHexagon</a></p>

<hr />

<h2>How to play</h2>

<p>In the menu, press the <strong>Left</strong> and <strong>Right</strong> arrow keys to choose levels.</br>
Press <strong>Enter</strong> to play.</br>
Press <strong>F2</strong> to enter profile selection. Press <strong>F1</strong> to create a new profile.</br>
Press <strong>F3</strong> to enter the options menu.</br>
Keep <strong>ESC</strong> pressed to quit the game.</p>

<p>In game, press the <strong>Left</strong> and <strong>Right</strong> arrow keys to rotate.</br>
Press <strong>SHIFT</strong> to rotate more slowly.</br>
Avoid the walls! Press <strong>R</strong> to restart.</br> Press <strong>ESC</strong> to go back to the menu.</p>

<hr />

<h2>Customization</h2>

<p>Customizing Open Hexagon can be very easy or very complex depending on what you're trying to do. </br>Almost everything is written in simple to edit <a href="http://www.json.org/">JSON</a>.</p>

<p>Patterns, however, must be created using <a href="http://www.lua.org/">LUA</a> (which can also be used for other cool stuff).</p>

<p>Please refer to the files in the <strong>documentation</strong> folder.</p>

<p><em>Keep in mind that things will change from version to version. Existing files may not work in the next version of Open Hexagon or may work differently.</em></p>

<p><em>If you need further assistance post on the official page:</em>
<a href="http://www.facebook.com/OpenHexagon">http://www.facebook.com/OpenHexagon</a></p>

<hr />

<h2>Changelog</h2>

<p>Version 1.8 </p>

<ul>
<li>Added: <strong>new documentation file</strong>: <strong>online</strong> - <strong>PLEASE READ IT</strong></li>
<li>Added: <strong>options menu</strong> - open it by pressing <strong>F3</strong> on the main menu screen</li>
<li>Added: <strong>official mode</strong> - play the game as it was meant to be (locks some options, makes you eligible for online scoring)</li>
<li>Added: <strong>online highscores</strong> - your scores in official mode will be automatically submitted to the server</li>
<li>Added: <strong>leaderboards</strong> - in the main menu you'll be able to see the top 5 online scores in official mode</li>
<li>Added: <strong>online version checking</strong> - you will be notified when a new version of Open Hexagon is available</li>
<li>Added: <strong>auto-restart</strong> option - automatically restarts when you die (toggle it in options menu)</li>
<li>Added: <strong>screenshot</strong> feature - press <strong>F12</strong> during gameplay to save "screenshot.png" in the game folder</li>
<li>Fixed: <strong>crash</strong> on PI, Aperoigon with 3D effects enabled</li>
</ul>

<p>Version 1.7</p>

<ul>
<li>Added: <strong>3D effects</strong> (can be customized in style JSON files) (can be enabled/disabled/tuned in config.json file)</li>
<li>Added: <strong>antialiasing</strong></li>
<li>Added: new default level, <strong>PI</strong></li>
<li>Added: invincibility JSON config variable for debugging</li>
<li>Added: <strong>camera shake effect</strong> on death</li>
<li>Added: <strong>new main menu</strong></li>
<li>Fixed: "renderTexture is too big" bug</li>
<li>Fixed: spinning bug in Aperoigon</li>
<li>Fixed: unable to use '0' character in profile names</li>
<li>Fixed: a lot of minor bugs and a game crash</li>
</ul>

<p>Version 1.6</p>

<ul>
<li>Fixed: impossible patterns with extreme difficulty multipliers (should be fixed) - <strong>getPerfectDelayDM</strong> is a new function that takes difficulty multiplier into account</li>
<li>Fixed: outdated level documentation file</li>
<li>Added: flash effect on death</li>
<li>Added: pulse effect option is saved when closing the game</li>
<li>Added: <strong>mouse-button control</strong> (use left/right buttons to spin)</li>
<li>Added: <strong>custom sounds</strong> for level packs (they work differently from normal sounds, please refer to the sounds documentation)</li>
</ul>

<p>Version 1.52</p>

<ul>
<li>Fixed: non-folders in Packs/ directory caused crash</li>
<li>Fixed: impossible wall bug with low difficulty multipliers</li>
</ul>

<p>Version 1.51</p>

<ul>
<li>Fixed: crash on tutorial level</li>
<li>Added: Space and Enter keys now restart the game (only if you're already dead)</li>
</ul>

<p>Version 1.5</p>

<ul>
<li>Fixed: player death position now displays more accurately</li>
<li>Added: <strong>pulsing effect</strong> (can be disabled right in the main menu)</li>
<li>Added: <strong>level packs</strong> - sharing and installing levels is now really easy, just place the level folder in the Packs directory (unfortunately, scores are reset)</li>
<li>Added: additional shortcuts for menu options (requested by people having troubles with the function keys)</li>
<li>Changed: toned down difficulty multiplier's effect</li>
<li>Changed: difficulty multipliers has now a wider range</li>
<li>Changed: balanced default levels</li>
<li>Added: new hard endurance level, <strong>labyrinth</strong></li>
<li>Changed: delay multiplier now has an effect</li>
<li>Fixed: minor <strong>LUA</strong> bugs</li>
</ul>

<p>Version 1.4</p>

<ul>
<li>Changed: <strong>LUA</strong> file execution errors do not crash the game anymore - they display an error in the console and kill the player</li>
<li>Changed: <strong>LUA</strong> runtime execution errors do not crash the game anymore - they display an error in the console and try continuing the game</li>
<li>Removed: scripted events from default levels (the flow isn't interrupted anymore)</li>
<li>Removed: experimental pseudo-3D effects</li>
<li>Fixed: index calculation bug in default pattern <strong>LUA</strong> files (thanks Sean Pek!)</li>
<li>Fixed: level rotation always in the same direction</li>
<li>Fixed: <code>getPerfectDelay()</code> not returning the correct values</li>
<li>Added: <strong>LUA</strong> <strong>REQUIRED</strong> level function onUpdate(mFrameTime), which is called every frame</li>
<li>Added: <strong>LUA</strong> <code>isKeyPressed(mKey)</code> command, as requested - it returns true if <code>mKey</code> is pressed</li>
<li>Changed: logging is only enabled in debug mode, which can be set in config.json or by using the <code>debug.bat</code> file, which loads the debug config override</li>
</ul>

<p>Version 1.3a <em>(experimental version)</em></p>

<ul>
<li>Added: <strong>automatic difficulty variants</strong> (select in menu with up/down arrow key) - scores are not shared between difficulty variants!</li>
<li>Changed: balanced default levels to feel more like a natural progression</li>
<li>Fixed: random side changing now happens as soon as possible</li>
<li>Added: <strong>LUA</strong> hardcoded functions for levels (<code>onLoad</code>, <code>onStep</code>, <code>onUnload</code>, <code>onIncrement</code>) - <strong>these are REQUIRED in level script files</strong></li>
<li>Added: <strong>LUA</strong> <code>log(mLog)</code> function, which sends a message to the console</li>
<li>Fixed: <strong>LUA</strong> context now gets reset every time you start/restart a level</li>
<li>Added: <strong>3D effects</strong> (customizable in the level file) - they can be disabled from config.json</li>
<li>Added: <code>"rotation_speed_max"</code> level parameter</li>
<li>Changed: messages now show only the first time you play the level (not on restart)</li>
<li>Added: <code>"message_important_add"</code> event - it shows even if you restart the level</li>
<li>Added: <code>playSound(mId)</code> <strong>LUA</strong> command</li>
<li>Added: <code>forceIncrement()</code> <strong>LUA</strong> command</li>
<li>Added: <code>messageAdd(mMessage, mDuration)</code> <strong>LUA</strong> command</li>
<li>Added: <code>messageImportantAdd(mMessage, mDuration)</code> <strong>LUA</strong> command</li>
<li>Added: <code>getDifficultyMult()</code> <strong>LUA</strong> command</li>
<li>Added: new level and <strong>Commando Steve</strong> song</li>
<li>Fixed: impossible wall bug (?)</li>
</ul>

<p>Version 1.2</p>

<ul>
<li>Added: completely new <strong>JSON event scripting system</strong></li>
<li>Added: completely new <strong>LUA scripting</strong> for patterns</li>
<li>Added: <strong>new announcer sounds</strong> by <strong>BubblegumBalloon</strong>! (thank you)</li>
<li>Added: <strong>save profiles</strong> for scores</li>
<li>Added: new event scripting commands (<code>"play_sound"</code>, LUA-related)</li>
<li>Added: new song, <strong>Captain Cool</strong></li>
<li>Added: new level, <strong>Golden Ratio</strong></li>
</ul>

<p>Version 1.11</p>

<ul>
<li>Added: readme files for customization </li>
<li>Added: credits in menu screen</li>
<li>Added: JSON file for sound customization</li>
</ul>

<p>Version 1.1</p>

<ul>
<li>Fixed: input being registered when the game was not in focus</li>
<li>Added: config overrides (JSON files that override certain config parameters)</li>
<li>Added: .bat files for WINDOWED and FULLSCREEN modes</li>
<li>Changed: JSON name members for windowed/fullscreen config parameters</li>
<li>Fixed: sudden side number changing bug (now it waits until all the obstacles are removed)</li>
<li>Fixed: impossible pattern bug</li>
<li>Added: another tutorial level</li>
<li>Added: new style (zen2)</li>
</ul>

</body>
</html>
<!-- This document was created with MarkdownPad, the Markdown editor for Windows (http://markdownpad.com) -->