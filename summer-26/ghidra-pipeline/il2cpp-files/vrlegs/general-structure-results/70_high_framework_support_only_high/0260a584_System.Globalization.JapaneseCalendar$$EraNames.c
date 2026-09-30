/*
FUNCTION_NAME: System.Globalization.JapaneseCalendar$$EraNames
ENTRY_POINT: 0260a584
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0260b55c) */

undefined8 System_Globalization_JapaneseCalendar__EraNames(void)

{
  undefined *puVar1;
  bool in_ZR;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  long *unaff_x24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  if ((in_ZR) && (uVar3 = thunk_FUN_025bd1c0(), (uVar3 & 1) != 0)) {
    uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf0e28);
    System_Globalization_DateTimeFormatInfoScanner__AddDateWordOrPostfix(uVar4,0);
    return uVar4;
  }
  uVar4 = 0;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_02786d28(0,0,0);
  puVar1 = PTR_DAT_03cee5f0;
  if ((uVar3 & 1) == 0) goto LAB_0260b52c;
  lVar2 = *(long *)PTR_DAT_03cee5f0;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  uVar4 = **(undefined8 **)(lVar2 + 0xb8);
  in_stack_00000000._4_1_ = '\0';
  FUN_027e0bd8(uVar4,(long)&stack0x00000000 + 4,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  iVar5 = 0;
  if (lVar2 != 0) {
    iVar5 = 0xb4;
  }
  if (iVar5 == 0xb4) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = FUN_0219f8b8();
    if ((uVar3 & 1) == 0) goto LAB_0260b4c4;
    uVar6 = FUN_0279a64c(in_stack_00000008);
    iVar5 = 0xb7;
  }
  else if (iVar5 == 0) {
LAB_0260b4c4:
    uVar6 = 0;
    iVar5 = 0xb9;
  }
  else {
    uVar6 = 0;
  }
  if (in_stack_00000000._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
  }
  if ((iVar5 != 0xb9) && (iVar5 != 0)) {
    return uVar6;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar4 = FUN_01ab6d3c();
  in_stack_00000008 = uVar4;
LAB_0260b52c:
  uVar4 = FUN_0279a64c(uVar4);
  return uVar4;
}


