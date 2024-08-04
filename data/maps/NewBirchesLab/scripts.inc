NewBirchesLab_MapScripts::
# 2 "data/maps/NewBirchesLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewBirchesLab_EventScript_BallDefault
	.byte 0


NewBirchesLab_EventScript_BallDefault::
# 6 "data/maps/NewBirchesLab/scripts.pory"
	setvar VAR_STARTER_REGION, 0
	return


NewBirchesLab_EventScript_Birch::
# 10 "data/maps/NewBirchesLab/scripts.pory"
	lockall
# 11 "data/maps/NewBirchesLab/scripts.pory"
	faceplayer
# 12 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_HIDE_POKEBALL1, NewBirchesLab_EventScript_Birch_4
NewBirchesLab_EventScript_Birch_3:
# 28 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Birch_Text_2
NewBirchesLab_EventScript_Birch_1:
# 30 "data/maps/NewBirchesLab/scripts.pory"
	waitmessage
# 31 "data/maps/NewBirchesLab/scripts.pory"
	releaseall
	end

NewBirchesLab_EventScript_Birch_2:
# 13 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Birch_Text_0, MSGBOX_YESNO
# 14 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchesLab_EventScript_Birch_9
# 24 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Birch_Text_1
	goto NewBirchesLab_EventScript_Birch_1

NewBirchesLab_EventScript_Birch_4:
# 12 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_HIDE_POKEBALL2, NewBirchesLab_EventScript_Birch_6
	goto NewBirchesLab_EventScript_Birch_3

NewBirchesLab_EventScript_Birch_6:
# 12 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_HIDE_POKEBALL3, NewBirchesLab_EventScript_Birch_2
	goto NewBirchesLab_EventScript_Birch_3

NewBirchesLab_EventScript_Birch_9:
# 15 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_STARTER_REGION, 2
	goto_if_ne NewBirchesLab_EventScript_Birch_13
# 19 "data/maps/NewBirchesLab/scripts.pory"
	setvar VAR_STARTER_REGION, 0
NewBirchesLab_EventScript_Birch_12:
# 21 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Birch_Text_1
	goto NewBirchesLab_EventScript_Birch_1

NewBirchesLab_EventScript_Birch_13:
# 16 "data/maps/NewBirchesLab/scripts.pory"
	addvar VAR_STARTER_REGION, 1
	goto NewBirchesLab_EventScript_Birch_12


NewBirchesLab_EventScript_PokeballOne::
# 36 "data/maps/NewBirchesLab/scripts.pory"
	lockall
# 37 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_HIDE_POKEBALL1, NewBirchesLab_EventScript_PokeballOne_4
NewBirchesLab_EventScript_PokeballOne_3:
# 49 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_PokeballOne_Text_0
NewBirchesLab_EventScript_PokeballOne_1:
# 51 "data/maps/NewBirchesLab/scripts.pory"
	waitmessage
# 52 "data/maps/NewBirchesLab/scripts.pory"
	releaseall
	end

NewBirchesLab_EventScript_PokeballOne_2:
# 38 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_STARTER_REGION, 0
	goto_if_eq NewBirchesLab_EventScript_PokeballOne_9
# 41 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_STARTER_REGION, 1
	goto_if_eq NewBirchesLab_EventScript_PokeballOne_10
# 44 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_STARTER_REGION, 2
	goto_if_eq NewBirchesLab_EventScript_PokeballOne_11
	goto NewBirchesLab_EventScript_PokeballOne_1

NewBirchesLab_EventScript_PokeballOne_4:
# 37 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_HIDE_POKEBALL2, NewBirchesLab_EventScript_PokeballOne_6
	goto NewBirchesLab_EventScript_PokeballOne_3

NewBirchesLab_EventScript_PokeballOne_6:
# 37 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_HIDE_POKEBALL3, NewBirchesLab_EventScript_PokeballOne_2
	goto NewBirchesLab_EventScript_PokeballOne_3

NewBirchesLab_EventScript_PokeballOne_9:
# 39 "data/maps/NewBirchesLab/scripts.pory"
	call NewBirchesLab_EventScript_Mudkip
	goto NewBirchesLab_EventScript_PokeballOne_1

