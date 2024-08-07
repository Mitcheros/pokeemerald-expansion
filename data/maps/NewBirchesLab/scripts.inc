NewBirchesLab_MapScripts::
# 2 "data/maps/NewBirchesLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewBirchesLab_EventScript_BallDefault
	.byte 0


NewBirchesLab_EventScript_BallDefault::
# 6 "data/maps/NewBirchesLab/scripts.pory"
	setvar VAR_STARTER_REGION, 0
	return


Start_StarterChoose_Sequence::
# 10 "data/maps/NewBirchesLab/scripts.pory"
	lock
# 11 "data/maps/NewBirchesLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeetBirch
# 12 "data/maps/NewBirchesLab/scripts.pory"
	waitmovement 0
# 13 "data/maps/NewBirchesLab/scripts.pory"
	msgbox BeginAdventureText
# 14 "data/maps/NewBirchesLab/scripts.pory"
	waitmessage
# 15 "data/maps/NewBirchesLab/scripts.pory"
	closemessage
# 16 "data/maps/NewBirchesLab/scripts.pory"
	applymovement 4, ProfMove
# 17 "data/maps/NewBirchesLab/scripts.pory"
	waitmovement 0
# 18 "data/maps/NewBirchesLab/scripts.pory"
	setvar LITTLEROOT_STATE, 1
# 19 "data/maps/NewBirchesLab/scripts.pory"
	release
	return


Start_StarterChoose_Sequence2::
# 23 "data/maps/NewBirchesLab/scripts.pory"
	lock
# 24 "data/maps/NewBirchesLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeetBirch2
# 25 "data/maps/NewBirchesLab/scripts.pory"
	waitmovement 0
# 26 "data/maps/NewBirchesLab/scripts.pory"
	goto Start_StarterChoose_Sequence
	return


# 29 "data/maps/NewBirchesLab/scripts.pory"
MeetBirch:
# 30 "data/maps/NewBirchesLab/scripts.pory"
	walk_up
# 30 "data/maps/NewBirchesLab/scripts.pory"
	walk_up
# 30 "data/maps/NewBirchesLab/scripts.pory"
	walk_up
# 30 "data/maps/NewBirchesLab/scripts.pory"
	walk_up
	step_end

# 32 "data/maps/NewBirchesLab/scripts.pory"
MeetBirch2:
# 33 "data/maps/NewBirchesLab/scripts.pory"
	walk_left
	step_end

# 35 "data/maps/NewBirchesLab/scripts.pory"
ProfMove:
# 36 "data/maps/NewBirchesLab/scripts.pory"
	walk_up
# 37 "data/maps/NewBirchesLab/scripts.pory"
	walk_right
# 37 "data/maps/NewBirchesLab/scripts.pory"
	walk_right
# 38 "data/maps/NewBirchesLab/scripts.pory"
	walk_up
# 39 "data/maps/NewBirchesLab/scripts.pory"
	face_down
	step_end

StopLeaving::
# 56 "data/maps/NewBirchesLab/scripts.pory"
	lockall
# 57 "data/maps/NewBirchesLab/scripts.pory"
	msgbox StopLeaving_Text_0
# 58 "data/maps/NewBirchesLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DoNotLeave
# 59 "data/maps/NewBirchesLab/scripts.pory"
	waitmovement 0
# 60 "data/maps/NewBirchesLab/scripts.pory"
	releaseall
	return


# 63 "data/maps/NewBirchesLab/scripts.pory"
DoNotLeave:
# 64 "data/maps/NewBirchesLab/scripts.pory"
	walk_up
	step_end

NewBirchesLab_EventScript_Birch::
# 68 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewBirchesLab_EventScript_Birch_2
# 91 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Birch_Text_2, MSGBOX_NPC
NewBirchesLab_EventScript_Birch_1:
	end

NewBirchesLab_EventScript_Birch_2:
# 69 "data/maps/NewBirchesLab/scripts.pory"
	lock
# 70 "data/maps/NewBirchesLab/scripts.pory"
	faceplayer
# 71 "data/maps/NewBirchesLab/scripts.pory"
	message NewBirchesLab_EventScript_Birch_Text_0
# 72 "data/maps/NewBirchesLab/scripts.pory"
	multichoice 25, 5, MULTI_STARTER_CHOICE, 0
# 73 "data/maps/NewBirchesLab/scripts.pory"
	closemessage
