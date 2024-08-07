LittlerootTown_NewBirchsLab_MapScripts::
# 2 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_NewBirchsLab_EventScript_BallDefault
	.byte 0


LittlerootTown_NewBirchsLab_EventScript_BallDefault::
# 6 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_REGION, 0
	return


LittlerootTown_NewBirchsLab_EventScript_Birch::
# 10 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, LittlerootTown_NewBirchsLab_EventScript_Birch_4
LittlerootTown_NewBirchsLab_EventScript_Birch_3:
# 33 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Birch_Text_2, MSGBOX_NPC
LittlerootTown_NewBirchsLab_EventScript_Birch_1:
	end

LittlerootTown_NewBirchsLab_EventScript_Birch_2:
# 11 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	lockall
# 12 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	faceplayer
# 13 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	message LittlerootTown_NewBirchsLab_EventScript_Birch_Text_0
# 14 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	multichoice 25, 5, MULTI_STARTER_CHOICE, 0
# 15 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	closemessage
# 16 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Birch_10
# 20 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Birch_11
# 24 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Birch_12
LittlerootTown_NewBirchsLab_EventScript_Birch_9:
# 28 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Birch_Text_1
# 29 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	waitmessage
# 30 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	releaseall
	goto LittlerootTown_NewBirchsLab_EventScript_Birch_1

LittlerootTown_NewBirchsLab_EventScript_Birch_4:
# 10 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, LittlerootTown_NewBirchsLab_EventScript_Birch_6
	goto LittlerootTown_NewBirchsLab_EventScript_Birch_3

LittlerootTown_NewBirchsLab_EventScript_Birch_6:
# 10 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, LittlerootTown_NewBirchsLab_EventScript_Birch_2
	goto LittlerootTown_NewBirchsLab_EventScript_Birch_3

LittlerootTown_NewBirchsLab_EventScript_Birch_10:
# 17 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call StarterFade
# 18 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_REGION, 2
	goto LittlerootTown_NewBirchsLab_EventScript_Birch_9

LittlerootTown_NewBirchsLab_EventScript_Birch_11:
# 21 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call StarterFade
# 22 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_REGION, 1
	goto LittlerootTown_NewBirchsLab_EventScript_Birch_9

LittlerootTown_NewBirchsLab_EventScript_Birch_12:
# 25 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call StarterFade
# 26 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_REGION, 0
	goto LittlerootTown_NewBirchsLab_EventScript_Birch_9


StarterFade::
# 39 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 40 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	delay 20
# 41 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


LittlerootTown_NewBirchsLab_EventScript_PokeballOne::
# 46 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	lockall
# 47 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, LittlerootTown_NewBirchsLab_EventScript_PokeballOne_4
LittlerootTown_NewBirchsLab_EventScript_PokeballOne_3:
# 59 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_PokeballOne_Text_0
LittlerootTown_NewBirchsLab_EventScript_PokeballOne_1:
# 61 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	waitmessage
# 62 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_NewBirchsLab_EventScript_PokeballOne_2:
# 48 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_STARTER_REGION, 0
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_PokeballOne_9
# 51 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_STARTER_REGION, 1
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_PokeballOne_10
# 54 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_STARTER_REGION, 2
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_PokeballOne_11
	goto LittlerootTown_NewBirchsLab_EventScript_PokeballOne_1

LittlerootTown_NewBirchsLab_EventScript_PokeballOne_4:
# 47 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, LittlerootTown_NewBirchsLab_EventScript_PokeballOne_6
	goto LittlerootTown_NewBirchsLab_EventScript_PokeballOne_3

LittlerootTown_NewBirchsLab_EventScript_PokeballOne_6:
# 47 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, LittlerootTown_NewBirchsLab_EventScript_PokeballOne_2
	goto LittlerootTown_NewBirchsLab_EventScript_PokeballOne_3

LittlerootTown_NewBirchsLab_EventScript_PokeballOne_9:
# 49 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call LittlerootTown_NewBirchsLab_EventScript_Mudkip
	goto LittlerootTown_NewBirchsLab_EventScript_PokeballOne_1