NewBirchesLab_EventScript_PokeballOne_10:
# 42 "data/maps/NewBirchesLab/scripts.pory"
	call NewBirchesLab_EventScript_Totodile
	goto NewBirchesLab_EventScript_PokeballOne_1

NewBirchesLab_EventScript_PokeballOne_11:
# 45 "data/maps/NewBirchesLab/scripts.pory"
	call NewBirchesLab_EventScript_Squirtle
	goto NewBirchesLab_EventScript_PokeballOne_1


NewBirchesLab_EventScript_PokeballTwo::
# 57 "data/maps/NewBirchesLab/scripts.pory"
	lockall
# 58 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_HIDE_POKEBALL1, NewBirchesLab_EventScript_PokeballTwo_4
NewBirchesLab_EventScript_PokeballTwo_3:
# 70 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_PokeballOne_Text_0
NewBirchesLab_EventScript_PokeballTwo_1:
# 72 "data/maps/NewBirchesLab/scripts.pory"
	waitmessage
# 73 "data/maps/NewBirchesLab/scripts.pory"
	releaseall
	end

NewBirchesLab_EventScript_PokeballTwo_2:
# 59 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_STARTER_REGION, 0
	goto_if_eq NewBirchesLab_EventScript_PokeballTwo_9
# 62 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_STARTER_REGION, 1
	goto_if_eq NewBirchesLab_EventScript_PokeballTwo_10
# 65 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_STARTER_REGION, 2
	goto_if_eq NewBirchesLab_EventScript_PokeballTwo_11
	goto NewBirchesLab_EventScript_PokeballTwo_1

NewBirchesLab_EventScript_PokeballTwo_4:
# 58 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_HIDE_POKEBALL2, NewBirchesLab_EventScript_PokeballTwo_6
	goto NewBirchesLab_EventScript_PokeballTwo_3

NewBirchesLab_EventScript_PokeballTwo_6:
# 58 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_HIDE_POKEBALL3, NewBirchesLab_EventScript_PokeballTwo_2
	goto NewBirchesLab_EventScript_PokeballTwo_3

NewBirchesLab_EventScript_PokeballTwo_9:
# 60 "data/maps/NewBirchesLab/scripts.pory"
	call NewBirchesLab_EventScript_Treecko
	goto NewBirchesLab_EventScript_PokeballTwo_1

NewBirchesLab_EventScript_PokeballTwo_10:
# 63 "data/maps/NewBirchesLab/scripts.pory"
	call NewBirchesLab_EventScript_Chikorita
	goto NewBirchesLab_EventScript_PokeballTwo_1

NewBirchesLab_EventScript_PokeballTwo_11:
# 66 "data/maps/NewBirchesLab/scripts.pory"
	call NewBirchesLab_EventScript_Bulbasaur
	goto NewBirchesLab_EventScript_PokeballTwo_1


NewBirchesLab_EventScript_PokeballThree::
# 78 "data/maps/NewBirchesLab/scripts.pory"
	lockall
# 79 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_HIDE_POKEBALL1, NewBirchesLab_EventScript_PokeballThree_4
NewBirchesLab_EventScript_PokeballThree_3:
# 91 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_PokeballOne_Text_0
NewBirchesLab_EventScript_PokeballThree_1:
# 93 "data/maps/NewBirchesLab/scripts.pory"
	waitmessage
# 94 "data/maps/NewBirchesLab/scripts.pory"
	releaseall
	end

NewBirchesLab_EventScript_PokeballThree_2:
# 80 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_STARTER_REGION, 0
	goto_if_eq NewBirchesLab_EventScript_PokeballThree_9
# 83 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_STARTER_REGION, 1
	goto_if_eq NewBirchesLab_EventScript_PokeballThree_10
# 86 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_STARTER_REGION, 2
	goto_if_eq NewBirchesLab_EventScript_PokeballThree_11
	goto NewBirchesLab_EventScript_PokeballThree_1

NewBirchesLab_EventScript_PokeballThree_4:
# 79 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_HIDE_POKEBALL2, NewBirchesLab_EventScript_PokeballThree_6
	goto NewBirchesLab_EventScript_PokeballThree_3

NewBirchesLab_EventScript_PokeballThree_6:
# 79 "data/maps/NewBirchesLab/scripts.pory"
	goto_if_unset FLAG_HIDE_POKEBALL3, NewBirchesLab_EventScript_PokeballThree_2
	goto NewBirchesLab_EventScript_PokeballThree_3