# 74 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewBirchesLab_EventScript_Birch_6
# 78 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NewBirchesLab_EventScript_Birch_7
# 82 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq NewBirchesLab_EventScript_Birch_8
NewBirchesLab_EventScript_Birch_5:
# 86 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Birch_Text_1
# 87 "data/maps/NewBirchesLab/scripts.pory"
	waitmessage
# 88 "data/maps/NewBirchesLab/scripts.pory"
	release
	goto NewBirchesLab_EventScript_Birch_1

NewBirchesLab_EventScript_Birch_6:
# 75 "data/maps/NewBirchesLab/scripts.pory"
	call StarterFade
# 76 "data/maps/NewBirchesLab/scripts.pory"
	setvar VAR_STARTER_REGION, 2
	goto NewBirchesLab_EventScript_Birch_5

NewBirchesLab_EventScript_Birch_7:
# 79 "data/maps/NewBirchesLab/scripts.pory"
	call StarterFade
# 80 "data/maps/NewBirchesLab/scripts.pory"
	setvar VAR_STARTER_REGION, 1
	goto NewBirchesLab_EventScript_Birch_5

NewBirchesLab_EventScript_Birch_8:
# 83 "data/maps/NewBirchesLab/scripts.pory"
	call StarterFade
# 84 "data/maps/NewBirchesLab/scripts.pory"
	setvar VAR_STARTER_REGION, 0
	goto NewBirchesLab_EventScript_Birch_5


StarterFade::
# 97 "data/maps/NewBirchesLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 98 "data/maps/NewBirchesLab/scripts.pory"
	delay 20
# 99 "data/maps/NewBirchesLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


NewBirchesLab_EventScript_PokeballOne::
# 104 "data/maps/NewBirchesLab/scripts.pory"
	lockall
# 105 "data/maps/NewBirchesLab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 106 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewBirchesLab_EventScript_PokeballOne_2
# 124 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_PokeballOne_Text_0
NewBirchesLab_EventScript_PokeballOne_1:
# 126 "data/maps/NewBirchesLab/scripts.pory"
	waitmessage
# 127 "data/maps/NewBirchesLab/scripts.pory"
	releaseall
	end

NewBirchesLab_EventScript_PokeballOne_2:
# 107 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_STARTER_REGION, 0
	goto_if_eq NewBirchesLab_EventScript_PokeballOne_5
# 112 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_STARTER_REGION, 1
	goto_if_eq NewBirchesLab_EventScript_PokeballOne_6
# 117 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_STARTER_REGION, 2
	goto_if_eq NewBirchesLab_EventScript_PokeballOne_7
	goto NewBirchesLab_EventScript_PokeballOne_1

NewBirchesLab_EventScript_PokeballOne_5:
# 108 "data/maps/NewBirchesLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MUDKIP
# 109 "data/maps/NewBirchesLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_MUDKIP
# 110 "data/maps/NewBirchesLab/scripts.pory"
	call NewBirchesLab_EventScript_GiveStarter
	goto NewBirchesLab_EventScript_PokeballOne_1

NewBirchesLab_EventScript_PokeballOne_6:
# 113 "data/maps/NewBirchesLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 114 "data/maps/NewBirchesLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TOTODILE
# 115 "data/maps/NewBirchesLab/scripts.pory"
	call NewBirchesLab_EventScript_GiveStarter
	goto NewBirchesLab_EventScript_PokeballOne_1

NewBirchesLab_EventScript_PokeballOne_7:
# 118 "data/maps/NewBirchesLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
# 119 "data/maps/NewBirchesLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_SQUIRTLE
# 120 "data/maps/NewBirchesLab/scripts.pory"
	call NewBirchesLab_EventScript_GiveStarter
	goto NewBirchesLab_EventScript_PokeballOne_1


NewBirchesLab_EventScript_PokeballTwo::
# 132 "data/maps/NewBirchesLab/scripts.pory"
	lockall
# 133 "data/maps/NewBirchesLab/scripts.pory"
	setvar VAR_TEMP_0, 2
# 134 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewBirchesLab_EventScript_PokeballTwo_2
# 152 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_PokeballOne_Text_0
NewBirchesLab_EventScript_PokeballTwo_1:
# 154 "data/maps/NewBirchesLab/scripts.pory"
	waitmessage
# 155 "data/maps/NewBirchesLab/scripts.pory"
	releaseall
	end

NewBirchesLab_EventScript_PokeballTwo_2:
# 135 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_STARTER_REGION, 0
	goto_if_eq NewBirchesLab_EventScript_PokeballTwo_5
