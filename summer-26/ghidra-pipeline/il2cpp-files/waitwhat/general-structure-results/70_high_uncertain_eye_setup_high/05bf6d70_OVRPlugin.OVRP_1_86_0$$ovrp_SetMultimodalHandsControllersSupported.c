/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_SetMultimodalHandsControllersSupported
ENTRY_POINT: 05bf6d70
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_86_0__ovrp_SetMultimodalHandsControllersSupported
               (long param_1,undefined8 param_2)

{
  uint in_w9;
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  uint unaff_w20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (unaff_w20 < in_w9) {
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (unaff_w20 < *(uint *)(lVar1 + 0x18)) {
      param_1 = param_1 + (long)(int)unaff_w20 * 0x1c;
      lVar1 = lVar1 + (long)(int)unaff_w20 * 0x1c;
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(param_1 + 0x38);
      *(undefined8 *)(lVar1 + 0x30) = uVar2;
      *(undefined8 *)(lVar1 + 0x28) = uVar4;
      *(undefined8 *)(lVar1 + 0x20) = uVar3;
      FUN_05bf6f84(param_2,unaff_w20,*(undefined8 *)(unaff_x19 + 0x38));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


