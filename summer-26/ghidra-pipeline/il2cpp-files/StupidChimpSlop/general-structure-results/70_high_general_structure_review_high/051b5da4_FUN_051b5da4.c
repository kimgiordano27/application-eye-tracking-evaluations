/*
FUNCTION_NAME: FUN_051b5da4
ENTRY_POINT: 051b5da4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x051b6008) */

long FUN_051b5da4(long param_1,int param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 local_a0 [4];
  uint local_9c;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  long local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 local_48;
  
  if ((DAT_06a51e1a & 1) == 0) {
    FUN_02d4dc40(PlayFab_EconomyModels_SetItemModerationStateRequest_var);
    FUN_02d4dc40(System_IO_StreamReader_var);
    FUN_02d4dc40(System_IO_StreamWriter_var);
    FUN_02d4dc40(System_Runtime_Serialization_StreamingContext_var);
    FUN_02d4dc40(System_Xml_Xsl_Runtime_StringConcat_var);
    FUN_02d4dc40(System_ComponentModel_StringConverter_var);
    FUN_02d4dc40(System_Reflection_StrongNameKeyPair_var);
    DAT_06a51e1a = 1;
  }
  local_48 = *(undefined8 *)(param_1 + 0x128);
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  thunk_FUN_02d5b8bc(local_48,0);
  local_78 = &local_48;
  local_80 = 0;
  if (*(long *)(param_1 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  FUN_036a68ac(&local_98,*(long *)(param_1 + 0x128),
               *(undefined8 *)System_Xml_Xsl_Runtime_StringConcat_var);
  puVar3 = System_ComponentModel_StringConverter_var;
  puVar2 = System_IO_StreamWriter_var;
  puVar1 = System_IO_StreamReader_var;
  uStack_68 = puStack_90;
  local_70 = local_98;
  local_60 = local_88;
  puStack_90 = &local_70;
  local_98 = 0;
  do {
    uVar5 = FUN_049c6928(&local_70,*(undefined8 *)puVar2);
    if ((uVar5 & 1) == 0) {
      lVar9 = 0;
      break;
    }
  } while ((((local_60 == 0) || (*(int *)(local_60 + 0x14) != param_2)) ||
           (*(byte *)(local_60 + 0x12) != param_3)) ||
          (lVar9 = local_60, (param_4 & 1) != (*(byte *)(local_60 + 0x10) & 2) >> 1));
  FUN_049c6924(&local_70,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_066462a0;
  if (lVar9 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if ((4 < *(byte *)(*(long *)(param_1 + 0x10) + 0x40)) && (1 < *(byte *)(param_1 + 0x40) - 3)) {
      local_98 = CONCAT44(local_98._4_4_,param_2);
      uVar6 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),&local_98);
      local_9c = param_3;
      uVar7 = thunk_FUN_02d8a270(*(undefined8 *)(puVar1 + 0x48),&local_9c);
      local_a0[0] = *(undefined1 *)(param_1 + 0x40);
      uVar8 = thunk_FUN_02d8a270(*(undefined8 *)
                                  PlayFab_EconomyModels_SetItemModerationStateRequest_var,local_a0);
      uVar6 = FUN_04e81020(*(undefined8 *)System_Reflection_StrongNameKeyPair_var,uVar6,uVar7,uVar8,
                           0);
      FUN_051afd44(param_1,5,uVar6);
    }
  }
  else {
    if (*(long *)(param_1 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    FUN_036a71f0(*(long *)(param_1 + 0x128),lVar9,*(undefined8 *)puVar3);
  }
  lVar4 = local_80;
  RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(*local_78,0);
  if (lVar4 == 0) {
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee0(lVar4);
}


