/*
FUNCTION_NAME: Niantic.Platform.Analytics.Telemetry.CommonTelemetryShopView$$WriteTo
ENTRY_POINT: 04fc4be0
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


void Niantic_Platform_Analytics_Telemetry_CommonTelemetryShopView__WriteTo(void)

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
  long unaff_x19;
  long *unaff_x20;
  long *plVar11;
  long lVar12;
  long unaff_x24;
  char cStack0000000000000008;
  char cStack0000000000000010;
  char cStack0000000000000018;
  char cStack0000000000000020;
  char cStack0000000000000028;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
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
  *(undefined1 *)(unaff_x24 + 0xce0) = 1;
  _cStack0000000000000018 = 0;
  _cStack0000000000000020 = 0;
  _cStack0000000000000008 = 0;
  _cStack0000000000000010 = 0;
  FUN_0501746c();
  _cStack0000000000000028 = 0;
  if ((char)unaff_x20[0xf] != '\0') {
    if (unaff_x19 == 0) goto LAB_04fc510c;
    if (((char)unaff_x20[0xf] == '\0') ||
       (*(int *)(unaff_x19 + 0x34) != *(int *)((long)unaff_x20 + 0x7c))) {
      Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                (&stack0x00000028,*(int *)(unaff_x19 + 0x34),*(undefined8 *)PTR_DAT_065fe420);
      FUN_04ff63ac();
    }
  }
  _cStack0000000000000020 = 0;
  if ((char)unaff_x20[0x10] != '\0') {
    if (unaff_x19 == 0) goto LAB_04fc510c;
    if (((char)unaff_x20[0x10] == '\0') ||
       (*(int *)(unaff_x19 + 0x3c) != *(int *)((long)unaff_x20 + 0x84))) {
      Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                (&stack0x00000020,*(int *)(unaff_x19 + 0x3c),*(undefined8 *)PTR_DAT_065fe430);
      FUN_04ff6414();
    }
  }
  _cStack0000000000000018 = 0;
  if ((char)unaff_x20[0x11] != '\0') {
    if (unaff_x19 == 0) goto LAB_04fc510c;
    if (((char)unaff_x20[0x11] == '\0') ||
       (*(int *)(unaff_x19 + 0x40) != *(int *)((long)unaff_x20 + 0x8c))) {
      Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                (&stack0x00000018,*(int *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_065fe448);
      FUN_04ff647c();
    }
  }
  _cStack0000000000000010 = 0;
  if ((char)unaff_x20[0x13] != '\0') {
    if (unaff_x19 == 0) goto LAB_04fc510c;
    if (((char)unaff_x20[0x13] == '\0') ||
       (*(int *)(unaff_x19 + 0x48) != *(int *)((long)unaff_x20 + 0x9c))) {
      Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                (&stack0x00000010,*(int *)(unaff_x19 + 0x48),*(undefined8 *)PTR_DAT_065fe480);
      FUN_04ff655c();
    }
  }
  _cStack0000000000000008 = 0;
  if ((char)unaff_x20[0x15] != '\0') {
    if (unaff_x19 == 0) goto LAB_04fc510c;
    if (((char)unaff_x20[0x15] == '\0') ||
       (*(int *)(unaff_x19 + 0x44) != *(int *)((long)unaff_x20 + 0xac))) {
      Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                (&stack0x00000008,*(int *)(unaff_x19 + 0x44),*(undefined8 *)PTR_DAT_065fe490);
      FUN_04ff64e4();
    }
  }
  plVar11 = (long *)unaff_x20[0x16];
  lVar12 = 0;
  if (plVar11 != (long *)0x0) {
    if (unaff_x19 == 0) goto LAB_04fc510c;
    uVar4 = FUN_04fe60ec();
    uVar5 = (**(code **)(*plVar11 + 0x138))(plVar11,uVar4,*(undefined8 *)(*plVar11 + 0x140));
    lVar12 = 0;
    if ((uVar5 & 1) == 0) {
      lVar12 = FUN_04fe60ec();
      *(long *)(unaff_x19 + 0x58) = unaff_x20[0x16];
    }
  }
  if ((char)unaff_x20[0x1a] == '\0') {
    uVar4 = 0;
  }
  else {
    if (unaff_x19 == 0) goto LAB_04fc510c;
    uVar5 = FUN_04db8dd0(*(undefined8 *)(unaff_x19 + 0x50),unaff_x20[0x19],0);
    uVar4 = 0;
    if ((uVar5 & 1) != 0) {
      uVar4 = *(undefined8 *)(unaff_x19 + 0x50);
      *(long *)(unaff_x19 + 0x50) = unaff_x20[0x19];
    }
  }
  puVar2 = PTR_DAT_065fe580;
  lVar6 = (**(code **)(*unaff_x20 + 0x1f8))();
  if (lVar6 == 0) {
LAB_04fc4f70:
    lVar6 = 0;
  }
  else {
    plVar11 = (long *)(**(code **)(*unaff_x20 + 0x1f8))();
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
    FUN_0503f284();
  }
  lVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065fe5a0);
  FUN_050350d4();
  if (lVar9 != 0) {
    lVar1 = unaff_x19;
    if (lVar6 != 0) {
      lVar1 = lVar6;
    }
    FUN_05035158(lVar9,lVar1);
    if (lVar6 != 0) {
      plVar11 = (long *)(**(code **)(*unaff_x20 + 0x1f8))();
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
      if (unaff_x19 == 0) goto LAB_04fc510c;
      FUN_04ff63ac();
    }
    if (cStack0000000000000020 != '\0') {
      if (unaff_x19 == 0) goto LAB_04fc510c;
      FUN_04ff6414();
    }
    if (cStack0000000000000018 != '\0') {
      if (unaff_x19 == 0) goto LAB_04fc510c;
      FUN_04ff647c();
    }
    if (cStack0000000000000010 != '\0') {
      if (unaff_x19 == 0) goto LAB_04fc510c;
      FUN_04ff655c();
    }
    if (cStack0000000000000008 != '\0') {
      if (unaff_x19 == 0) goto LAB_04fc510c;
      FUN_04ff64e4();
    }
    if ((char)unaff_x20[0x1a] != '\0') {
      if (unaff_x19 == 0) goto LAB_04fc510c;
      *(undefined8 *)(unaff_x19 + 0x50) = uVar4;
    }
    if (lVar12 != 0) {
      if (unaff_x19 == 0) goto LAB_04fc510c;
      *(long *)(unaff_x19 + 0x58) = lVar12;
    }
    return;
  }
LAB_04fc510c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