LittlerootTown_NewBirchsLab_EventScript_PokeballOne_10:
# 52 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call LittlerootTown_NewBirchsLab_EventScript_Totodile
	goto LittlerootTown_NewBirchsLab_EventScript_PokeballOne_1

LittlerootTown_NewBirchsLab_EventScript_PokeballOne_11:
# 55 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call LittlerootTown_NewBirchsLab_EventScript_Squirtle
	goto LittlerootTown_NewBirchsLab_EventScript_PokeballOne_1


LittlerootTown_NewBirchsLab_EventScript_PokeballTwo::
# 67 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	lockall
# 68 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, LittlerootTown_NewBirchsLab_EventScript_PokeballTwo_4
LittlerootTown_NewBirchsLab_EventScript_PokeballTwo_3:
# 80 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_PokeballOne_Text_0
LittlerootTown_NewBirchsLab_EventScript_PokeballTwo_1:
# 82 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	waitmessage
# 83 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_NewBirchsLab_EventScript_PokeballTwo_2:
# 69 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_STARTER_REGION, 0
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_PokeballTwo_9
# 72 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_STARTER_REGION, 1
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_PokeballTwo_10
# 75 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_STARTER_REGION, 2
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_PokeballTwo_11
	goto LittlerootTown_NewBirchsLab_EventScript_PokeballTwo_1

LittlerootTown_NewBirchsLab_EventScript_PokeballTwo_4:
# 68 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, LittlerootTown_NewBirchsLab_EventScript_PokeballTwo_6
	goto LittlerootTown_NewBirchsLab_EventScript_PokeballTwo_3

LittlerootTown_NewBirchsLab_EventScript_PokeballTwo_6:
# 68 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, LittlerootTown_NewBirchsLab_EventScript_PokeballTwo_2
	goto LittlerootTown_NewBirchsLab_EventScript_PokeballTwo_3

LittlerootTown_NewBirchsLab_EventScript_PokeballTwo_9:
# 70 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call LittlerootTown_NewBirchsLab_EventScript_Treecko
	goto LittlerootTown_NewBirchsLab_EventScript_PokeballTwo_1

LittlerootTown_NewBirchsLab_EventScript_PokeballTwo_10:
# 73 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call LittlerootTown_NewBirchsLab_EventScript_Chikorita
	goto LittlerootTown_NewBirchsLab_EventScript_PokeballTwo_1

LittlerootTown_NewBirchsLab_EventScript_PokeballTwo_11:
# 76 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call LittlerootTown_NewBirchsLab_EventScript_Bulbasaur
	goto LittlerootTown_NewBirchsLab_EventScript_PokeballTwo_1


LittlerootTown_NewBirchsLab_EventScript_PokeballThree::
# 88 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	lockall
# 89 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, LittlerootTown_NewBirchsLab_EventScript_PokeballThree_4
LittlerootTown_NewBirchsLab_EventScript_PokeballThree_3:
# 101 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_PokeballOne_Text_0
LittlerootTown_NewBirchsLab_EventScript_PokeballThree_1:
# 103 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	waitmessage
# 104 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_NewBirchsLab_EventScript_PokeballThree_2:
# 90 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_STARTER_REGION, 0
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_PokeballThree_9
# 93 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_STARTER_REGION, 1
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_PokeballThree_10
# 96 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_STARTER_REGION, 2
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_PokeballThree_11
	goto LittlerootTown_NewBirchsLab_EventScript_PokeballThree_1

LittlerootTown_NewBirchsLab_EventScript_PokeballThree_4:
# 89 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, LittlerootTown_NewBirchsLab_EventScript_PokeballThree_6
	goto LittlerootTown_NewBirchsLab_EventScript_PokeballThree_3

LittlerootTown_NewBirchsLab_EventScript_PokeballThree_6:
# 89 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, LittlerootTown_NewBirchsLab_EventScript_PokeballThree_2
	goto LittlerootTown_NewBirchsLab_EventScript_PokeballThree_3

