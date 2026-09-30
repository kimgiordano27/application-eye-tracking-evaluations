/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionValid
ENTRY_POINT: 0321ad3c
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


uint OVRPlugin__GetNodePositionValid(void)

{
  uint uVar1;
  long lVar2;
  int in_w8;
  undefined8 in_x10;
  long unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w25;
  uint unaff_w26;
  long unaff_x28;
  long unaff_x29;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (in_w8 == 0x58) {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar1 = FUN_03223918();
  }
  else {
    lVar2 = *unaff_x20;
    *(undefined8 *)(unaff_x19 + 0x72) = 0;
    *(undefined8 *)(unaff_x19 + 0x6a) = 0;
    *(undefined8 *)(unaff_x29 + -0x98) = 0;
    *(undefined8 *)(unaff_x29 + -0xa0) = 0;
    *(undefined8 *)(unaff_x29 + -0x88) = 0;
    *(undefined8 *)(unaff_x29 + -0x90) = 0;
    *(undefined8 *)(unaff_x29 + -0xb8) = 0;
    *(undefined8 *)(unaff_x29 + -0xc0) = 0;
    *(undefined8 *)(unaff_x29 + -0xa8) = 0;
    *(undefined8 *)(unaff_x29 + -0xb0) = 0;
    *(undefined8 *)(unaff_x29 + -0xd8) = 0;
    *(undefined8 *)(unaff_x29 + -0xe0) = 0;
    *(undefined8 *)(unaff_x29 + -200) = 0;
    *(undefined8 *)(unaff_x29 + -0xd0) = 0;
    *(undefined8 *)(unaff_x29 + -0xe8) = 0;
    *(undefined8 *)(unaff_x29 + -0xf0) = 0;
    *(undefined8 *)(unaff_x29 + -0x130) = in_x10;
    if (*(int *)(lVar2 + 0xe0) == 0) {
                    /* try { // try from 0321ae08 to 0331ae2f has its CatchHandler @ 0321afc0 */
      thunk_FUN_016466fc();
    }
    FUN_03223228();
    uStack_18 = 0;
    uStack_20 = 0;
    uStack_8 = 0;
    uStack_10 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    if (DAT_0722c535 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06dc26f0);
      DAT_0722c535 = '\x01';
    }
    FUN_025eb094(unaff_x29 + -0x120,&uStack_40,0x20,0);
    if ((unaff_w26 & 0xffff) == 0) {
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_0321f874(unaff_x29 + -0x120,unaff_x29 + -0xf0);
    }
    else {
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_0321f2f4(unaff_x29 + -0x120,unaff_x29 + -0xf0,unaff_w26,unaff_w25,
                   *(undefined8 *)(unaff_x29 + -0x130),0);
    }
    uVar1 = FUN_025eb268(unaff_x29 + -0x120);
  }
  if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x68)) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


