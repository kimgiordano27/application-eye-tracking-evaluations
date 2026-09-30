/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenDepthTolerance
ENTRY_POINT: 09082784
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance
               (float *param_1,float param_2)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  long unaff_x20;
  long *unaff_x21;
  float fVar3;
  float unaff_s8;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined4 in_stack_00000000;
  
  param_2 = unaff_s8 * unaff_s8 + param_2;
  if (*param_1 <= param_2) {
    fVar3 = unaff_s13 * unaff_s8 + unaff_s11 * unaff_s15 + unaff_s12 * unaff_s14;
    unaff_s11 = unaff_s11 - (unaff_s15 * fVar3) / param_2;
    unaff_s12 = unaff_s12 - (unaff_s14 * fVar3) / param_2;
    unaff_s13 = unaff_s13 - (unaff_s8 * fVar3) / param_2;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_0907faf0(in_stack_00000000,*(long *)(unaff_x19 + 0x20),0);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if (*(char *)(unaff_x20 + 0x3e4) == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      *(undefined1 *)(unaff_x20 + 0x3e4) = 1;
    }
    lVar1 = *(long *)(*unaff_x21 + 0xb8);
    FUN_0a16ab34(unaff_s11,unaff_s12,unaff_s13,*(undefined4 *)(lVar1 + 0x18),
                 *(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0x20),0);
    if (lVar2 != 0) {
      FUN_0907fa30(lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


