/*
FUNCTION_NAME: OVRManager$$SetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 04f43fe0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__SetDynamicFoveatedRenderingEnabled
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],undefined1 param_5 [16],undefined1 param_6 [16],float param_7
               ,undefined1 param_8 [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar3 = NEON_ext(param_2,param_2,0xc,1);
  auVar1._4_4_ = param_8._8_4_;
  auVar1._0_4_ = param_8._0_4_;
  auVar1._8_4_ = param_8._0_4_;
  auVar1._12_4_ = param_8._4_4_;
  auVar1 = NEON_rev64(auVar1,4);
  auVar2._0_4_ = (param_6._0_4_ + param_5._0_4_ * param_3._0_4_ + param_2._4_4_) -
                 auVar1._0_4_ * param_1._0_4_;
  auVar2._4_4_ = (param_6._4_4_ + param_5._4_4_ * param_3._4_4_ + param_2._8_4_) -
                 auVar1._4_4_ * param_1._4_4_;
  auVar2._8_4_ = (param_6._8_4_ + param_5._8_4_ * param_3._8_4_ + auVar3._4_4_) -
                 auVar1._8_4_ * param_1._8_4_;
  auVar2._12_4_ =
       ((param_4._12_4_ - param_7 * param_3._12_4_) - param_2._12_4_) -
       auVar1._12_4_ * param_1._12_4_;
  FUN_04f3f808(auVar2._4_4_,auVar2._8_4_,auVar2,auVar2._12_4_);
  return;
}


