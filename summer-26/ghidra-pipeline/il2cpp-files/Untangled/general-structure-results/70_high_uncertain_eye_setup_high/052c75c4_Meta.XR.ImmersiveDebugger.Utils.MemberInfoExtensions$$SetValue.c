/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.MemberInfoExtensions$$SetValue
ENTRY_POINT: 052c75c4
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_Utils_MemberInfoExtensions__SetValue(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = thunk_FUN_02ef1808();
  FUN_05645a04(lVar1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(unaff_x20 + 0x18);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    uVar2 = *(undefined8 *)(unaff_x20 + 0x1c);
    *(undefined8 *)(lVar1 + 0x24) = *(undefined8 *)(unaff_x20 + 0x24);
    *(undefined8 *)(lVar1 + 0x1c) = uVar2;
    if (*(long *)(unaff_x20 + 0x30) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_052c76cc();
    }
    *(undefined8 *)(lVar1 + 0x30) = uVar2;
    thunk_FUN_02f411dc();
    if (*(long *)(unaff_x20 + 0x38) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_052c76cc();
    }
    *(undefined8 *)(lVar1 + 0x38) = uVar2;
    thunk_FUN_02f411dc();
    if (*(long *)(unaff_x20 + 0x40) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_052c76cc();
    }
    *(undefined8 *)(lVar1 + 0x40) = uVar2;
    thunk_FUN_02f411dc();
    if (*(long *)(unaff_x20 + 0x48) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_052c76cc();
    }
    *(undefined8 *)(lVar1 + 0x48) = uVar2;
    thunk_FUN_02f411dc();
    if (*(long *)(unaff_x20 + 0x50) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_052c76cc();
    }
    *(undefined8 *)(lVar1 + 0x50) = uVar2;
    thunk_FUN_02f411dc();
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


