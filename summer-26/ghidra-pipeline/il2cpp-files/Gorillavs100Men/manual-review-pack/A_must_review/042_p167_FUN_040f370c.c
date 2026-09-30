/*
FUNCTION_NAME: FUN_040f370c
ENTRY_POINT: 040f370c
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 83
LABEL: attempted_dynamic_eye_tracked_foveation_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_2;strong_foveation_hits_1;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_040f370c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0206154c();
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_040c9e04(param_1,0);
  }
  if (DAT_04927670 == (code *)0x0) {
    DAT_04927670 = (code *)FUN_02061268(
                                       "UnityEngine.Rendering.CommandBuffer::ConfigureFoveatedRendering_Injected(System.IntPtr,System.IntPtr)"
                                       );
  }
                    /* WARNING: Could not recover jumptable at 0x040f375c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_04927670)(lVar1,param_2);
  return;
}


