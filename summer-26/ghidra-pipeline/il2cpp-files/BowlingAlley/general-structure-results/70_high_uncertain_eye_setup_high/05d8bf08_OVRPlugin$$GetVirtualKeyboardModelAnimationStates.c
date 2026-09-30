/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardModelAnimationStates
ENTRY_POINT: 05d8bf08
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
OVRPlugin__GetVirtualKeyboardModelAnimationStates
          (ulong param_1,undefined4 param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  uint unaff_w21;
  long unaff_x23;
  long *unaff_x25;
  undefined8 in_stack_00000028;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072b18c8);
    *(undefined1 *)(unaff_x23 + 0x8d4) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  if (DAT_076d88fa == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_072b18c8);
    DAT_076d88fa = '\x01';
  }
  lVar4 = *unaff_x25;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar4 = *unaff_x25;
  }
  if (*(int *)(*(long *)(lVar4 + 0xb8) + 8) == 0) {
    if (param_3 != 0) {
      iVar2 = *(int *)(param_3 + 0x18);
      iVar1 = iVar2;
      if (iVar2 < 0) {
        iVar1 = iVar2 + 1;
      }
      iVar1 = iVar1 >> 1;
      if ((unaff_w21 & 1) == 0) {
        iVar1 = iVar2;
      }
      in_stack_00000028 = FUN_0584a884(param_3,3,0);
      uVar5 = FUN_0584a794(&stack0x00000028,0);
      if ((param_4 != 0) && (lVar4 = *(long *)(param_4 + 0x18), lVar4 != 0)) {
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar3 = FUN_05d8b170(param_2,uVar5,iVar1,unaff_w21 & 1,param_4 + 0x10,param_4 + 0x14,lVar4,
                             *(undefined4 *)(lVar4 + 0x18));
        FUN_0584a898(&stack0x00000028,0);
        return uVar3;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  return 0xfffff768;
}


