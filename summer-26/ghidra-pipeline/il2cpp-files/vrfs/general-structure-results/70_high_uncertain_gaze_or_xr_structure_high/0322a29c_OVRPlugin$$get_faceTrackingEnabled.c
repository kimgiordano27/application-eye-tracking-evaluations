/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingEnabled
ENTRY_POINT: 0322a29c
PROGRAM: vrfs-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_9;functionality_gaze_retrieval_or_extraction
*/


undefined4 OVRPlugin__get_faceTrackingEnabled(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int in_w8;
  undefined4 uVar5;
  int unaff_w19;
  undefined1 *unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  undefined8 unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long lVar6;
  long unaff_x28;
  long in_stack_00000018;
  long in_stack_000000a8;
  
  if (in_w8 == 0) {
    thunk_FUN_0159f088(PTR_DAT_06dfcf08);
    *(undefined1 *)(unaff_x28 + 0x536) = 1;
                    /* try { // try from 0322a2d0 to 0332a2f7 has its CatchHandler @ 0322a318 */
    if (unaff_x22 != 0) goto LAB_0322a2a4;
LAB_0322a2d4:
    uVar1 = 0;
  }
  else {
    if (unaff_x22 == 0) goto LAB_0322a2d4;
LAB_0322a2a4:
    uVar1 = FUN_02524ea0();
    unaff_x22 = (ulong)*(uint *)(unaff_x22 + 0x10);
  }
  if (unaff_x20[0xa0a] == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dfabb8);
    thunk_FUN_0159f088(PTR_DAT_06d9bc98);
                    /* try { // try from 0322a2f8 to 0332a303 has its CatchHandler @ 03229d90 */
    unaff_x20[0xa0a] = 1;
  }
                    /* try { // try from 0322a304 to 0332a30b has its CatchHandler @ 0322a318 */
  if (unaff_w19 == (int)unaff_x22) {
    if (unaff_w19 != 0) {
                    /* catch() { ... } // from try @ 0322a288 with catch @ 0322a30c */
      lVar6 = *unaff_x27;
      in_stack_00000018 = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0322a2d0 with catch @ 0322a318
                       catch(type#2 @ 00000000) { ... } // from try @ 0322a304 with catch @ 0322a318
                        */
      uVar2 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x38) + 0x10) + 8))(&stack0x00000018);
      uVar3 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x38) + 0x18) + 8))();
      if ((uVar2 & 1) == 0) {
        uVar1 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x38) + 0x18) + 8))(uVar1,unaff_x22);
        uVar2 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x38) + 0x20) + 8))(uVar3,uVar1,unaff_w19);
      }
      else {
        uVar1 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x38) + 0x18) + 8))(uVar1,unaff_x22);
        uVar2 = FUN_031cdb48(uVar3,uVar1,in_stack_00000018 * unaff_x25,0);
      }
      unaff_x20 = &DAT_07233000;
      unaff_x27 = (long *)PTR_DAT_06dfabb8;
      if ((uVar2 & 1) == 0) goto LAB_0322a3e0;
    }
    uVar5 = 0xff800000;
    goto LAB_0322a528;
  }
LAB_0322a3e0:
  uVar2 = *(ulong *)(unaff_x21 + 0x68);
  if (*(char *)(unaff_x28 + 0x536) == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dfcf08);
    *(undefined1 *)(unaff_x28 + 0x536) = 1;
    if (uVar2 != 0) goto LAB_0322a3f0;
LAB_0322a420:
    uVar1 = 0;
  }
  else {
    if (uVar2 == 0) goto LAB_0322a420;
LAB_0322a3f0:
    uVar1 = FUN_02524ea0(uVar2,0);
    uVar2 = (ulong)*(uint *)(uVar2 + 0x10);
  }
  if (unaff_x20[0xa0a] == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dfabb8);
    thunk_FUN_0159f088(PTR_DAT_06d9bc98);
    unaff_x20[0xa0a] = 1;
  }
  if (unaff_w19 == (int)uVar2) {
    if (unaff_w19 != 0) {
      lVar6 = *unaff_x27;
      in_stack_00000018 = 0;
      uVar4 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x38) + 0x10) + 8))(&stack0x00000018);
      uVar3 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x38) + 0x18) + 8))(unaff_x24);
      if ((uVar4 & 1) == 0) {
        uVar1 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x38) + 0x18) + 8))(uVar1,uVar2);
        uVar2 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x38) + 0x20) + 8))(uVar3,uVar1,unaff_w19);
      }
      else {
        uVar1 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x38) + 0x18) + 8))(uVar1,uVar2);
        uVar2 = FUN_031cdb48(uVar3,uVar1,in_stack_00000018 * unaff_x25,0);
      }
      if ((uVar2 & 1) == 0) goto LAB_0322a4d0;
    }
    uVar5 = 0x7fc00000;
LAB_0322a528:
    if (*(long *)(unaff_x26 + 0x28) != in_stack_000000a8) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar5;
  }
LAB_0322a4d0:
  FUN_011aacf4(*(undefined8 *)PTR_DAT_06e3f9a0);
                    /* WARNING: Subroutine does not return */
  FUN_032266ac(0,0);
}


