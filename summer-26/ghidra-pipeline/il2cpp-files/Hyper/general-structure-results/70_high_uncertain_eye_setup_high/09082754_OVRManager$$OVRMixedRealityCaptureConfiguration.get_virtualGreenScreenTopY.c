/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenTopY
ENTRY_POINT: 09082754
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


void OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY(long param_1)

{
  long lVar1;
  int in_w9;
  long unaff_x19;
  long lVar2;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined4 in_stack_00000000;
  
  fVar5 = *(float *)(param_1 + 0x20);
  if (in_w9 == 0) {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    *(undefined1 *)(unaff_x22 + 0x3e5) = 1;
  }
  fVar3 = fVar5 * fVar5 + unaff_s15 * unaff_s15 + unaff_s14 * unaff_s14;
  if (**(float **)(*unaff_x23 + 0xb8) <= fVar3) {
    fVar4 = unaff_s13 * fVar5 + unaff_s11 * unaff_s15 + unaff_s12 * unaff_s14;
    unaff_s11 = unaff_s11 - (unaff_s15 * fVar4) / fVar3;
    unaff_s12 = unaff_s12 - (unaff_s14 * fVar4) / fVar3;
    unaff_s13 = unaff_s13 - (fVar5 * fVar4) / fVar3;
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


