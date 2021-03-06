/*
 * Copyright (C) 2005-2011 MaNGOS <http://getmangos.com/>
 * Copyright (C) 2009-2011 MaNGOSZero <https://github.com/mangos/zero>
 * Copyright (C) 2011-2016 Nostalrius <https://nostalrius.org>
 * Copyright (C) 2016-2017 Elysium Project <https://github.com/elysium-project>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef MANGOS_DBCSFRM_H
#define MANGOS_DBCSFRM_H

#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
const char AreaTableEntryfmt[] = "iiinixxxxxissssssssssssssssxiixxxxx";
const char AreaTriggerEntryfmt[] = "niffffffff";
const char AuctionHouseEntryfmt[] = "niiixxxxxxxxxxxxxxxxx";
const char BankBagSlotPricesEntryfmt[] = "ni";
const char BattlemasterListEntryfmt[] = "niiiiiiiiiiiixxssssssssssssssssxx";
const char CharStartOutfitEntryfmt[] = "diiiiiiiiiiiiixxxxxxxxxxxxxxxxxxxxxxxxxxx";
// 3*12 new item fields in 3.0.x
// const char CharStartOutfitEntryfmt[]="diiiiiiiiiiiiiiiiiiiiiiiiixxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
const char CharTitlesEntryfmt[] = "nxssssssssssssssssxxxxxxxxxxxxxxxxxxi";
const char ChatChannelsEntryfmt[] = "iixssssssssssssssssxxxxxxxxxxxxxxxxxx";
// ChatChannelsEntryfmt, index not used (more compact store)
const char ChrClassesEntryfmt[] = "nxixssssssssssssssssxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxix";
const char ChrRacesEntryfmt[] = "niixiixxixxxxissssssssssssssssxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxi";
const char CinematicSequencesEntryfmt[] = "nxxxxxxxxx";
const char CreatureDisplayInfofmt[] = "nixifxxxxxxxxx";
const char CreatureDisplayInfoExtrafmt[] = "nixxxxxxxxxxxxxxxxxxx";
const char CreatureModelDatafmt[] = "nisxfxxxxxxxxxxfxxxxxxxx";
const char CreatureFamilyfmt[] = "nfifiiiissssssssssssssssxx";
const char CreatureSpellDatafmt[] = "niiiixxxx";
const char CreatureTypefmt[] = "nxxxxxxxxxxxxxxxxxx";
const char DurabilityCostsfmt[] = "niiiiiiiiiiiiiiiiiiiiiiiiiiiii";
const char DurabilityQualityfmt[] = "nf";
const char EmotesEntryfmt[] = "nxxiiix";
const char EmotesTextEntryfmt[] = "nxixxxxxxxxxxxxxxxx";
const char FactionEntryfmt[] = "niiiiiiiiiiiiiiiiiissssssssssssssssxxxxxxxxxxxxxxxxxx";
const char FactionTemplateEntryfmt[] = "niiiiiiiiiiiii";
const char GameObjectDisplayInfofmt[] = "nsxxxxxxxxxxffffff";
const char GemPropertiesEntryfmt[] = "nixxi";
const char GtCombatRatingsfmt[] = "f";
const char GtChanceToMeleeCritBasefmt[] = "f";
const char GtChanceToMeleeCritfmt[] = "f";
const char GtChanceToSpellCritBasefmt[] = "f";
const char GtChanceToSpellCritfmt[] = "f";
const char GtOCTRegenHPfmt[] = "f";
const char GtNPCManaCostScalerfmt[] = "f";
// const char GtOCTRegenMPfmt[]="f";
const char GtRegenHPPerSptfmt[] = "f";
const char GtRegenMPPerSptfmt[] = "f";
const char Itemfmt[] = "niii";
const char ItemBagFamilyfmt[] = "nxxxxxxxxxxxxxxxxx";
const char ItemClassfmt[] = "nxxssssssssssssssssx";
// const char ItemDisplayTemplateEntryfmt[]="nxxxxxxxxxxixxxxxxxxxxx";
// const char ItemCondExtCostsEntryfmt[]="xiii";
const char ItemExtendedCostEntryfmt[] = "niiiiiiiiiiiii";
const char ItemRandomPropertiesfmt[] = "nsiiixxssssssssssssssssx";
const char ItemRandomSuffixfmt[] = "nssssssssssssssssxxiiiiii";
const char ItemSetEntryfmt[] = "dssssssssssssssssxxxxxxxxxxxxxxxxxxiiiiiiiiiiiiiiiiii";
const char LiquidTypefmt[] = "niii";
const char LockEntryfmt[] = "niiiiiiiiiiiiiiiiiiiiiiiixxxxxxxx";
const char MailTemplateEntryfmt[] = "nxxxxxxxxxxxxxxxxxssssssssssssssssx";
//const char MapEntryfmt[] = "nxixssssssssssssssssxxxxxxxixxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxixxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxiffiixxi";
const char QuestSortEntryfmt[] = "nxxxxxxxxxxxxxxxxx";
const char RandomPropertiesPointsfmt[] = "niiiiiiiiiiiiiii";
const char SkillLinefmt[] = "nixssssssssssssssssxxxxxxxxxxxxxxxxxxi";
const char SkillLineAbilityfmt[] = "niiiixxiiiiixxi";
const char SkillRaceClassInfofmt[] = "diiiiixx";
const char SoundEntriesfmt[] = "niisxxxxxxxxxxxxxxxxxxxxxxxxx";
const char SpellCastTimefmt[] = "nixx";
const char SpellDurationfmt[] = "niii";
const char SpellFocusObjectfmt[] = "nxxxxxxxxxxxxxxxxx";
const char SpellItemEnchantmentfmt[] = "niiiiiixxxiiissssssssssssssssxiiii";
const char SpellItemEnchantmentConditionfmt[] = "nbbbbbxxxxxbbbbbbbbbbiiiiiXXXXX";
const char SpellRadiusfmt[] = "nfxx";
const char SpellRangefmt[] = "nffxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
const char SpellShapeshiftfmt[] = "nxxxxxxxxxxxxxxxxxxiixiixxxiiiiiiii";
const char StableSlotPricesfmt[] = "ni";
const char SummonPropertiesfmt[] = "niiiii";
const char TalentEntryfmt[] = "niiiiiiiixxxxixxixxxi";
const char TalentTabEntryfmt[] = "nxxxxxxxxxxxxxxxxxxxiix";
const char TaxiNodesEntryfmt[] = "nifffssssssssssssssssxii";
const char TaxiPathEntryfmt[] = "niii";
const char TaxiPathNodeEntryfmt[] = "diiifffiiii";
const char TotemCategoryEntryfmt[] = "nxxxxxxxxxxxxxxxxxii";
const char WMOAreaTableEntryfmt[] = "niiixxxxxiixxxxxxxxxxxxxxxxx";
const char WorldMapAreaEntryfmt[] = "xinxffffi";
// const char WorldMapOverlayEntryfmt[]="nxiiiixxxxxxxxxxx";
const char WorldSafeLocsEntryfmt[] = "nifffxxxxxxxxxxxxxxxxx";
#else
const char AreaTableEntryfmt[]="niiiixxxxxissssssssxixxxi";
const char AreaTriggerEntryfmt[]="niffffffff";
const char AuctionHouseEntryfmt[]="niiixxxxxxxxx";
const char BankBagSlotPricesEntryfmt[]="ni";
const char ChrClassesEntryfmt[]="nxxixssssssssxxix";
const char ChrRacesEntryfmt[]="niixiixxixxxxxixissssssssxxxx";
const char CharStartOutfitEntryfmt[]="diiiiiiiiiiiiixxxxxxxxxxxxxxxxxxxxxxxxxxx";
const char ChatChannelsEntryfmt[]="nixssssssssxxxxxxxxxx";                 // ChatChannelsEntryfmt, index not used (more compact store)
const char CinematicSequencesEntryfmt[]="nxxxxxxxxx";
const char CreatureDisplayInfofmt[]="nixifxxxxxxx";
const char CreatureDisplayInfoExtrafmt[]="nixxxxxxxxxxxxxxxxx";
const char CreatureModelDatafmt[] = "nisxfxxxxxxxxxxf";
const char CreatureFamilyfmt[]="nfifiiiissssssssxx";
const char CreatureSpellDatafmt[]="niiiixxxx";
const char CreatureTypefmt[]="nxxxxxxxxxx";
const char DurabilityCostsfmt[]="niiiiiiiiiiiiiiiiiiiiiiiiiiiii";
const char DurabilityQualityfmt[]="nf";
const char EmotesEntryfmt[]="nxxiiix";
const char EmotesTextEntryfmt[]="nxixxxxxxxxxxxxxxxx";
const char GameObjectDisplayInfofmt[]="nsxxxxxxxxxx";
const char ItemBagFamilyfmt[]="nxxxxxxxxx";
//const char ItemDisplayTemplateEntryfmt[]="nxxxxxxxxxxixxxxxxxxxxx";
const char ItemRandomPropertiesfmt[]="nsiiixxssssssssx";
const char ItemSetEntryfmt[]="dssssssssxxxxxxxxxxxxxxxxxxiiiiiiiiiiiiiiiiii";
const char LiquidTypefmt[]="niii";
const char LockEntryfmt[]="niiiiiiiiiiiiiiiiiiiiiiiixxxxxxxx";
const char MailTemplateEntryfmt[]="nxxxxxxxxx";
const char MapEntryfmt[]="nxixssssssssxxxxxxxixxxxxxxxxxxxxxxxxxixxx";
const char QuestSortEntryfmt[]="nxxxxxxxxx";
const char SkillLinefmt[]="nixssssssssxxxxxxxxxxi";
const char SkillLineAbilityfmt[]="niiiixxiiiiixxi";
const char SkillRaceClassInfofmt[]="diiiiixx";
const char SpellCastTimefmt[]="nixx";
const char SpellDurationfmt[]="niii";
const char SpellFocusObjectfmt[]="nxxxxxxxxx";
const char SpellItemEnchantmentfmt[]="niiiiiixxxiiissssssssxii";
const char SpellRadiusfmt[]="nfxx";
const char SpellRangefmt[]="nffxxxxxxxxxxxxxxxxxxx";
const char SpellShapeshiftfmt[]="nxxxxxxxxxxiix";
const char StableSlotPricesfmt[] = "ni";
const char TalentEntryfmt[]="niiiiiiiixxxxixxixxxi";
const char TalentTabEntryfmt[]="nxxxxxxxxxxxiix";
const char TaxiNodesEntryfmt[]="nifffssssssssxii";
const char TaxiPathEntryfmt[]="niii";
const char TaxiPathNodeEntryfmt[]="diiifffii";
const char WMOAreaTableEntryfmt[]="niiixxxxxiixxxxxxxxx";
const char WorldMapAreaEntryfmt[]="xinxffff";
//const char WorldMapOverlayEntryfmt[]="nxiiiixxxxxxxxxxx";
const char WorldSafeLocsEntryfmt[]="nifffxxxxxxxxx";
#endif // 0

#endif
