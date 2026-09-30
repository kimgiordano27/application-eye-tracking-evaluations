/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingSupported
ENTRY_POINT: 0322a36c
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__get_faceTrackingSupported(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  long unaff_x26;
  long unaff_x28;
  long in_stack_00000018;
  long in_stack_000000a8;
  
  uVar2 = FUN_031cdb48();
  puVar1 = PTR_DAT_06dfabb8;
  if ((uVar2 & 1) != 0) {
    uVar6 = 0xff800000;
    goto LAB_0322a528;
  }
  uVar2 = *(ulong *)(unaff_x21 + 0x68);
  if (*(char *)(unaff_x28 + 0x536) == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dfcf08);
    *(undefined1 *)(unaff_x28 + 0x536) = 1;
    if (uVar2 != 0) goto LAB_0322a3f0;
LAB_0322a420:
    uVar3 = 0;
  }
  else {
    if (uVar2 == 0) goto LAB_0322a420;
LAB_0322a3f0:
    uVar3 = FUN_02524ea0(uVar2,0);
    uVar2 = (ulong)*(uint *)(uVar2 + 0x10);
  }
  if (cRam0000000007233a0a == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dfabb8);
    thunk_FUN_0159f088(PTR_DAT_06d9bc98);
    cRam0000000007233a0a = '\x01';
  }
  if (unaff_w19 == (int)uVar2) {
    if (unaff_w19 != 0) {
      lVar7 = *(long *)puVar1;
      in_stack_00000018 = 0;
      uVar4 = (**(code **)(*(long *)(*(long *)(lVar7 + 0x38) + 0x10) + 8))(&stack0x00000018);
      uVar5 = (**(code **)(*(long *)(*(long *)(lVar7 + 0x38) + 0x18) + 8))();
      if ((uVar4 & 1) == 0) {
        uVar3 = (**(code **)(*(long *)(*(long *)(lVar7 + 0x38) + 0x18) + 8))(uVar3,uVar2);
        uVar2 = (**(code **)(*(long *)(*(long *)(lVar7 + 0x38) + 0x20) + 8))(uVar5,uVar3,unaff_w19);
      }
      else {
        uVar3 = (**(code **)(*(long *)(*(long *)(lVar7 + 0x38) + 0x18) + 8))(uVar3,uVar2);
        uVar2 = FUN_031cdb48(uVar5,uVar3,in_stack_00000018 * unaff_x20,0);
      }
      if ((uVar2 & 1) == 0) goto LAB_0322a4d0;
    }
    uVar6 = 0x7fc00000;
LAB_0322a528:
    if (*(long *)(unaff_x26 + 0x28) != in_stack_000000a8) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar6;
  }
LAB_0322a4d0:
  FUN_011aacf4(*(undefined8 *)PTR_DAT_06e3f9a0);
                    /* WARNING: Subroutine does not return */
  FUN_032266ac(0,0);
}


