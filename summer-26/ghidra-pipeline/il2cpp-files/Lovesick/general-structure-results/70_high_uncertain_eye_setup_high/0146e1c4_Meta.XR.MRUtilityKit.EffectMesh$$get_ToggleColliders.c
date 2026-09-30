/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$get_ToggleColliders
ENTRY_POINT: 0146e1c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__get_ToggleColliders
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long unaff_x20;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  uStack0000000000000000 = param_1;
  uStack0000000000000004 = param_2;
  uStack0000000000000008 = param_3;
  uStack000000000000000c = param_4;
  thunk_FUN_00d61fa0();
  if (unaff_x20 != 0) {
    FUN_0146af84();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


