/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$.cctor
ENTRY_POINT: 05db1584
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_3
*/


long OVRPlugin_OVRP_1_65_0___cctor(void)

{
  undefined8 uVar1;
  long lVar2;
  uint unaff_w19;
  undefined8 in_stack_00000018;
  
  uVar1 = in_stack_00000018;
  if (unaff_w19 < 0x5ae8cd53) {
    if (unaff_w19 < 0x587c2a8e) {
      if (unaff_w19 == 0x586f2d14) {
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c38);
        FUN_05db2df4(lVar2,uVar1);
        return lVar2;
      }
      if (unaff_w19 == 0x587c2a8d) {
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d38);
        FUN_05db3844(lVar2,uVar1);
        return lVar2;
      }
    }
    else {
      if (unaff_w19 == 0x58d254a5) {
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d20);
        FUN_05db373c(lVar2,uVar1);
        return lVar2;
      }
      if (unaff_w19 == 0x593ccbdd) {
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1ba0);
        OVRPlugin_OVRP_1_72_0__ovrp_EraseSpace(lVar2,uVar1);
        return lVar2;
      }
      if (unaff_w19 == 0x5ae8cd52) {
        lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1bd8);
        FUN_05db29d4(lVar2,uVar1);
        return lVar2;
      }
    }
  }
  else if (unaff_w19 < 0x5b7ca1b7) {
                    /* try { // try from 05db18f8 to 05eb18fb has its CatchHandler @ 05db1984 */
    if (unaff_w19 == 0x5b4fbbe0) {
      lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1be8);
      FUN_05db2a84(lVar2,uVar1);
      return lVar2;
    }
    if (unaff_w19 == 0x5b7ca1b6) {
      lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c10);
      FUN_05db2c3c(lVar2,uVar1);
      return lVar2;
    }
  }
  else {
    if (unaff_w19 == 0x5cd7a24f) {
      lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c20);
      FUN_05db2cec(lVar2,uVar1);
      return lVar2;
    }
    if (unaff_w19 == 0x5d955d38) {
      lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1bd0);
      FUN_05db2924(lVar2,uVar1);
      return lVar2;
    }
    if (unaff_w19 == 0x5db3474c) {
      lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c88);
      FUN_05db310c(lVar2,uVar1);
      return lVar2;
    }
  }
  lVar2 = FUN_05db39fc(in_stack_00000018,unaff_w19);
  if (lVar2 == 0) {
    uVar1 = thunk_FUN_032a52d0(*(undefined8 *)PTR_DAT_072b1b88,&stack0x0000000c);
    uVar1 = FUN_057a25c4(*(undefined8 *)PTR_DAT_072b1d58,uVar1,0);
    if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
    }
    FUN_06bb2a00(uVar1,0);
    lVar2 = 0;
  }
  return lVar2;
}


