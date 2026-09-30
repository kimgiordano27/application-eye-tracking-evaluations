/*
FUNCTION_NAME: OVRPlugin.OVRP_1_66_0$$ovrp_GetInsightPassthroughInitializationState
ENTRY_POINT: 05db160c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_66_0__ovrp_GetInsightPassthroughInitializationState(void)

{
  long lVar1;
  undefined8 uVar2;
  uint unaff_w19;
  undefined8 in_stack_00000018;
  
  uVar2 = in_stack_00000018;
  if (unaff_w19 < 0x7c2afdcc) {
    if (unaff_w19 < 0x77584ef4) {
      if (unaff_w19 == 0x773889f6) {
        lVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c40);
        FUN_05db2e4c(lVar1,uVar2);
        return lVar1;
      }
      if (unaff_w19 == 0x77584ef3) {
        lVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c18);
        FUN_05db2be4(lVar1,uVar2);
        return lVar1;
      }
    }
    else {
      if (unaff_w19 == 0x78c90470) {
LAB_05db21ac:
        lVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c08);
        FUN_05db2c94(lVar1,uVar2);
        return lVar1;
      }
      if (unaff_w19 == 0x7c2060de) {
        lVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1bb0);
        FUN_05db281c(lVar1,uVar2);
        return lVar1;
      }
      if (unaff_w19 == 0x7c2afdcb) goto LAB_05db1cac;
    }
  }
  else if (unaff_w19 < 0x7dd46e30) {
    if (unaff_w19 == 0x7d201556) {
LAB_05db1cac:
      lVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c00);
      FUN_05db2b8c(lVar1,uVar2);
      return lVar1;
    }
    if (unaff_w19 == 0x7dd46e2f) {
      lVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c50);
      FUN_05db394c(lVar1,uVar2);
      return lVar1;
    }
  }
  else {
    if (unaff_w19 == 0x7e9acaf5) {
      lVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1ce0);
      FUN_05db347c(lVar1,uVar2);
      return lVar1;
    }
    if (unaff_w19 == 0x7f4ca0c6) goto LAB_05db21ac;
    if (unaff_w19 == 0x7f79bcaa) {
      lVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d50);
      FUN_05db0920(lVar1,uVar2);
      return lVar1;
    }
  }
  lVar1 = FUN_05db39fc(in_stack_00000018,unaff_w19);
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_032a52d0(*(undefined8 *)PTR_DAT_072b1b88,&stack0x0000000c);
    uVar2 = FUN_057a25c4(*(undefined8 *)PTR_DAT_072b1d58,uVar2,0);
    if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
    }
    FUN_06bb2a00(uVar2,0);
    lVar1 = 0;
  }
  return lVar1;
}