NewBirchesLab_EventScript_PokeballThree_9:
# 81 "data/maps/NewBirchesLab/scripts.pory"
	call NewBirchesLab_EventScript_Torchic
	goto NewBirchesLab_EventScript_PokeballThree_1

NewBirchesLab_EventScript_PokeballThree_10:
# 84 "data/maps/NewBirchesLab/scripts.pory"
	call NewBirchesLab_EventScript_Cyndaquil
	goto NewBirchesLab_EventScript_PokeballThree_1

NewBirchesLab_EventScript_PokeballThree_11:
# 87 "data/maps/NewBirchesLab/scripts.pory"
	call NewBirchesLab_EventScript_Charmander
	goto NewBirchesLab_EventScript_PokeballThree_1


NewBirchesLab_EventScript_Mudkip::
# 100 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 101 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Mudkip_Text_0, MSGBOX_YESNO
# 102 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchesLab_EventScript_Mudkip_1
# 124 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 125 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_NotChosen
	return

NewBirchesLab_EventScript_Mudkip_1:
# 103 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_MUDKIP, 50, ITEM_MASTER_BALL
# 104 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchesLab_EventScript_Mudkip_4
# 111 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchesLab_EventScript_Mudkip_5
# 119 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 120 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Mudkip_Text_2
	return

NewBirchesLab_EventScript_Mudkip_4:
# 105 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 106 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Mudkip_Text_1
# 107 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 1
# 108 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_HIDE_POKEBALL1
# 109 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewBirchesLab_EventScript_Mudkip_5:
# 112 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 113 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Mudkip_Text_1
# 114 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 1
# 115 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_HIDE_POKEBALL1
# 116 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewBirchesLab_EventScript_Totodile::
# 131 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 132 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Totodile_Text_0, MSGBOX_YESNO
# 133 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchesLab_EventScript_Totodile_1
# 155 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 156 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_NotChosen
	return

NewBirchesLab_EventScript_Totodile_1:
# 134 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_TOTODILE, 50, ITEM_MASTER_BALL
# 135 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchesLab_EventScript_Totodile_4
# 142 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchesLab_EventScript_Totodile_5
# 150 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 151 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Mudkip_Text_2
	return

NewBirchesLab_EventScript_Totodile_4:
# 136 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 137 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Totodile_Text_1
# 138 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 1
# 139 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_HIDE_POKEBALL1
# 140 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewBirchesLab_EventScript_Totodile_5:
# 143 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 144 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Totodile_Text_1
# 145 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 1
# 146 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_HIDE_POKEBALL1
# 147 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewBirchesLab_EventScript_Squirtle::
# 162 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 163 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Squirtle_Text_0, MSGBOX_YESNO
# 164 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchesLab_EventScript_Squirtle_1
# 186 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 187 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_NotChosen
	return

NewBirchesLab_EventScript_Squirtle_1:
# 165 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 50, ITEM_MASTER_BALL
# 166 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchesLab_EventScript_Squirtle_4
# 173 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchesLab_EventScript_Squirtle_5
# 181 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 182 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Mudkip_Text_2
	return

NewBirchesLab_EventScript_Squirtle_4:
# 167 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 168 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Squirtle_Text_1
# 169 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 1
# 170 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_HIDE_POKEBALL1
# 171 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewBirchesLab_EventScript_Squirtle_5:
# 174 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 175 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Squirtle_Text_1
# 176 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 1
# 177 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_HIDE_POKEBALL1
# 178 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewBirchesLab_EventScript_Treecko::
# 193 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 194 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Treecko_Text_0, MSGBOX_YESNO
# 195 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchesLab_EventScript_Treecko_1
# 217 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 218 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_NotChosen
	return

NewBirchesLab_EventScript_Treecko_1:
# 196 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_TREECKO, 50, ITEM_MASTER_BALL
# 197 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchesLab_EventScript_Treecko_4
# 204 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchesLab_EventScript_Treecko_5
# 212 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 213 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Mudkip_Text_2
	return