# 140 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_STARTER_REGION, 1
	goto_if_eq NewBirchesLab_EventScript_PokeballTwo_6
# 145 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_STARTER_REGION, 2
	goto_if_eq NewBirchesLab_EventScript_PokeballTwo_7
	goto NewBirchesLab_EventScript_PokeballTwo_1

NewBirchesLab_EventScript_PokeballTwo_5:
# 136 "data/maps/NewBirchesLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TREECKO
# 137 "data/maps/NewBirchesLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TREECKO
# 138 "data/maps/NewBirchesLab/scripts.pory"
	call NewBirchesLab_EventScript_GiveStarter
	goto NewBirchesLab_EventScript_PokeballTwo_1

NewBirchesLab_EventScript_PokeballTwo_6:
# 141 "data/maps/NewBirchesLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 142 "data/maps/NewBirchesLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CHIKORITA
# 143 "data/maps/NewBirchesLab/scripts.pory"
	call NewBirchesLab_EventScript_GiveStarter
	goto NewBirchesLab_EventScript_PokeballTwo_1

NewBirchesLab_EventScript_PokeballTwo_7:
# 146 "data/maps/NewBirchesLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
# 147 "data/maps/NewBirchesLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_BULBASAUR
# 148 "data/maps/NewBirchesLab/scripts.pory"
	call NewBirchesLab_EventScript_GiveStarter
	goto NewBirchesLab_EventScript_PokeballTwo_1


NewBirchesLab_EventScript_PokeballThree::
# 160 "data/maps/NewBirchesLab/scripts.pory"
	lockall
# 161 "data/maps/NewBirchesLab/scripts.pory"
	setvar VAR_TEMP_0, 3
# 162 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewBirchesLab_EventScript_PokeballThree_2
# 180 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_PokeballOne_Text_0
NewBirchesLab_EventScript_PokeballThree_1:
# 182 "data/maps/NewBirchesLab/scripts.pory"
	waitmessage
# 183 "data/maps/NewBirchesLab/scripts.pory"
	releaseall
	end

NewBirchesLab_EventScript_PokeballThree_2:
# 163 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_STARTER_REGION, 0
	goto_if_eq NewBirchesLab_EventScript_PokeballThree_5
# 168 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_STARTER_REGION, 1
	goto_if_eq NewBirchesLab_EventScript_PokeballThree_6
# 173 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_STARTER_REGION, 2
	goto_if_eq NewBirchesLab_EventScript_PokeballThree_7
	goto NewBirchesLab_EventScript_PokeballThree_1

NewBirchesLab_EventScript_PokeballThree_5:
# 164 "data/maps/NewBirchesLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 165 "data/maps/NewBirchesLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TORCHIC
# 166 "data/maps/NewBirchesLab/scripts.pory"
	call NewBirchesLab_EventScript_GiveStarter
	goto NewBirchesLab_EventScript_PokeballThree_1

NewBirchesLab_EventScript_PokeballThree_6:
# 169 "data/maps/NewBirchesLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 170 "data/maps/NewBirchesLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CYNDAQUIL
# 171 "data/maps/NewBirchesLab/scripts.pory"
	call NewBirchesLab_EventScript_GiveStarter
	goto NewBirchesLab_EventScript_PokeballThree_1

NewBirchesLab_EventScript_PokeballThree_7:
# 174 "data/maps/NewBirchesLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
# 175 "data/maps/NewBirchesLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CHARMANDER
# 176 "data/maps/NewBirchesLab/scripts.pory"
	call NewBirchesLab_EventScript_GiveStarter
	goto NewBirchesLab_EventScript_PokeballThree_1


NewBirchesLab_EventScript_GiveStarter::
# 189 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic VAR_STARTER_CHOICE, 10, 3
# 190 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_GiveStarter_Text_0, MSGBOX_YESNO
# 191 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchesLab_EventScript_GiveStarter_1
# 216 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 217 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_NotChosen
	return

NewBirchesLab_EventScript_GiveStarter_1:
# 192 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 193 "data/maps/NewBirchesLab/scripts.pory"
	setvar LITTLEROOT_STATE, 2
# 194 "data/maps/NewBirchesLab/scripts.pory"
	givemon VAR_STARTER_CHOICE, 50, ITEM_MASTER_BALL
# 195 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchesLab_EventScript_GiveStarter_4
# 202 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchesLab_EventScript_GiveStarter_5
# 211 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 212 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_GiveStarter_Text_3
	return

