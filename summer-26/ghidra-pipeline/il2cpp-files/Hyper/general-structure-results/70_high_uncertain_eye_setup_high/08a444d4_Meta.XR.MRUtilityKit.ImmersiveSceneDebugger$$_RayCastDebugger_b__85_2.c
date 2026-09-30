/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<RayCastDebugger>b__85_2
ENTRY_POINT: 08a444d4
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4 Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<RayCastDebugger>b__85_2(float param_1)

{
  long unaff_x19;
  float fVar1;
  float unaff_s9;
  float unaff_s10;
  undefined4 uStack0000000000000008;
  
  if ((*(byte *)(unaff_x19 + 0x44e) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac0bcd0);
    *(undefined1 *)(unaff_x19 + 0x44e) = 1;
  }
  if (unaff_s9 - param_1 < unaff_s10) {
    fVar1 = (param_1 + unaff_s9) * 0.5;
    param_1 = fVar1 - unaff_s10 * 0.5;
    if (0.0 <= param_1) {
      unaff_s9 = fVar1 + unaff_s10 * 0.5;
      if (1.0 < unaff_s9) {
        param_1 = 1.0 - unaff_s10;
        unaff_s9 = 1.0;
      }
    }
    else {
      param_1 = 0.0;
      unaff_s9 = unaff_s10 + 0.0;
    }
  }
  _uStack0000000000000008 = 0;
  FUN_07acdd94(param_1,unaff_s9,&stack0x00000008,*(undefined8 *)PTR_DAT_0ac0bcd0);
  return uStack0000000000000008;
}