NewBirchesLab_EventScript_Treecko_4:
# 198 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 199 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Treecko_Text_1
# 200 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 2
# 201 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_HIDE_POKEBALL2
# 202 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewBirchesLab_EventScript_Treecko_5:
# 205 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 206 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Treecko_Text_1
# 207 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 2
# 208 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_HIDE_POKEBALL2
# 209 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewBirchesLab_EventScript_Chikorita::
# 224 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 225 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Chikorita_Text_0, MSGBOX_YESNO
# 226 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchesLab_EventScript_Chikorita_1
# 248 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 249 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_NotChosen
	return

NewBirchesLab_EventScript_Chikorita_1:
# 227 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 50, ITEM_MASTER_BALL
# 228 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchesLab_EventScript_Chikorita_4
# 235 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchesLab_EventScript_Chikorita_5
# 243 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 244 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Mudkip_Text_2
	return

NewBirchesLab_EventScript_Chikorita_4:
# 229 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 230 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Chikorita_Text_1
# 231 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 2
# 232 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_HIDE_POKEBALL2
# 233 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewBirchesLab_EventScript_Chikorita_5:
# 236 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 237 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Chikorita_Text_1
# 238 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 2
# 239 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_HIDE_POKEBALL2
# 240 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewBirchesLab_EventScript_Bulbasaur::
# 255 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 256 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
# 257 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchesLab_EventScript_Bulbasaur_1
# 279 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 280 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_NotChosen
	return

NewBirchesLab_EventScript_Bulbasaur_1:
# 258 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_BULBASAUR, 50, ITEM_MASTER_BALL
# 259 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchesLab_EventScript_Bulbasaur_4
# 266 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchesLab_EventScript_Bulbasaur_5
# 274 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 275 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Mudkip_Text_2
	return

NewBirchesLab_EventScript_Bulbasaur_4:
# 260 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 261 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Bulbasaur_Text_1
# 262 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 2
# 263 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_HIDE_POKEBALL2
# 264 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewBirchesLab_EventScript_Bulbasaur_5:
# 267 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 268 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Bulbasaur_Text_1
# 269 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 2
# 270 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_HIDE_POKEBALL2
# 271 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewBirchesLab_EventScript_Torchic::
# 286 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 287 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Torchic_Text_0, MSGBOX_YESNO
# 288 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchesLab_EventScript_Torchic_1
# 310 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 311 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_NotChosen
	return

NewBirchesLab_EventScript_Torchic_1:
# 289 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_TORCHIC, 50, ITEM_MASTER_BALL
# 290 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchesLab_EventScript_Torchic_4
# 297 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchesLab_EventScript_Torchic_5
# 305 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 306 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Mudkip_Text_2
	return

NewBirchesLab_EventScript_Torchic_4:
# 291 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 292 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Torchic_Text_1
# 293 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 294 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_HIDE_POKEBALL3
# 295 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewBirchesLab_EventScript_Torchic_5:
# 298 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 299 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Torchic_Text_1
# 300 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 301 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_HIDE_POKEBALL3
# 302 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewBirchesLab_EventScript_Cyndaquil::
# 317 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 318 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
# 319 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchesLab_EventScript_Cyndaquil_1
# 341 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 342 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_NotChosen
	return

NewBirchesLab_EventScript_Cyndaquil_1:
# 320 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 50, ITEM_MASTER_BALL
# 321 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchesLab_EventScript_Cyndaquil_4
# 328 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchesLab_EventScript_Cyndaquil_5
# 336 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 337 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Mudkip_Text_2
	return

NewBirchesLab_EventScript_Cyndaquil_4:
# 322 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 323 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Cyndaquil_Text_1
# 324 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 325 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_HIDE_POKEBALL3
# 326 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewBirchesLab_EventScript_Cyndaquil_5:
# 329 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 330 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Cyndaquil_Text_1
# 331 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 332 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_HIDE_POKEBALL3
# 333 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NewBirchesLab_EventScript_Charmander::
# 348 "data/maps/NewBirchesLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 349 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Charmander_Text_0, MSGBOX_YESNO
# 350 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchesLab_EventScript_Charmander_1
# 372 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 373 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_NotChosen
	return

NewBirchesLab_EventScript_Charmander_1:
# 351 "data/maps/NewBirchesLab/scripts.pory"
	givemon SPECIES_CHARMANDER, 50, ITEM_MASTER_BALL
# 352 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchesLab_EventScript_Charmander_4
# 359 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchesLab_EventScript_Charmander_5
# 367 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 368 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Mudkip_Text_2
	return