LittlerootTown_NewBirchsLab_EventScript_PokeballThree_9:
# 91 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call LittlerootTown_NewBirchsLab_EventScript_Torchic
	goto LittlerootTown_NewBirchsLab_EventScript_PokeballThree_1

LittlerootTown_NewBirchsLab_EventScript_PokeballThree_10:
# 94 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call LittlerootTown_NewBirchsLab_EventScript_Cyndaquil
	goto LittlerootTown_NewBirchsLab_EventScript_PokeballThree_1

LittlerootTown_NewBirchsLab_EventScript_PokeballThree_11:
# 97 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call LittlerootTown_NewBirchsLab_EventScript_Charmander
	goto LittlerootTown_NewBirchsLab_EventScript_PokeballThree_1


LittlerootTown_NewBirchsLab_EventScript_Mudkip::
# 110 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 111 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Mudkip_Text_0, MSGBOX_YESNO
# 112 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Mudkip_1
# 135 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	hidemonpic
# 136 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_NotChosen
	return

LittlerootTown_NewBirchsLab_EventScript_Mudkip_1:
# 113 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 114 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	givemon SPECIES_MUDKIP, 50, ITEM_MASTER_BALL
# 115 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Mudkip_4
# 122 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Mudkip_5
# 130 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	hidemonpic
# 131 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Mudkip_Text_2
	return

LittlerootTown_NewBirchsLab_EventScript_Mudkip_4:
# 116 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 117 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Mudkip_Text_1
# 118 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	removeobject 1
# 119 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 120 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewBirchsLab_EventScript_Mudkip_5:
# 123 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 124 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Mudkip_Text_1
# 125 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	removeobject 1
# 126 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 127 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewBirchsLab_EventScript_Totodile::
# 142 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 143 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Totodile_Text_0, MSGBOX_YESNO
# 144 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Totodile_1
# 167 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	hidemonpic
# 168 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_NotChosen
	return

LittlerootTown_NewBirchsLab_EventScript_Totodile_1:
# 145 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 146 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 50, ITEM_MASTER_BALL
# 147 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Totodile_4
# 154 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Totodile_5
# 162 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	hidemonpic
# 163 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Mudkip_Text_2
	return

LittlerootTown_NewBirchsLab_EventScript_Totodile_4:
# 148 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 149 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Totodile_Text_1
# 150 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	removeobject 1
# 151 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 152 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewBirchsLab_EventScript_Totodile_5:
# 155 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 156 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Totodile_Text_1
# 157 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	removeobject 1
# 158 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 159 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewBirchsLab_EventScript_Squirtle::
# 174 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 175 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Squirtle_Text_0, MSGBOX_YESNO
# 176 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Squirtle_1
# 199 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	hidemonpic
# 200 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_NotChosen
	return

LittlerootTown_NewBirchsLab_EventScript_Squirtle_1:
# 177 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 178 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 50, ITEM_MASTER_BALL
# 179 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Squirtle_4
# 186 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Squirtle_5
# 194 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	hidemonpic
# 195 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Mudkip_Text_2
	return

LittlerootTown_NewBirchsLab_EventScript_Squirtle_4:
# 180 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 181 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Squirtle_Text_1
# 182 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	removeobject 1
# 183 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 184 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewBirchsLab_EventScript_Squirtle_5:
# 187 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 188 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Squirtle_Text_1
# 189 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	removeobject 1
# 190 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 191 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewBirchsLab_EventScript_Treecko::
# 206 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 207 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Treecko_Text_0, MSGBOX_YESNO
# 208 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Treecko_1
# 231 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	hidemonpic
# 232 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_NotChosen
	return

LittlerootTown_NewBirchsLab_EventScript_Treecko_1:
# 209 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 210 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	givemon SPECIES_TREECKO, 50, ITEM_MASTER_BALL
# 211 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Treecko_4
# 218 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Treecko_5
# 226 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	hidemonpic
# 227 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Mudkip_Text_2
	return