NewBirchesLab_EventScript_GiveStarter_4:
# 196 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 197 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_GiveStarter_Text_1
# 198 "data/maps/NewBirchesLab/scripts.pory"
	removeobject VAR_TEMP_0
# 199 "data/maps/NewBirchesLab/scripts.pory"
	call SetBallFlag
# 200 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewBirchesLab_EventScript_GiveStarter_5:
# 203 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 204 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_GiveStarter_Text_1
# 205 "data/maps/NewBirchesLab/scripts.pory"
	removeobject VAR_TEMP_0
# 206 "data/maps/NewBirchesLab/scripts.pory"
	call SetBallFlag
# 207 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
# 208 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_GiveStarter_Text_2
	return


SetBallFlag::
# 224 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SetBallFlag_2
# 228 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq SetBallFlag_5
# 232 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq SetBallFlag_7
	return

SetBallFlag_2:
# 225 "data/maps/NewBirchesLab/scripts.pory"
	setflag STARTER_BALL_ONE
	return

SetBallFlag_5:
# 229 "data/maps/NewBirchesLab/scripts.pory"
	setflag STARTER_BALL_TWO
	return

SetBallFlag_7:
# 233 "data/maps/NewBirchesLab/scripts.pory"
	setflag STARTER_BALL_THREE
	return


NicknamePartyMon::
# 239 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 240 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 241 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 242 "data/maps/NewBirchesLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 243 "data/maps/NewBirchesLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 250 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 251 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 252 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_1
	return

NicknameBoxMon_1:
# 253 "data/maps/NewBirchesLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	return


DontTouchThat::
# 263 "data/maps/NewBirchesLab/scripts.pory"
	lockall
# 264 "data/maps/NewBirchesLab/scripts.pory"
	msgbox DontTouchThat_Text_0
# 265 "data/maps/NewBirchesLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveAwayFromThere
# 266 "data/maps/NewBirchesLab/scripts.pory"
	waitmovement 0
# 267 "data/maps/NewBirchesLab/scripts.pory"
	releaseall
	return


# 270 "data/maps/NewBirchesLab/scripts.pory"
MoveAwayFromThere:
# 271 "data/maps/NewBirchesLab/scripts.pory"
	walk_left
# 271 "data/maps/NewBirchesLab/scripts.pory"
	walk_left
	step_end

StopLeaving_Text_0:
# 57 "data/maps/NewBirchesLab/scripts.pory"
	.string "You Need To Choose a Pokemon$"

NewBirchesLab_EventScript_Birch_Text_0:
# 71 "data/maps/NewBirchesLab/scripts.pory"
	.string "Would you like to see more?$"

NewBirchesLab_EventScript_Birch_Text_1:
# 86 "data/maps/NewBirchesLab/scripts.pory"
	.string "Choose wisely...$"

NewBirchesLab_EventScript_Birch_Text_2:
# 91 "data/maps/NewBirchesLab/scripts.pory"
	.string "Take care of your Pokemon$"

NewBirchesLab_EventScript_PokeballOne_Text_0:
# 124 "data/maps/NewBirchesLab/scripts.pory"
	.string "Don't Take Another$"

NewBirchesLab_EventScript_GiveStarter_Text_0:
# 190 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

NewBirchesLab_EventScript_GiveStarter_Text_1:
# 197 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved {STR_VAR_1}$"

NewBirchesLab_EventScript_GiveStarter_Text_2:
# 208 "data/maps/NewBirchesLab/scripts.pory"
	.string "Transferred {STR_VAR_1} to PC$"

NewBirchesLab_EventScript_GiveStarter_Text_3:
# 212 "data/maps/NewBirchesLab/scripts.pory"
	.string "No More Room For Pokemon$"

NicknamePartyMon_Text_0:
# 239 "data/maps/NewBirchesLab/scripts.pory"
	.string "Give a nickname?$"

DontTouchThat_Text_0:
# 264 "data/maps/NewBirchesLab/scripts.pory"
	.string "DONT TOUCH THAT$"

BeginAdventureText::
# 44 "data/maps/NewBirchesLab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Birch:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Hello {PLAYER}, my name is Prof Birch\n"
	.string "This is my lab.\p"
	.string "Today is the day that you will be\n"
	.string "receiving a Pokemon.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Now Choose Wisely,\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}If you would like to see more options\l"
	.string "come and talk to me.\n$"

NewBirchesLab_NotChosen::
# 257 "data/maps/NewBirchesLab/scripts.pory"
	.string "You did not choose {STR_VAR_1}$"
