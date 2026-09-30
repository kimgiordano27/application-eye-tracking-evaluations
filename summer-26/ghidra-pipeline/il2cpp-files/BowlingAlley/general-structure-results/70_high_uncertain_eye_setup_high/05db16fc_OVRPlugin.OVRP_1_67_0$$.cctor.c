/*
FUNCTION_NAME: OVRPlugin.OVRP_1_67_0$$.cctor
ENTRY_POINT: 05db16fc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_67_0___cctor(void)

{
  bool in_ZR;
  bool in_CY;
  long lVar1;
  undefined8 uVar2;
  int unaff_w19;
  undefined8 in_stack_00000018;
  
  uVar2 = in_stack_00000018;
                    /* try { // try from 05db16fc to 05eb1703 has its CatchHandler @ 05db1768 */
  if (in_CY && !in_ZR) {
    if (unaff_w19 == 0x2309f399) {
      lVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d30);
      FUN_05db389c(lVar1,uVar2);
      return lVar1;
    }
    if (unaff_w19 == 0x234bc3f1) {
      lVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d38);
      FUN_05db3844(lVar1,uVar2);
      return lVar1;
    }
    if (unaff_w19 == 0x24472f6c) {
      lVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d18);
      FUN_05db36e4(lVar1,uVar2);
      return lVar1;
    }
  }
  else {
    if (unaff_w19 == 0x22810483) {
      lVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d40);
      FUN_05db38f4(lVar1,uVar2);
      return lVar1;
    }
    if (unaff_w19 == 0x22933297) {
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


