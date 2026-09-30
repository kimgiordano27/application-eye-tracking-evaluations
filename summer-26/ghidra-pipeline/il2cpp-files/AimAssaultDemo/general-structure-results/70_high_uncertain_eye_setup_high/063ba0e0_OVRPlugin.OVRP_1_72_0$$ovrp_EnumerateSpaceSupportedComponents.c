/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_EnumerateSpaceSupportedComponents
ENTRY_POINT: 063ba0e0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_EnumerateSpaceSupportedComponents
               (undefined4 param_1,float param_2,float param_3,undefined4 param_4,long param_5)

{
  long unaff_x19;
  long lVar1;
  undefined4 uVar2;
  float unaff_s10;
  float fVar3;
  
  *(undefined4 *)(unaff_x19 + 0x98) = param_1;
  *(float *)(unaff_x19 + 0x9c) = param_2;
  *(float *)(unaff_x19 + 0xa0) = param_3;
  *(undefined4 *)(unaff_x19 + 0xa4) = param_4;
  if (param_5 != 0) {
    fVar3 = *(float *)(unaff_x19 + 0x24);
    FUN_075ba3c0(param_5,0);
    if (*(long *)(unaff_x19 + 0x90) != 0) {
      FUN_075ba3c0(*(long *)(unaff_x19 + 0x90),0);
      param_2 = param_2 * unaff_s10;
      param_3 = param_3 * unaff_s10;
      uVar2 = FUN_07599c38(fVar3 * unaff_s10,0);
      lVar1 = *(long *)(unaff_x19 + 0x90);
      *(undefined4 *)(unaff_x19 + 0xa8) = uVar2;
      *(float *)(unaff_x19 + 0xac) = param_2;
      *(float *)(unaff_x19 + 0xb0) = param_3;
      *(undefined4 *)(unaff_x19 + 0xb4) = param_4;
      FUN_07599a90(*(undefined4 *)(unaff_x19 + 0x98),*(undefined4 *)(unaff_x19 + 0x9c),
                   *(undefined4 *)(unaff_x19 + 0xa0),*(undefined4 *)(unaff_x19 + 0xa4),0);
      if (lVar1 != 0) {
        FUN_075ba420(lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


