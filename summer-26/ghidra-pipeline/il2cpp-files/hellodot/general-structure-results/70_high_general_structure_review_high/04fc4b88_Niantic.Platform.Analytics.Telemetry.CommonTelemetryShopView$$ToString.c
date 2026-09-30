/*
FUNCTION_NAME: Niantic.Platform.Analytics.Telemetry.CommonTelemetryShopView$$ToString
ENTRY_POINT: 04fc4b88
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_structure_only;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Niantic_Platform_Analytics_Telemetry_CommonTelemetryShopView__ToString
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  char cStack0000000000000008;
  undefined4 uStack000000000000000c;
  char cStack0000000000000010;
  undefined4 uStack0000000000000014;
  char cStack0000000000000018;
  undefined4 uStack000000000000001c;
  char cStack0000000000000020;
  undefined4 uStack0000000000000024;
  char cStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  puVar2 = PTR_DAT_065fe598;
  if ((DAT_06a6fce0 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fe580);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fe5a0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fe478);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fe428);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fe438);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fe418);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fe488);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fe448);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fe420);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fe490);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fe480);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fe430);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fe4d8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fe4e0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fe4f0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fe518);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fe440);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fe5a8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fe598);
    DAT_06a6fce0 = 1;
  }
  _cStack0000000000000018 = 0;
  _cStack0000000000000020 = 0;
  _cStack0000000000000008 = 0;
  _cStack0000000000000010 = 0;
  FUN_0501746c(param_2,*(undefined8 *)puVar2,0);
  _cStack0000000000000028 = 0;
  if ((char)param_1[0xf] != '\0') {
    if (param_2 == 0) goto LAB_04fc510c;
    if (((char)param_1[0xf] == '\0') || (*(int *)(param_2 + 0x34) != *(int *)((long)param_1 + 0x7c))
       ) {
      Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                (&stack0x00000028,*(int *)(param_2 + 0x34),*(undefined8 *)PTR_DAT_065fe420);
      FUN_04ff63ac(param_2,*(undefined4 *)((long)param_1 + 0x7c),0);
    }
  }
  _cStack0000000000000020 = 0;
  if ((char)param_1[0x10] != '\0') {
    if (param_2 == 0) goto LAB_04fc510c;
    if (((char)param_1[0x10] == '\0') ||
       (*(int *)(param_2 + 0x3c) != *(int *)((long)param_1 + 0x84))) {
      Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                (&stack0x00000020,*(int *)(param_2 + 0x3c),*(undefined8 *)PTR_DAT_065fe430);
      FUN_04ff6414(param_2,*(undefined4 *)((long)param_1 + 0x84),0);
    }
  }
  _cStack0000000000000018 = 0;
  if ((char)param_1[0x11] != '\0') {
    if (param_2 == 0) goto LAB_04fc510c;
    if (((char)param_1[0x11] == '\0') ||
       (*(int *)(param_2 + 0x40) != *(int *)((long)param_1 + 0x8c))) {
      Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                (&stack0x00000018,*(int *)(param_2 + 0x40),*(undefined8 *)PTR_DAT_065fe448);
      FUN_04ff647c(param_2,*(undefined4 *)((long)param_1 + 0x8c),0);
    }
  }
  _cStack0000000000000010 = 0;
  if ((char)param_1[0x13] != '\0') {
    if (param_2 == 0) goto LAB_04fc510c;
    if (((char)param_1[0x13] == '\0') ||
       (*(int *)(param_2 + 0x48) != *(int *)((long)param_1 + 0x9c))) {
      Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                (&stack0x00000010,*(int *)(param_2 + 0x48),*(undefined8 *)PTR_DAT_065fe480);
      FUN_04ff655c(param_2,*(undefined4 *)((long)param_1 + 0x9c),0);
    }
  }
  _cStack0000000000000008 = 0;
  if ((char)param_1[0x15] != '\0') {
    if (param_2 == 0) goto LAB_04fc510c;
    if (((char)param_1[0x15] == '\0') ||
       (*(int *)(param_2 + 0x44) != *(int *)((long)param_1 + 0xac))) {
      Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                (&stack0x00000008,*(int *)(param_2 + 0x44),*(undefined8 *)PTR_DAT_065fe490);
      FUN_04ff64e4(param_2,*(undefined4 *)((long)param_1 + 0xac),0);
    }
  }
  plVar11 = (long *)param_1[0x16];
  lVar12 = 0;
  if (plVar11 != (long *)0x0) {
    if (param_2 == 0) goto LAB_04fc510c;
    uVar4 = FUN_04fe60ec(param_2,0);
    uVar5 = (**(code **)(*plVar11 + 0x138))(plVar11,uVar4,*(undefined8 *)(*plVar11 + 0x140));
    lVar12 = 0;
    if ((uVar5 & 1) == 0) {
      lVar12 = FUN_04fe60ec(param_2,0);
      *(long *)(param_2 + 0x58) = param_1[0x16];
    }
  }
  if ((char)param_1[0x1a] == '\0') {
    uVar4 = 0;
  }
  else {
    if (param_2 == 0) goto LAB_04fc510c;
    uVar5 = FUN_04db8dd0(*(undefined8 *)(param_2 + 0x50),param_1[0x19],0);
    uVar4 = 0;
    if ((uVar5 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x50);
      *(long *)(param_2 + 0x50) = param_1[0x19];
    }
  }
  puVar2 = PTR_DAT_065fe580;
  lVar6 = (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
  if (lVar6 == 0) {
LAB_04fc4f70:
    lVar6 = 0;
  }
  else {
    plVar11 = (long *)(**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
    if (plVar11 == (long *)0x0) goto LAB_04fc510c;
    lVar9 = *plVar11;
    lVar6 = *(long *)puVar2;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04fc4f38;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_02ce0a7c(plVar11,lVar6,0);
LAB_04fc4f38:
    iVar3 = (*(code *)*puVar7)(plVar11,puVar7[1]);
    if (iVar3 < 4) goto LAB_04fc4f70;
    lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065fe5a8);
    FUN_0503f284(lVar6,param_2,0);
  }
  lVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065fe5a0);
  FUN_050350d4(lVar9,param_1,0);
  if (lVar9 != 0) {
    lVar1 = param_2;
    if (lVar6 != 0) {
      lVar1 = lVar6;
    }
    FUN_05035158(lVar9,lVar1,param_3,param_4,0);
    if (lVar6 != 0) {
      plVar11 = (long *)(**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
      uVar8 = FUN_0503f448(lVar6,0);
      if (plVar11 == (long *)0x0) goto LAB_04fc510c;
      lVar9 = *plVar11;
      lVar6 = *(long *)puVar2;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_04fc5030;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_02ce0a7c(plVar11,lVar6,1);
LAB_04fc5030:
      (*(code *)*puVar7)(plVar11,4,uVar8,0,puVar7[1]);
    }
    if (cStack0000000000000028 != '\0') {
      if (param_2 == 0) goto LAB_04fc510c;
      FUN_04ff63ac(param_2,uStack000000000000002c,0);
    }
    if (cStack0000000000000020 != '\0') {
      if (param_2 == 0) goto LAB_04fc510c;
      FUN_04ff6414(param_2,uStack0000000000000024,0);
    }
    if (cStack0000000000000018 != '\0') {
      if (param_2 == 0) goto LAB_04fc510c;
      FUN_04ff647c(param_2,uStack000000000000001c,0);
    }
    if (cStack0000000000000010 != '\0') {
      if (param_2 == 0) goto LAB_04fc510c;
      FUN_04ff655c(param_2,uStack0000000000000014,0);
    }
    if (cStack0000000000000008 != '\0') {
      if (param_2 == 0) goto LAB_04fc510c;
      FUN_04ff64e4(param_2,uStack000000000000000c,0);
    }
    if ((char)param_1[0x1a] != '\0') {
      if (param_2 == 0) goto LAB_04fc510c;
      *(undefined8 *)(param_2 + 0x50) = uVar4;
    }
    if (lVar12 != 0) {
      if (param_2 == 0) goto LAB_04fc510c;
      *(long *)(param_2 + 0x58) = lVar12;
    }
    return;
  }
LAB_04fc510c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