LittlerootTown_NewBirchsLab_EventScript_Treecko_4:
# 212 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 213 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Treecko_Text_1
# 214 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	removeobject 2
# 215 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 216 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewBirchsLab_EventScript_Treecko_5:
# 219 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 220 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Treecko_Text_1
# 221 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	removeobject 2
# 222 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 223 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewBirchsLab_EventScript_Chikorita::
# 238 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 239 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Chikorita_Text_0, MSGBOX_YESNO
# 240 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Chikorita_1
# 263 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	hidemonpic
# 264 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_NotChosen
	return

LittlerootTown_NewBirchsLab_EventScript_Chikorita_1:
# 241 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 242 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 50, ITEM_MASTER_BALL
# 243 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Chikorita_4
# 250 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Chikorita_5
# 258 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	hidemonpic
# 259 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Mudkip_Text_2
	return

LittlerootTown_NewBirchsLab_EventScript_Chikorita_4:
# 244 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 245 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Chikorita_Text_1
# 246 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	removeobject 2
# 247 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 248 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewBirchsLab_EventScript_Chikorita_5:
# 251 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 252 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Chikorita_Text_1
# 253 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	removeobject 2
# 254 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 255 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewBirchsLab_EventScript_Bulbasaur::
# 270 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 271 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
# 272 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Bulbasaur_1
# 295 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	hidemonpic
# 296 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_NotChosen
	return

LittlerootTown_NewBirchsLab_EventScript_Bulbasaur_1:
# 273 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 274 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	givemon SPECIES_BULBASAUR, 50, ITEM_MASTER_BALL
# 275 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Bulbasaur_4
# 282 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Bulbasaur_5
# 290 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	hidemonpic
# 291 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Mudkip_Text_2
	return

LittlerootTown_NewBirchsLab_EventScript_Bulbasaur_4:
# 276 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 277 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Bulbasaur_Text_1
# 278 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	removeobject 2
# 279 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 280 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewBirchsLab_EventScript_Bulbasaur_5:
# 283 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 284 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Bulbasaur_Text_1
# 285 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	removeobject 2
# 286 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 287 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewBirchsLab_EventScript_Torchic::
# 302 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 303 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Torchic_Text_0, MSGBOX_YESNO
# 304 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Torchic_1
# 327 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	hidemonpic
# 328 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_NotChosen
	return

LittlerootTown_NewBirchsLab_EventScript_Torchic_1:
# 305 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 306 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	givemon SPECIES_TORCHIC, 50, ITEM_MASTER_BALL
# 307 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Torchic_4
# 314 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Torchic_5
# 322 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	hidemonpic
# 323 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Mudkip_Text_2
	return

LittlerootTown_NewBirchsLab_EventScript_Torchic_4:
# 308 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 309 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Torchic_Text_1
# 310 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	removeobject 3
# 311 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 312 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewBirchsLab_EventScript_Torchic_5:
# 315 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 316 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Torchic_Text_1
# 317 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	removeobject 3
# 318 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 319 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewBirchsLab_EventScript_Cyndaquil::
# 334 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 335 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
# 336 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Cyndaquil_1
# 359 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	hidemonpic
# 360 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_NotChosen
	return

LittlerootTown_NewBirchsLab_EventScript_Cyndaquil_1:
# 337 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 338 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 50, ITEM_MASTER_BALL
# 339 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Cyndaquil_4
# 346 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Cyndaquil_5
# 354 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	hidemonpic
# 355 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Mudkip_Text_2
	return

LittlerootTown_NewBirchsLab_EventScript_Cyndaquil_4:
# 340 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 341 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Cyndaquil_Text_1
# 342 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	removeobject 3
# 343 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 344 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewBirchsLab_EventScript_Cyndaquil_5:
# 347 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 348 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Cyndaquil_Text_1
# 349 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	removeobject 3
# 350 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 351 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	return


LittlerootTown_NewBirchsLab_EventScript_Charmander::
# 366 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 367 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Charmander_Text_0, MSGBOX_YESNO
# 368 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Charmander_1
# 391 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	hidemonpic
# 392 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_NotChosen
	return

