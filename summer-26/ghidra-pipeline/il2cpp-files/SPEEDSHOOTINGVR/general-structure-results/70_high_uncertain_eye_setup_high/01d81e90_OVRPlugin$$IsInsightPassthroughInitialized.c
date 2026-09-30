/*
FUNCTION_NAME: OVRPlugin$$IsInsightPassthroughInitialized
ENTRY_POINT: 01d81e90
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__IsInsightPassthroughInitialized(void)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  int iStack0000000000000018;
  
  _iStack0000000000000018 = 0;
  if (unaff_x24 == 0) {
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar3 = thunk_FUN_010400dc();
    FUN_01c66bb4(uVar3,0);
    uVar4 = thunk_FUN_010303a8(PTR_DAT_02359178);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar3,uVar4);
  }
  FUN_01d80358(&stack0x00000008);
  if (iStack0000000000000018 == 0) {
LAB_01d81f24:
    plVar1 = (long *)0x0;
  }
  else {
    if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x18) == 0)) {
      if (iStack0000000000000018 == 1) {
                    /* try { // try from 01d81ee4 to 01e81ef3 has its CatchHandler @ 01d81f98 */
        plVar1 = (long *)FUN_0174879c(&stack0x00000008,0,*(undefined8 *)PTR_DAT_02359170);
        if (unaff_x19 == (long *)0x0) {
          return plVar1;
        }
        if (plVar1 == (long *)0x0) goto LAB_01d82098;
                    /* try { // try from 01d81ef8 to 01e81efb has its CatchHandler @ 01d81f94 */
        (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230));
                    /* try { // try from 01d81f0c to 01e81f0f has its CatchHandler @ 01d81f8c */
        uVar2 = (**(code **)(*unaff_x19 + 0x838))();
                    /* try { // try from 01d81f20 to 01e81f3f has its CatchHandler @ 01d81f9c */
        if ((uVar2 & 1) != 0) {
          return plVar1;
        }
        goto LAB_01d81f24;
      }
      if (unaff_x19 == (long *)0x0) {
        uVar3 = thunk_FUN_010303a8(PTR_DAT_023538c8);
        thunk_FUN_010303a8(PTR_DAT_02353420);
        uVar4 = thunk_FUN_010400dc();
        FUN_01cc6268(uVar4,uVar3,0);
        uVar3 = thunk_FUN_010303a8(PTR_DAT_02359178);
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar4,uVar3);
      }
    }
    if ((unaff_w22 >> 0x10 & 1) == 0) {
      if (unaff_x23 == (long *)0x0) {
        if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        unaff_x23 = (long *)FUN_01d634a8(0);
        uVar3 = FUN_017487d4(&stack0x00000008,*(undefined8 *)PTR_DAT_023590f8);
        if (unaff_x23 == (long *)0x0) {
LAB_01d82098:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
      }
      else {
                    /* try { // try from 01d81f40 to 01e81f87 has its CatchHandler @ 01d81e7c */
        uVar3 = FUN_017487d4(&stack0x00000008,*(undefined8 *)PTR_DAT_023590f8);
      }
      plVar1 = (long *)(**(code **)(*unaff_x23 + 0x1c8))(unaff_x23,unaff_w22,uVar3);
    }
    else {
      uVar3 = FUN_017487d4(&stack0x00000008,*(undefined8 *)PTR_DAT_023590f8);
      if (*(int *)(*(long *)PTR_DAT_023584d8 + 0xe0) == 0) {
        thunk_FUN_01022c14(*(long *)PTR_DAT_023584d8);
      }
      plVar1 = (long *)FUN_01d77c90(uVar3);
    }
  }
  return plVar1;
}


