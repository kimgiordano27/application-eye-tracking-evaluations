/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$OnLoad
ENTRY_POINT: 052c419c
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__OnLoad
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x21;
  undefined4 uVar4;
  
  puVar1 = PTR_DAT_06d3d460;
  if (unaff_x21 == 0) {
    unaff_x21 = FUN_066c67b0();
  }
  lVar2 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_052c7580(lVar2,0);
  if ((unaff_x21 != 0) && (uVar4 = FUN_066d3ed0(unaff_x21,0), lVar2 != 0)) {
    *(undefined4 *)(lVar2 + 0x10) = uVar4;
    *(undefined4 *)(lVar2 + 0x14) = param_2;
    *(undefined4 *)(lVar2 + 0x18) = param_3;
    uVar4 = FUN_066d4b64(unaff_x21,0);
    *(undefined4 *)(lVar2 + 0x1c) = uVar4;
    *(undefined4 *)(lVar2 + 0x20) = param_2;
    *(undefined4 *)(lVar2 + 0x24) = param_3;
    *(undefined4 *)(lVar2 + 0x28) = param_4;
    if (*(long *)(unaff_x19 + 0x58) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_052c63c0(*(long *)(unaff_x19 + 0x58),0);
    }
    *(undefined8 *)(lVar2 + 0x30) = uVar3;
    thunk_FUN_02f411dc();
    if (*(long *)(unaff_x19 + 0x60) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_052c63c0(*(long *)(unaff_x19 + 0x60),0);
    }
    *(undefined8 *)(lVar2 + 0x38) = uVar3;
    thunk_FUN_02f411dc();
    if (*(long *)(unaff_x19 + 0x68) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_052c63c0(*(long *)(unaff_x19 + 0x68),0);
    }
    *(undefined8 *)(lVar2 + 0x40) = uVar3;
    thunk_FUN_02f411dc();
    if (*(long *)(unaff_x19 + 0x70) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_052c63c0(*(long *)(unaff_x19 + 0x70),0);
    }
    *(undefined8 *)(lVar2 + 0x48) = uVar3;
    thunk_FUN_02f411dc();
    if (*(long *)(unaff_x19 + 0x78) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_052c63c0(*(long *)(unaff_x19 + 0x78),0);
    }
    *(undefined8 *)(lVar2 + 0x50) = uVar3;
    thunk_FUN_02f411dc();
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


