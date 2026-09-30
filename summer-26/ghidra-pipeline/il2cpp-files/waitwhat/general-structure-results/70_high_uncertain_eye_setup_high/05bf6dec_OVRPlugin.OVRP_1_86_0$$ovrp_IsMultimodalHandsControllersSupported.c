/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_IsMultimodalHandsControllersSupported
ENTRY_POINT: 05bf6dec
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported
               (undefined8 *param_1,long param_2)

{
  long lVar1;
  uint unaff_w20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_05bf6e38();
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if (unaff_w20 < *(uint *)(lVar1 + 0x18)) {
    lVar1 = lVar1 + (long)(int)unaff_w20 * 0x1c;
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    uVar4 = *(undefined8 *)(lVar1 + 0x34);
    uVar3 = *(undefined8 *)(lVar1 + 0x2c);
    param_1[1] = *(undefined8 *)(lVar1 + 0x28);
    *param_1 = uVar2;
    *(undefined8 *)((long)param_1 + 0x14) = uVar4;
    *(undefined8 *)((long)param_1 + 0xc) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


