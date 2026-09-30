/*
FUNCTION_NAME: OVRPlugin$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 090a2500
PROGRAM: Hyper-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_fixedFoveatedRenderingLevel
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16])

{
  undefined8 *unaff_x19;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  uStack0000000000000038 = param_2._12_4_;
  uStack000000000000002c = param_2._0_4_;
  unaff_x19[1] = CONCAT44(uStack000000000000002c,param_1._8_4_);
  *unaff_x19 = param_1._0_8_;
  unaff_x19[3] = CONCAT44(uStack000000000000003c,uStack0000000000000038);
  unaff_x19[2] = param_2._4_8_;
  unaff_x19[5] = param_3._8_8_;
  unaff_x19[4] = param_3._0_8_;
  return;
}