LittlerootTown_NewBirchsLab_EventScript_Charmander_1:
# 369 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 370 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	givemon SPECIES_CHARMANDER, 50, ITEM_MASTER_BALL
# 371 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Charmander_4
# 378 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LittlerootTown_NewBirchsLab_EventScript_Charmander_5
# 386 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	hidemonpic
# 387 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Mudkip_Text_2
	return

LittlerootTown_NewBirchsLab_EventScript_Charmander_4:
# 372 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 373 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Charmander_Text_1
# 374 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	removeobject 3
# 375 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 376 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call NicknamePartyMon
	return

LittlerootTown_NewBirchsLab_EventScript_Charmander_5:
# 379 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 380 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox LittlerootTown_NewBirchsLab_EventScript_Charmander_Text_1
# 381 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	removeobject 3
# 382 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 383 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call NicknameBoxMon
	return


NicknamePartyMon::
# 399 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 400 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	hidemonpic
# 401 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 402 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 403 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 410 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 411 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	hidemonpic
# 412 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 415 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 413 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


LittlerootTown_NewBirchsLab_EventScript_Birch_Text_0:
# 13 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Hello, would you like to see more?$"

LittlerootTown_NewBirchsLab_EventScript_Birch_Text_1:
# 28 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Choose wisely...$"

LittlerootTown_NewBirchsLab_EventScript_Birch_Text_2:
# 33 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Take care of your Pokemon$"

LittlerootTown_NewBirchsLab_EventScript_PokeballOne_Text_0:
# 59 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Don't Take Another$"

LittlerootTown_NewBirchsLab_EventScript_Mudkip_Text_0:
# 111 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Do you want to choose Mudkip?$"

LittlerootTown_NewBirchsLab_EventScript_Mudkip_Text_1:
# 117 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Recieved Mudkip$"

LittlerootTown_NewBirchsLab_EventScript_Mudkip_Text_2:
# 131 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "No More Room$"

LittlerootTown_NewBirchsLab_EventScript_Totodile_Text_0:
# 143 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Do you want to choose Totodile?$"

LittlerootTown_NewBirchsLab_EventScript_Totodile_Text_1:
# 149 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Recieved Totodile$"

LittlerootTown_NewBirchsLab_EventScript_Squirtle_Text_0:
# 175 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

LittlerootTown_NewBirchsLab_EventScript_Squirtle_Text_1:
# 181 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Recieved Squirtle$"

LittlerootTown_NewBirchsLab_EventScript_Treecko_Text_0:
# 207 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Do you want to choose Treecko?$"

LittlerootTown_NewBirchsLab_EventScript_Treecko_Text_1:
# 213 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Recieved Treecko$"

LittlerootTown_NewBirchsLab_EventScript_Chikorita_Text_0:
# 239 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Do you want to choose Chikorita?$"

LittlerootTown_NewBirchsLab_EventScript_Chikorita_Text_1:
# 245 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Recieved Chikorita$"

LittlerootTown_NewBirchsLab_EventScript_Bulbasaur_Text_0:
# 271 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

LittlerootTown_NewBirchsLab_EventScript_Bulbasaur_Text_1:
# 277 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Recieved Bulbasaur$"

LittlerootTown_NewBirchsLab_EventScript_Torchic_Text_0:
# 303 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Do you want to choose Torchic?$"

LittlerootTown_NewBirchsLab_EventScript_Torchic_Text_1:
# 309 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Recieved Torchic$"

LittlerootTown_NewBirchsLab_EventScript_Cyndaquil_Text_0:
# 335 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

LittlerootTown_NewBirchsLab_EventScript_Cyndaquil_Text_1:
# 341 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Recieved Cyndaquil$"

LittlerootTown_NewBirchsLab_EventScript_Charmander_Text_0:
# 367 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Do you want to choose Charmander?$"

LittlerootTown_NewBirchsLab_EventScript_Charmander_Text_1:
# 373 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Recieved Charmander$"

NicknamePartyMon_Text_0:
# 399 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 415 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "Transferred to PC$"

LittlerootTown_NewBirchsLab_NotChosen::
# 418 "data/maps/LittlerootTown_NewBirchsLab/scripts.pory"
	.string "You did not choose the Pokemon$"
