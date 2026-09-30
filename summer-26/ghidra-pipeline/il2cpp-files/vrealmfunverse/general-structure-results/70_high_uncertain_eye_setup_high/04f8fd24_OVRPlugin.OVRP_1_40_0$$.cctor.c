/*
FUNCTION_NAME: OVRPlugin.OVRP_1_40_0$$.cctor
ENTRY_POINT: 04f8fd24
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_40_0___cctor(float param_1,float param_2)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  undefined4 unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar3;
  
  fVar3 = SQRT(unaff_s13 * unaff_s13 + param_1 + param_2) - ABS(unaff_s11);
  UnityEngine_UIElements_StyleBackgroundPosition___ctor(unaff_s12);
  FUN_05d0bed4(unaff_s12 + unaff_s12 + fVar3);
  FUN_05d0c05c();
  if (DAT_066c1d9f == '\0') {
    FUN_02b3c81c(PTR_DAT_06312438);
    DAT_066c1d9f = '\x01';
  }
  fVar2 = 0.0;
  if (0.0 <= unaff_s11) {
    fVar2 = unaff_s11;
  }
  lVar1 = *(long *)(*(long *)PTR_DAT_06312438 + 0xb8);
  fVar2 = fVar2 + fVar3 * 0.5;
  FUN_05d0bbc4(fVar2 * *(float *)(lVar1 + 0x48),fVar2 * *(float *)(lVar1 + 0x4c),
               fVar2 * *(float *)(lVar1 + 0x50));
  lVar1 = FUN_05c89340();
  if (lVar1 != 0) {
    FUN_05c9caa4();
    FUN_05c9cce4(unaff_s10,lVar1,0);
    lVar1 = FUN_05c89410();
    if (lVar1 != 0) {
      FUN_05c8ca64(lVar1,*(undefined4 *)(unaff_x19 + 0x4c),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


