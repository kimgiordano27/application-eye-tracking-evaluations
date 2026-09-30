/*
FUNCTION_NAME: System.Globalization.JapaneseCalendar$$get_Eras
ENTRY_POINT: 0260a56c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0260b55c) */

undefined8 System_Globalization_JapaneseCalendar__get_Eras(uint param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  uint in_w8;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  if (param_1 == (in_w8 & 0xffff | 0xd20a0000)) {
    uVar3 = thunk_FUN_025bd1c0();
    uVar6 = 0;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_01ab6d3c(*(undefined8 *)PTR_DAT_03cf15a8,*(undefined8 *)PTR_DAT_03cbebe8,
                           *(undefined8 *)PTR_DAT_03cf12d0);
      in_stack_00000008 = uVar6;
    }
  }
  else if (param_1 == 0xd2599303) {
    uVar3 = thunk_FUN_025bd1c0();
    uVar6 = 0;
    if ((uVar3 & 1) != 0) {
      uVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf0e28);
      System_Globalization_DateTimeFormatInfoScanner__AddDateWordOrPostfix(uVar6,0);
      return uVar6;
    }
  }
  else {
    uVar6 = 0;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_02786d28(uVar6,0,0);
  puVar1 = PTR_DAT_03cee5f0;
  if ((uVar3 & 1) == 0) goto LAB_0260b52c;
  lVar2 = *(long *)PTR_DAT_03cee5f0;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  uVar6 = **(undefined8 **)(lVar2 + 0xb8);
  in_stack_00000000._4_1_ = '\0';
  FUN_027e0bd8(uVar6,(long)&stack0x00000000 + 4,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  iVar4 = 0;
  if (lVar2 != 0) {
    iVar4 = 0xb4;
  }
  if (iVar4 == 0xb4) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = FUN_0219f8b8();
    if ((uVar3 & 1) == 0) goto LAB_0260b4c4;
    uVar5 = FUN_0279a64c(in_stack_00000008);
    iVar4 = 0xb7;
  }
  else if (iVar4 == 0) {
LAB_0260b4c4:
    uVar5 = 0;
    iVar4 = 0xb9;
  }
  else {
    uVar5 = 0;
  }
  if (in_stack_00000000._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
  }
  if ((iVar4 != 0xb9) && (iVar4 != 0)) {
    return uVar5;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_01ab6d3c();
  in_stack_00000008 = uVar6;
LAB_0260b52c:
  uVar6 = FUN_0279a64c(uVar6);
  return uVar6;
}