NewBirchesLab_EventScript_Charmander_4:
# 353 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 354 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Charmander_Text_1
# 355 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 356 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_HIDE_POKEBALL3
# 357 "data/maps/NewBirchesLab/scripts.pory"
	call NicknamePartyMon
	return

NewBirchesLab_EventScript_Charmander_5:
# 360 "data/maps/NewBirchesLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 361 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NewBirchesLab_EventScript_Charmander_Text_1
# 362 "data/maps/NewBirchesLab/scripts.pory"
	removeobject 3
# 363 "data/maps/NewBirchesLab/scripts.pory"
	setflag FLAG_HIDE_POKEBALL3
# 364 "data/maps/NewBirchesLab/scripts.pory"
	call NicknameBoxMon
	return


NicknamePartyMon::
# 380 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 381 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 382 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 383 "data/maps/NewBirchesLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 384 "data/maps/NewBirchesLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 391 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 392 "data/maps/NewBirchesLab/scripts.pory"
	hidemonpic
# 393 "data/maps/NewBirchesLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 396 "data/maps/NewBirchesLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 394 "data/maps/NewBirchesLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


NewBirchesLab_EventScript_Birch_Text_0:
# 13 "data/maps/NewBirchesLab/scripts.pory"
	.string "Hello, would you like to see more?$"

NewBirchesLab_EventScript_Birch_Text_1:
# 21 "data/maps/NewBirchesLab/scripts.pory"
	.string "Choose your Pokemon wisely$"

NewBirchesLab_EventScript_Birch_Text_2:
# 28 "data/maps/NewBirchesLab/scripts.pory"
	.string "Take care of your Pokemon$"

NewBirchesLab_EventScript_PokeballOne_Text_0:
# 49 "data/maps/NewBirchesLab/scripts.pory"
	.string "Don't Take Another$"

NewBirchesLab_EventScript_Mudkip_Text_0:
# 101 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Mudkip?$"

NewBirchesLab_EventScript_Mudkip_Text_1:
# 106 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Mudkip$"

NewBirchesLab_EventScript_Mudkip_Text_2:
# 120 "data/maps/NewBirchesLab/scripts.pory"
	.string "No More Room$"

NewBirchesLab_EventScript_Totodile_Text_0:
# 132 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Totodile?$"

NewBirchesLab_EventScript_Totodile_Text_1:
# 137 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Totodile$"

NewBirchesLab_EventScript_Squirtle_Text_0:
# 163 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

NewBirchesLab_EventScript_Squirtle_Text_1:
# 168 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Squirtle$"

NewBirchesLab_EventScript_Treecko_Text_0:
# 194 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Treecko?$"

NewBirchesLab_EventScript_Treecko_Text_1:
# 199 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Treecko$"

NewBirchesLab_EventScript_Chikorita_Text_0:
# 225 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Chikorita?$"

NewBirchesLab_EventScript_Chikorita_Text_1:
# 230 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Chikorita$"

NewBirchesLab_EventScript_Bulbasaur_Text_0:
# 256 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

NewBirchesLab_EventScript_Bulbasaur_Text_1:
# 261 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Bulbasaur$"

NewBirchesLab_EventScript_Torchic_Text_0:
# 287 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Torchic?$"

NewBirchesLab_EventScript_Torchic_Text_1:
# 292 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Torchic$"

NewBirchesLab_EventScript_Cyndaquil_Text_0:
# 318 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

NewBirchesLab_EventScript_Cyndaquil_Text_1:
# 323 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Cyndaquil$"

NewBirchesLab_EventScript_Charmander_Text_0:
# 349 "data/maps/NewBirchesLab/scripts.pory"
	.string "Do you want to choose Charmander?$"

NewBirchesLab_EventScript_Charmander_Text_1:
# 354 "data/maps/NewBirchesLab/scripts.pory"
	.string "Recieved Charmander$"

NicknamePartyMon_Text_0:
# 380 "data/maps/NewBirchesLab/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 396 "data/maps/NewBirchesLab/scripts.pory"
	.string "Transferred to PC$"

NewBirchesLab_NotChosen::
# 399 "data/maps/NewBirchesLab/scripts.pory"
	.string "You did not choose the Pokemon$"
