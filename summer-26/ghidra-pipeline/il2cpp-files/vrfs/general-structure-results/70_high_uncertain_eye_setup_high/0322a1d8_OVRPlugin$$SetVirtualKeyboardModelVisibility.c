/*
FUNCTION_NAME: OVRPlugin$$SetVirtualKeyboardModelVisibility
ENTRY_POINT: 0322a1d8
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__SetVirtualKeyboardModelVisibility(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x24;
  long unaff_x26;
  long unaff_x27;
  long lVar6;
  long *plVar7;
  long unaff_x28;
  long in_stack_00000018;
  long in_stack_000000a8;
  
  uVar1 = (**(code **)(param_2 + 8))();
  uVar2 = (**(code **)(*(long *)(*(long *)(unaff_x27 + 0x38) + 0x18) + 8))();
  if ((uVar1 & 1) == 0) {
    uVar3 = (**(code **)(*(long *)(*(long *)(unaff_x27 + 0x38) + 0x18) + 8))();
                    /* try { // try from 0322a258 to 0332a25b has its CatchHandler @ 0322a264 */
                    /* try { // try from 0322a25c to 0332a287 has its CatchHandler @ 03229d90 */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 0322a258 with catch @ 0322a264
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 0322a180 with catch @ 0322a268
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 0322a0a8 with catch @ 0322a26c
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 0322a0e8 with catch @ 0322a270
                        */
    uVar1 = (**(code **)(*(long *)(*(long *)(unaff_x27 + 0x38) + 0x20) + 8))(uVar2,uVar3,unaff_w19);
  }
  else {
    uVar3 = (**(code **)(*(long *)(*(long *)(unaff_x27 + 0x38) + 0x18) + 8))();
    uVar1 = FUN_031cdb48(uVar2,uVar3,in_stack_00000018 * unaff_x20,0);
  }
  plVar7 = (long *)PTR_DAT_06dfabb8;
                    /* try { // try from 0322a288 to 0332a28b has its CatchHandler @ 0322a30c */
  if ((uVar1 & 1) != 0) {
    uVar5 = 0x7f800000;
    goto LAB_0322a528;
  }
  uVar1 = *(ulong *)(unaff_x21 + 0x78);
  if (*(char *)(unaff_x28 + 0x536) == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dfcf08);
    *(undefined1 *)(unaff_x28 + 0x536) = 1;
    if (uVar1 != 0) goto LAB_0322a2a4;
LAB_0322a2d4:
    uVar2 = 0;
  }
  else {
    if (uVar1 == 0) goto LAB_0322a2d4;
LAB_0322a2a4:
    uVar2 = FUN_02524ea0(uVar1,0);
    uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
  }
  if (cRam0000000007233a0a == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dfabb8);
    thunk_FUN_0159f088(PTR_DAT_06d9bc98);
    cRam0000000007233a0a = '\x01';
  }
  if (unaff_w19 == (int)uVar1) {
    if (unaff_w19 != 0) {
      lVar6 = *plVar7;
      in_stack_00000018 = 0;
      uVar4 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x38) + 0x10) + 8))(&stack0x00000018);
      uVar3 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x38) + 0x18) + 8))();
      if ((uVar4 & 1) == 0) {
        uVar2 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x38) + 0x18) + 8))(uVar2,uVar1);
        uVar1 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x38) + 0x20) + 8))(uVar3,uVar2,unaff_w19);
      }
      else {
        uVar2 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x38) + 0x18) + 8))(uVar2,uVar1);
        uVar1 = FUN_031cdb48(uVar3,uVar2,in_stack_00000018 * unaff_x20,0);
      }
      plVar7 = (long *)PTR_DAT_06dfabb8;
      if ((uVar1 & 1) == 0) goto LAB_0322a3e0;
    }
    uVar5 = 0xff800000;
    goto LAB_0322a528;
  }
LAB_0322a3e0:
  uVar1 = *(ulong *)(unaff_x21 + 0x68);
  if (*(char *)(unaff_x28 + 0x536) == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dfcf08);
    *(undefined1 *)(unaff_x28 + 0x536) = 1;
    if (uVar1 != 0) goto LAB_0322a3f0;
LAB_0322a420:
    uVar2 = 0;
  }
  else {
    if (uVar1 == 0) goto LAB_0322a420;
LAB_0322a3f0:
    uVar2 = FUN_02524ea0(uVar1,0);
    uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
  }
  if (cRam0000000007233a0a == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dfabb8);
    thunk_FUN_0159f088(PTR_DAT_06d9bc98);
    cRam0000000007233a0a = '\x01';
  }
  if (unaff_w19 == (int)uVar1) {
    if (unaff_w19 != 0) {
      lVar6 = *plVar7;
      in_stack_00000018 = 0;
      uVar4 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x38) + 0x10) + 8))(&stack0x00000018);
      uVar3 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x38) + 0x18) + 8))(unaff_x24);
      if ((uVar4 & 1) == 0) {
        uVar2 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x38) + 0x18) + 8))(uVar2,uVar1);
        uVar1 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x38) + 0x20) + 8))(uVar3,uVar2,unaff_w19);
      }
      else {
        uVar2 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x38) + 0x18) + 8))(uVar2,uVar1);
        uVar1 = FUN_031cdb48(uVar3,uVar2,in_stack_00000018 * unaff_x20,0);
      }
      if ((uVar1 & 1) == 0) goto LAB_0322a4d0;
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


