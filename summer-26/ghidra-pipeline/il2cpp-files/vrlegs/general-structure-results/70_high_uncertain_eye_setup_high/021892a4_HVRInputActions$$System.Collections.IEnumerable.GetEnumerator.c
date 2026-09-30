/*
FUNCTION_NAME: HVRInputActions$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 021892a4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021893f8) */

undefined4 HVRInputActions__System_Collections_IEnumerable_GetEnumerator(long param_1)

{
  uint uVar1;
  long lVar2;
  uint in_w9;
  uint in_w10;
  uint in_w11;
  long in_x12;
  long *unaff_x20;
  undefined4 uVar3;
  long unaff_x21;
  long unaff_x22;
  long lVar4;
  long lVar5;
  int unaff_w24;
  undefined8 in_stack_00000008;
  
  do {
    if (in_x12 == 0) {
LAB_021892bc:
      uVar3 = 0;
      goto LAB_02189374;
    }
    uVar1 = 0;
    if (in_w9 + 1 != unaff_w24) {
      uVar1 = in_w9 + 1;
    }
    if (uVar1 == in_w11) goto LAB_021892bc;
    if (in_w10 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    in_x12 = *(long *)(param_1 + (long)(int)uVar1 * 0x10 + 0x20);
    in_w9 = uVar1;
  } while (in_x12 != unaff_x22);
  lVar4 = *(long *)(param_1 + (long)(int)uVar1 * 0x10 + 0x28);
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8(lVar5);
  }
  if (lVar4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = thunk_FUN_01a89d6c(lVar4,lVar5);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(lVar4,lVar5);
    }
  }
  *unaff_x20 = lVar2;
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8(lVar5);
  }
  if ((lVar4 != 0) && (lVar2 = thunk_FUN_01a89d6c(lVar4,lVar5), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0(lVar4,lVar5);
  }
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar3 = 1;
LAB_02189374:
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return uVar3;
}


