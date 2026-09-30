/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.MemberInfoExtensions$$GetValue
ENTRY_POINT: 052c742c
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Utils_MemberInfoExtensions__GetValue
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int in_w10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  *(int *)(unaff_x20 + 0x1c) = in_w10 + 1;
  if (param_1 == 0) goto LAB_052c7534;
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
    *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = param_3;
    thunk_FUN_02f411dc();
  }
  else {
    FUN_03fd0c9c();
  }
  lVar3 = *(long *)(unaff_x21 + 0x48);
  if (lVar3 != 0) {
    if (unaff_x20 == 0) goto LAB_052c7534;
    lVar4 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar4 == 0) goto LAB_052c7534;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = lVar3;
      thunk_FUN_02f411dc();
    }
    else {
      FUN_03fd0c9c();
    }
  }
  lVar3 = *(long *)(unaff_x21 + 0x50);
  if (lVar3 == 0) {
    if (unaff_x20 != 0) {
LAB_052c754c:
      uVar2 = FUN_03fd275c();
      *unaff_x19 = uVar2;
      thunk_FUN_02f411dc();
      return *unaff_x19;
    }
  }
  else if (unaff_x20 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = lVar3;
        thunk_FUN_02f411dc();
      }
      else {
        FUN_03fd0c9c();
      }
      goto LAB_052c754c;
    }
  }
LAB_052c7534:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


